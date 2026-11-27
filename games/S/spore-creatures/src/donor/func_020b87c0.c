/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207af44 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_work.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef short s16;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef volatile s16 vs16;
extern void func_020b5b88(void *ptr, u32 size);
typedef struct UnkSndPlayerWork {
    s16 variable[16];
    u32 tickCounter;
} UnkSndPlayerWork;
typedef struct UnkSndSharedWork {
    vu32 finishCommandTag;
    vu32 playerStatus;
    vu16 channelStatus;
    vu16 captureStatus;
    vu32 unk_0c[5];
    UnkSndPlayerWork player[16];
    vs16 globalVariable[16];
} UnkSndSharedWork;
extern UnkSndSharedWork *data_020f3880;
u32 func_020b87c0(s32 playerNo) {
    func_020b5b88((void *) &data_020f3880->player[playerNo].tickCounter, 4);
    return data_020f3880->player[playerNo].tickCounter;
}
