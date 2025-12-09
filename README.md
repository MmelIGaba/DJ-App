# DJ App (C++ + YouTube Streaming) 

A modern DJ application built with **C++** that mixes audio tracks streamed directly from **YouTube**, featuring dual-deck mixing, crossfader control, and a roadmap toward advanced features such as EQ, BPM detection, and audio effects.

## Features (MVP)
- Search YouTube using YouTube Data API
- Stream audio (no downloading)
- Playback controls (play/pause)
- Dual deck audio mixing
- Crossfade between tracks

---

##  Project Goals
- Build a real-time DJ engine in C++
- Be legally compliant (stream-only)
- Provide low-latency audio mixing
- Evolve into a professional DJ platform

---

##  Tech Stack
### Backend (Core)
- C++
- PortAudio or JUCE
- cpp-httplib or Boost.Beast
- nlohmann::json

### External Services
- YouTube Data API v3

---

##  Local Setup (Coming Soon)
> Detailed setup instructions, dependencies and build scripts will be added during Phase 1.

---

##  Development Roadmap
### Phase 1 - Backend foundation
- YouTube search + metadata

### Phase 2 - Audio playback
- Stream single sound source

### Phase 3 - Dual deck system
- Crossfade and mixing engine

### Phase 4 - Frontend UI
- Search bar + deck controls

### Phase 5 - Audio features
- EQ, waveform, effects

### Phase 6 - Advanced
- BPM sync, live streaming, mobile

More details in `docs/spec.md`.

---

## MVP Definition
The app is considered MVP-ready when:
- It can search
- It can play a track
- It can load two tracks
- It can crossfade between them

---

## Legal
This project streams audio using the YouTube API.  
- No audio downloading
- No storing files
- Must comply with YouTube Terms of Service

---

## Contributing
Guidelines coming soon.

---

## Documentation
- `/docs/spec.tex` - Technical specification
- `/docs/roadmap.md`
- `/docs/api.md` (coming soon)

---

## Future Ideas
- BPM detection
- Auto beat matching
- Waveform visualizer
- Live social party rooms
- AI playlist suggestions
- Mobile clients

---

## Author
This project is being built by an independent development team pushing real-time audio engineering forward.


