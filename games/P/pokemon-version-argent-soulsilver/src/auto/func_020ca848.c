/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02075780 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndPlayerInfo {
    u8 seqMax;
    u8 unk_01;
    u16 allocChBitFlag;
    u32 heapSize;
} UnkSndPlayerInfo;
extern void *func_020c9634(void);
extern void *func_020c97ec(int index);
extern void func_020c7f8c(int playerNo, int seqMax);
extern void func_020c7fac(int playerNo, u32 allocChBitFlag);
extern BOOL func_020c7fc4(int playerNo, void *heap, u32 size);
BOOL func_020ca848(void *heap) {
    int i;

    func_020c9634();

    for (i = 0; i < 32; i++) {
        UnkSndPlayerInfo *info = func_020c97ec(i);
        if (info == 0) {
            continue;
        }

        func_020c7f8c(i, info->seqMax);
        func_020c7fac(i, info->allocChBitFlag);

        if (info->heapSize != 0 && heap != 0) {
            int j;
            for (j = 0; j < info->seqMax; j++) {
                if (!func_020c7fc4(i, heap, info->heapSize)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}
