#pragma once
#include <string>
#include <vector>
#include <JSON.hpp>
#include <httplib.h>

struct YouTubeVideo {
    std::string title;
    std::string channel;
    std::string videoId;
    std::string thumbnailUrl;
};

class YouTubeSearch {
public:
    YouTubeSearch(const std::string& apiKey);
    std::vector<YouTubeVideo> search(const std::string& query, int maxResults = 5);

private:
    std::string apiKey_;
};

