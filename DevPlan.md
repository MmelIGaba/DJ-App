# Development Roadmap

This plan goes step-by-step from minimal functionality to advanced DJ features.  
Each phase should be functional and testable before moving forward.

---

## Phase 1 - Backend Foundation (Weeks 1-2)

**Goal:** Implement a working C++ backend that searches YouTube and returns metadata.

### Tasks
- Initialize C++ project
- Add HTTP library (cpp-httplib or Boost.Beast)
- Configure YouTube API key
- Implement Search request
- Parse JSON responses
- Return title, URL, channel, thumbnail

**Output:**  
Console app where user searches "Amapiano" and results print.

---

## Phase 2 - Audio Playback (Weeks 2-3)

**Goal:** Stream a single audio source from YouTube.

### Tasks
- Add PortAudio or JUCE
- Play audio stream (not download)
- Play / Pause
- Volume control

**Output:**  
One YouTube track can stream and play.

---

## Phase 3 - Dual Deck System (Weeks 3-4)

**Goal:** Play two audio streams simultaneously with crossfade.

### Tasks
- Deck A + Deck B
- Load separate sources
- Manual crossfade slider
- Fix latency and buffering

**Output:**  
Two independent tracks mixing together.

---

## Phase 4 - Basic Frontend UI (Weeks 4-5)

**Goal:** Provide visual interface for search and mixing.

### Tasks
- Search field
- Results list
- Deck panels
- Crossfade control
- Volume and playback buttons

**Output:**  
User can load 2 songs and mix visually.

---

## Phase 5 - Professional Audio Features (Weeks 5-8)

**Goal:** Add intermediate audio processing.

### Tasks
- Equalizer (bass, mid, treble)
- Waveform visualizer (FFT)
- Looping controls
- Seek timeline

**Output:**  
More advanced mixing/audio control.

---

## Phase 6 - Advanced Extensions (Ongoing)

**Goal:** Long-term powerful DJ features.

### Tasks
- BPM detection
- Auto beat matching
- Audio effects (filters, delay, reverb)
- Remote listeners and live streaming
- AI playlist recommendations
- Mobile UI

**Output:**  
Feature-rich DJ system similar to pro DJ software.

---

## Done when
- It can search
- It can stream
- It can mix two tracks
- It has UI mixing controls

Everything else is iterative.

