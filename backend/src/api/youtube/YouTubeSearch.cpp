#include "YouTubeSearch.hpp"
#include <iostream>

YouTubeSearch::YouTubeSearch(const std::string& apiKey) : apiKey_(apiKey) {}

std::vector<YouTubeVideo> YouTubeSearch::search(const std::string& query, int maxResults) {
    std::vector<YouTubeVideo> results;

    httplib::SSLClient cli("www.googleapis.com");
    std::string url = "/youtube/v3/search?part=snippet&type=video&q=" + query +
                      "&maxResults=" + std::to_string(maxResults) +
                      "&key=" + apiKey_;

    if (auto res = cli.Get(url.c_str())) {
        if (res->status == 200) {
            auto json = nlohmann::json::parse(res->body);
            for (auto& item : json["items"]) {
                YouTubeVideo vid;
                vid.title = item["snippet"]["title"];
                vid.channel = item["snippet"]["channelTitle"];
                vid.videoId = item["id"]["videoId"];
                vid.thumbnailUrl = item["snippet"]["thumbnails"]["default"]["url"];
                results.push_back(vid);
            }
        }
    } else {
        std::cerr << "Error: Could not connect to YouTube API" << std::endl;
    }

    return results;
}

