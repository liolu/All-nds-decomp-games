/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020759e0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqParam {
    u32 fileId;
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
} UnkSndSeqParam;
typedef struct UnkSndSeqData {
    u8 unk_00[0x18];
    u32 dataOffset;
} UnkSndSeqData;
extern int func_020b5d10(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_020b3ef8(void *handle, int playerNo, int prio);
extern void func_020b3eec(void *seqPlayer);
extern void func_020b3e90(void *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void *func_020b3d8c(int playerNo, void *seqPlayer);
extern void func_020b429c(void *handle, int volume);
extern void func_020b4224(void *handle, int prio);
extern void func_020b41e0(void *handle, int seqArcNo, int index);
extern BOOL func_020b6198(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                          int seqArcNo, int index);
BOOL func_020b6198(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                   int seqArcNo, int index) {
    void *seqPlayer;
    void *heap;
    void *bank;

    seqPlayer = func_020b3ef8(handle, playerNo, playerPrio);
    if (seqPlayer == 0) {
        return 0;
    }

    heap = func_020b3d8c(playerNo, seqPlayer);

    if (func_020b5d10(bankNo, 6, heap, 0, &bank) != 0) {
        func_020b3eec(seqPlayer);
        return 0;
    }

    func_020b3e90(seqPlayer, (u8 *) seqArc + seqArc->dataOffset, param->fileId, bank);
    func_020b429c(handle, param->volume);
    func_020b4224(handle, param->channelPrio);
    func_020b41e0(handle, seqArcNo, index);
    return 1;
}
