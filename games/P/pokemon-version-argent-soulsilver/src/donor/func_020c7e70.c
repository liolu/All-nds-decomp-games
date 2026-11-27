/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndWaveOutSetSpeed from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_waveout.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct NNSSndWaveOutHandle {
    u32 channelNo;
    int baseRate;
    u32 active;
    u32 started;
    u32 commandTag;
} NNSSndWaveOutHandle;
extern void func_020d5280(u32 chBitMask, int timer);
extern void func_020c7e70(NNSSndWaveOutHandle *handle, int speed);
void func_020c7e70(NNSSndWaveOutHandle *handle, int speed) {
    u64 timer;

    if (handle->active == 0) {
        return;
    }
    timer = 0x7FD87F8000ULL / handle->baseRate / speed;
    if (timer < 0x10) {
        timer = 0x10;
    } else if (timer > 0xFFFF) {
        timer = 0xFFFF;
    }
    func_020d5280(1 << handle->channelNo, (u32) timer);
}
