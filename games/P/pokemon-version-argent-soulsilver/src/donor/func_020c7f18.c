/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndWaveOutIsPlaying from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_waveout.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int BOOL;
typedef struct NNSSndWaveOutHandle {
    u32 channelNo;
    int baseRate;
    u32 active;
    u32 started;
    u32 commandTag;
} NNSSndWaveOutHandle;
extern BOOL func_020d5a28(u32 tag);
extern unsigned long func_020d5d30(void);
extern int func_020c7f18(NNSSndWaveOutHandle *handle);
int func_020c7f18(NNSSndWaveOutHandle *handle) {
    u32 channelStatus;

    if (handle->active == 0) {
        return 0;
    }
    if (handle->started == 0) {
        if (func_020d5a28(handle->commandTag) == 0) {
            return 1;
        }
        handle->started = 1;
    }
    channelStatus = func_020d5d30();
    if (channelStatus & (1u << handle->channelNo)) {
        return 1;
    }
    handle->active = 0;
    return 0;
}
