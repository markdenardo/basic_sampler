#include <iostream>
#include "SamplerAU.h"

// Define the entry point for the Audio Unit
extern "C" void* Construct() {
    return new SamplerAU(nullptr);
}

int main() {
    AUDIOCOMPONENT_ENTRY(AUMusicDeviceFactory, SamplerAU)
    return 0;
}
