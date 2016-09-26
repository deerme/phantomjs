/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * Copyright (C) 2011 Google Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY GOOGLE, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EventTargetInterfaces_h
#define EventTargetInterfaces_h

#if ENABLE(BATTERY_STATUS)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BATTERY_STATUS(macro) \
    macro(BatteryManager) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BATTERY_STATUS
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BATTERY_STATUS(macro)
#endif

#if ENABLE(BLOB)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BLOB(macro) \
    macro(FileReader) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BLOB
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BLOB(macro)
#endif

#if ENABLE(ENCRYPTED_MEDIA_V2)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_ENCRYPTED_MEDIA_V2(macro) \
    macro(MediaKeySession) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_ENCRYPTED_MEDIA_V2
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_ENCRYPTED_MEDIA_V2(macro)
#endif

#if ENABLE(FILE_SYSTEM)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FILE_SYSTEM(macro) \
    macro(FileWriter) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FILE_SYSTEM
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FILE_SYSTEM(macro)
#endif

#if ENABLE(FONT_LOAD_EVENTS)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FONT_LOAD_EVENTS(macro) \
    macro(FontLoader) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FONT_LOAD_EVENTS
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FONT_LOAD_EVENTS(macro)
#endif

#if ENABLE(INDEXED_DATABASE)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_INDEXED_DATABASE(macro) \
    macro(IDBDatabase) \
    macro(IDBOpenDBRequest) \
    macro(IDBRequest) \
    macro(IDBTransaction) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_INDEXED_DATABASE
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_INDEXED_DATABASE(macro)
#endif

#if ENABLE(MEDIA_SOURCE)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_SOURCE(macro) \
    macro(MediaSource) \
    macro(SourceBufferList) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_SOURCE
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_SOURCE(macro)
#endif

#if ENABLE(MEDIA_STREAM)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_STREAM(macro) \
    macro(LocalMediaStream) \
    macro(MediaStream) \
    macro(MediaStreamTrack) \
    macro(RTCDTMFSender) \
    macro(RTCDataChannel) \
    macro(RTCPeerConnection) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_STREAM
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_STREAM(macro)
#endif

#if ENABLE(NETWORK_INFO)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NETWORK_INFO(macro) \
    macro(NetworkInfoConnection) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NETWORK_INFO
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NETWORK_INFO(macro)
#endif

#if ENABLE(NOTIFICATIONS) || ENABLE(LEGACY_NOTIFICATIONS)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NOTIFICATIONS(macro) \
    macro(Notification) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NOTIFICATIONS
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NOTIFICATIONS(macro)
#endif

#if ENABLE(SCRIPTED_SPEECH)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SCRIPTED_SPEECH(macro) \
    macro(SpeechRecognition) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SCRIPTED_SPEECH
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SCRIPTED_SPEECH(macro)
#endif

#if ENABLE(SHARED_WORKERS)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SHARED_WORKERS(macro) \
    macro(SharedWorker) \
    macro(SharedWorkerGlobalScope) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SHARED_WORKERS
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SHARED_WORKERS(macro)
#endif

#if ENABLE(SPEECH_SYNTHESIS)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SPEECH_SYNTHESIS(macro) \
    macro(SpeechSynthesisUtterance) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SPEECH_SYNTHESIS
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SPEECH_SYNTHESIS(macro)
#endif

#if ENABLE(SVG)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SVG(macro) \
    macro(SVGElementInstance) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SVG
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SVG(macro)
#endif

#if ENABLE(VIDEO)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO(macro) \
    macro(MediaController) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO(macro)
#endif

#if ENABLE(VIDEO_TRACK)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO_TRACK(macro) \
    macro(AudioTrackList) \
    macro(TextTrack) \
    macro(TextTrackCue) \
    macro(TextTrackList) \
    macro(VideoTrackList) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO_TRACK
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO_TRACK(macro)
#endif

#if ENABLE(WEB_AUDIO)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_AUDIO(macro) \
    macro(AudioContext) \
    macro(AudioNode) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_AUDIO
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_AUDIO(macro)
#endif

#if ENABLE(WEB_SOCKETS)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_SOCKETS(macro) \
    macro(WebSocket) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_SOCKETS
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_SOCKETS(macro)
#endif

#if ENABLE(WEB_TIMING)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_TIMING(macro) \
    macro(Performance) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_TIMING
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_TIMING(macro)
#endif

#if ENABLE(WORKERS)
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WORKERS(macro) \
    macro(DedicatedWorkerGlobalScope) \
    macro(Worker) \
// End of DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WORKERS
#else
#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WORKERS(macro)
#endif

#define DOM_EVENT_TARGET_INTERFACES_FOR_EACH(macro) \
    \
    macro(DOMApplicationCache) \
    macro(DOMWindow) \
    macro(EventSource) \
    macro(MessagePort) \
    macro(Node) \
    macro(WebKitNamedFlow) \
    macro(XMLHttpRequest) \
    macro(XMLHttpRequestUpload) \
    \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BATTERY_STATUS(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_BLOB(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_ENCRYPTED_MEDIA_V2(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FILE_SYSTEM(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_FONT_LOAD_EVENTS(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_INDEXED_DATABASE(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_SOURCE(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_MEDIA_STREAM(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NETWORK_INFO(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_NOTIFICATIONS(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SCRIPTED_SPEECH(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SHARED_WORKERS(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SPEECH_SYNTHESIS(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_SVG(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_VIDEO_TRACK(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_AUDIO(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_SOCKETS(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WEB_TIMING(macro) \
    DOM_EVENT_TARGET_INTERFACES_FOR_EACH_WORKERS(macro) \

#endif // EventTargetInterfaces_h
