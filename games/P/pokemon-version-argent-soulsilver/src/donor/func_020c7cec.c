/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndWaveOutStart from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSystem/src/snd_waveout.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef enum NNSSndWaveFormat {
    NNS_SND_WAVE_FORMAT_PCM8,
    NNS_SND_WAVE_FORMAT_PCM16
} NNSSndWaveFormat;
typedef struct NNSSndWaveOut *NNSSndWaveOutHandle;
extern u32 func_020d59fc(void);
extern void func_020d5174(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_020d52e8(s32 chNo, s32 format, const void *data, s32 loopMode, s32 loopStart, s32 dataLen, s32 volume,
                          s32 shift, s32 timer, s32 pan);
struct NNSSndWaveOut {
    u32 chNo;
    int sampleRate;
    BOOL isPlaying;
    BOOL isStarted;
    u32 startTag;
};
extern BOOL func_020c7cec(NNSSndWaveOutHandle handle, NNSSndWaveFormat format, const void *data, BOOL loopFlag,
                          int loopStartSample, int samples, int sampleRate, int volume, int speed, int pan);
#pragma force_active on
BOOL func_020c7cec(NNSSndWaveOutHandle handle, NNSSndWaveFormat format, const void *data, BOOL loopFlag, int loopStartSample,
                   int samples, int sampleRate, int volume, int speed, int pan) {
    int loopStart, loopLen;
    switch (format) {
        case NNS_SND_WAVE_FORMAT_PCM8:
            loopStart = loopStartSample >> 2;
            loopLen   = (samples >> 2) - loopStart;
            break;
        case NNS_SND_WAVE_FORMAT_PCM16:
            loopStart = loopStartSample >> 1;
            loopLen   = (samples >> 1) - loopStart;
            break;
    }
    u64 timer = 0x7FD87F8000ULL / sampleRate / speed;
    if (timer < 16) {
        timer = 16;
    } else if (timer > 65535) {
        timer = 65535;
    }
    func_020d52e8(handle->chNo, format, data, loopFlag ? 1 : 2, loopStart, loopLen, volume, 0, (u32) timer, pan);
    func_020d5174(1 << handle->chNo, 0, 0, 0);
    handle->isPlaying  = 1;
    handle->isStarted  = 0;
    handle->startTag   = func_020d59fc();
    handle->sampleRate = sampleRate;
    return 1;
}
