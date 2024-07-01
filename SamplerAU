#ifndef SAMPLER_AU_H
#define SAMPLER_AU_H

#include <AudioToolbox/AudioToolbox.h>
#include <vector>

class SamplerAU {
public:
    SamplerAU(AudioUnit component);
    virtual ~SamplerAU();

    virtual OSStatus Initialize();
    virtual OSStatus Render(AudioUnitRenderActionFlags &ioActionFlags,
                            const AudioTimeStamp &inTimeStamp,
                            UInt32 inNumberFrames,
                            AudioBufferList &ioData);

    void LoadSample(const char* path);

private:
    std::vector<float> sampleData;
    UInt32 sampleRate;
    UInt32 numChannels;
    UInt32 sampleLength;
};

#endif // SAMPLER_AU_H
