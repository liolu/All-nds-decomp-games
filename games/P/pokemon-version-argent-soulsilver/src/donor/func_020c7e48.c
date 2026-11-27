/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndWaveOutSetVolume from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_waveout.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct NNSSndWaveOutHandle {
    u32 channelNo;
    int baseRate;
    u32 active;
    u32 started;
    u32 commandTag;
} NNSSndWaveOutHandle;
extern void func_020d52a0(u32 chBitMask, int volume, int shift);
extern void func_020c7e48(NNSSndWaveOutHandle *handle, u32 volume);
void func_020c7e48(NNSSndWaveOutHandle *handle, u32 volume) {
    if (handle->active == 0) {
        return;
    }
    func_020d52a0(1 << handle->channelNo, volume, 0);
}
