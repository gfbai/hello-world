# Mobvoi SDK for Speech Recognition and Text-to-Speech

<!-- ## Introduction -->
SDK for the development of *Automatic Speech Recognition (ASR)* and *Text-to-Speech (TTS)* applications

## Features
- [x] Hotword Wakeup
- [x] Online Automatic Speech Recognition (ASR), which includes
    * Speech Recognition
    * Speech Understanding
    * Vertical Search
- [x] Offline Automatic Speech Recognition (ASR)
- [x] Mixed Automatic Speech Recognition (ASR)
- [x] Multi-Keywords Activation
- [x] Online Text-to-Speech (TTS)
- [x] Offline Text-to-Speech (TTS)
- [x] Mixed Text-to-Speech (TTS)

## Language support

- [x] Chinese Mandarin
- [x] American English (Coming soon)
- [x] Chinese Cantonese (Coming soon)

## Supported platforms

The SDK is validated in the following platforms:

- [x] Ubuntu Linux on x86_64
- [x] Linux on ARMv7 (Rasperberry)
- [x] Linux on ARMv8 (Rasperberry)

<!--
## License
* Built-in license
* Free Trial license
* Commercial license
-->

## File hierarchy

| File/Directoy  | Purpose                                                           |
|:---------------|:------------------------------------------------------------------|
| include        | Contains the SDK header file (speech_sdk.h)                       |
| lib            | Contains the library (libmobvoisdk.so) for different platforms    |
| .mobvoi        | Contains the configurations for the SDK. It is a hidden directory.|
| samples        | Sample code and binaries built based on the SDK                   |

## Usage

* The *.mobvoi* (hidden directory) contains info for SDK to run. SDK may also write to the directory. So you should install it to a writable directory
* Specify the location (.mobvoi directory's parent directory) to *mobvoi_sdk_init()* in your program.
  ** If you don't specify the location (i.e. specify NULL to *mobvoi_sdk_init()*), SDK assumes the *.mobvoi* directory is in ../..
* Create your program according to the [SDK documentation](http://ai.chumenwenwen.com/pages/document/index) and the sample code in samples/src/
* When build your program, link *libmobvoisdk.so* provided in *lib/{arch}/*
* When run your program, specify the location for *libmobvoisdk.so* to *LD_LIBRARY_PATH* environment variable

## Samples

Several sample programs are provided in the samples/ directory:

| Program        | Purpose                                                         |
|:---------------|:----------------------------------------------------------------|
| asr            | Shows how to do hotword wakeup and speech recognition           |
| mix_tts        | Shows how to make use of the TTS function                       |
| multi_keywords | Shows how to make use of the multi-keywords activation function |

The binaries on different platforms are also provided.

To run the binaries, specify the location of the *libmobvoisdk.so* to *LD_LIBRARY_PATH*.
The following shows how to run the x86_64 version *asr*:

<pre>
cd samples/bin
LD_LIBRARY_PATH=../../lib/x86_64 ./robot online
</pre>

## Trouble shooting

The following are some hints for SDK trouble shooting:
* SDK generates logs when it runs, you can examine the logs to get clues
* You can get more detailed logs by invoking mobvoi_set_vlog_level(). Invoking mobvoi_set_vlog_level(3) would also record the received PCM audio streams to .mobvoi/audio_dump/record.pcm

## Documentation

Please refer to the [online documentation](http://ai.chumenwenwen.com/pages/document/index).
