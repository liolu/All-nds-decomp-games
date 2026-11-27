/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndWaveOutAllocChannel from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_waveout.c (license: none
 * (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct NNSSndWaveOutHandle {
    u32 channelNo;
    int baseRate;
    u32 active;
    u32 started;
    u32 commandTag;
} NNSSndWaveOutHandle;
extern int func_020c7b78(int mask);
extern NNSSndWaveOutHandle *func_020c7c90(u32 slotNo);
extern NNSSndWaveOutHandle data_021df84c[];
int func_020c7b78(int mask);
NNSSndWaveOutHandle *func_020c7c90(u32 slotNo) {
    NNSSndWaveOutHandle *handle;

    if (func_020c7b78(1 << slotNo) == 0) {
        return 0;
    }
    handle            = &data_021df84c[slotNo];
    handle->channelNo = slotNo;
    handle->active    = 0;
    return handle;
}
