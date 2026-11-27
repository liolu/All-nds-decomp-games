/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndWaveOutStop from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_waveout.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct NNSSndWaveOutHandle {
    u32 channelNo;
    int baseRate;
    u32 active;
    u32 started;
    u32 commandTag;
} NNSSndWaveOutHandle;
extern void func_020d519c(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_020c7e0c(NNSSndWaveOutHandle *handle);
void func_020c7e0c(NNSSndWaveOutHandle *handle) {
    if (handle->active == 0) {
        return;
    }
    func_020d519c(1 << handle->channelNo, 0, 0, 0);
    handle->active = 0;
}
