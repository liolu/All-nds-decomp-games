/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndArcPlayerSetup from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndArcPlayerSetup.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
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
extern void *func_0208c980(void);
extern void *func_0208cb84(int index);
extern void func_0208b810(int playerNo, int seqMax);
extern void func_0208b830(int playerNo, u32 allocChBitFlag);
extern BOOL func_0208b848(int playerNo, void *heap, u32 size);
BOOL func_0208dab4(void *heap) {
    int i;

    func_0208c980();

    for (i = 0; i < 32; i++) {
        UnkSndPlayerInfo *info = func_0208cb84(i);
        if (info == 0) {
            continue;
        }

        func_0208b810(i, info->seqMax);
        func_0208b830(i, info->allocChBitFlag);

        if (info->heapSize != 0 && heap != 0) {
            int j;
            for (j = 0; j < info->seqMax; j++) {
                if (!func_0208b848(i, heap, info->heapSize)) {
                    return 0;
                }
            }
        }
    }

    return 1;
}
