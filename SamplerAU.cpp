//
// Created by MDN on 7/1/24.
//
#include "SamplerAU.h"

SamplerAU::SamplerAU(AudioUnit component) {
    // Initialization code
}

SamplerAU::~SamplerAU() {
    // Cleanup code
}

OSStatus SamplerAU::Initialize() {
    // Set the audio format
    // (Configure your audio format here)
    return noErr;
}

void SamplerAU::LoadSample(const char* path) {
    // Load audio file and store the data in sampleData
    // This can be done using Audio File Services or similar API
}

OSStatus SamplerAU::Render(AudioUnitRenderActionFlags &ioActionFlags,
                           const AudioTimeStamp &inTimeStamp,
                           UInt32 inNumberFrames,
                           AudioBufferList &ioData) {
    // Ensure we have sample data
    if (sampleData.empty()) return noErr;

    // Render the sample data to the output buffer
    for (UInt32 frame = 0; frame < inNumberFrames; ++frame) {
        for (UInt32 channel = 0; channel < numChannels; ++channel) {
            ((float*)ioData.mBuffers[channel].mData)[frame] = sampleData[frame % sampleLength];
        }
    }

    return noErr;
}
