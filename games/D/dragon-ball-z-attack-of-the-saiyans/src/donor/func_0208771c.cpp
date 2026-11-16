/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _Z18GetTouchScreenDataP17TouchScreenSample from https://github.com/DQIX/dqix-decomp src/NitroSDK/TouchScreen.cpp (license:
 * Unlicense), reused by tools/donor_match.py */
struct TouchScreenSample {
    unsigned short x;
    unsigned short y;
    unsigned short isHeld;
    unsigned short missingCoordFlags;
};
typedef void (*TouchScreenCallback)(int, unsigned char, unsigned char);
extern void GetTouchScreenData(TouchScreenSample *output);
struct LinearCoefficients {
    int offset;
    int scale;
    int invScale;
};
extern struct {
    unsigned short isInitialized;
    char pad_2[2];
    TouchScreenCallback callback;

    TouchScreenSample scratchSample;
    unsigned short currentSampleIndex;
    unsigned short numActiveSamples;
    TouchScreenSample *sampleBuffer;
    unsigned short sampleCapacity;
    char pad_1a[2];
    LinearCoefficients coeffs[2];
    unsigned short isCalibrated;

    unsigned short unknown_36;
    unsigned short errors;
    volatile unsigned short currentOperations;
} data_020da584;
static inline void CopyTouchScreenSample(TouchScreenSample *dst, const TouchScreenSample *src) {
    struct RawFormat {
        unsigned short x[4];
    };
    *(RawFormat *) dst = *(const RawFormat *) src;
}
void GetTouchScreenData(TouchScreenSample *output) {
    int i;

    output->missingCoordFlags = 3;
    int current               = data_020da584.currentSampleIndex;
    if (data_020da584.numActiveSamples == 1 || data_020da584.sampleCapacity == 1) {
        CopyTouchScreenSample(output, &data_020da584.sampleBuffer[current]);
        return;
    }

    for (i = 0; i < data_020da584.numActiveSamples && i < data_020da584.sampleCapacity - 1; i++) {
        int sourceIndex = current - i;
        if (sourceIndex < 0) {
            sourceIndex += data_020da584.sampleCapacity;
        }

        TouchScreenSample *entry = &data_020da584.sampleBuffer[sourceIndex];
        if (!entry->isHeld) {
            CopyTouchScreenSample(output, entry);
            return;
        }

        if ((output->missingCoordFlags & 1) && !(entry->missingCoordFlags & 1)) {
            output->x = entry->x;
            if (i != 0) {
                output->missingCoordFlags &= ~1;
            }
        }

        if ((output->missingCoordFlags & 2) && !(entry->missingCoordFlags & 2)) {
            output->y = entry->y;
            if (i != 0) {
                output->missingCoordFlags &= ~2;
            }
        }

        if (output->missingCoordFlags == 0) {
            output->isHeld = true;
            return;
        }
    }
    output->isHeld = true;
}
