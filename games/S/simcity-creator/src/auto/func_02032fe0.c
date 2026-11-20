/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

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
extern int func_0203258c(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_02030828(void *handle, int playerNo, int prio);
extern void func_020308c0(void *seqPlayer);
extern void func_020308cc(void *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void *func_02030990(int playerNo, void *seqPlayer);
extern void func_02030530(void *handle, int volume);
extern void func_02030570(void *handle, int prio);
extern void func_020305e4(void *handle, int seqArcNo, int index);
extern BOOL func_02032fe0(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                          int seqArcNo, int index);

/* func_020759e0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
BOOL func_02032fe0(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, UnkSndSeqData *seqArc,
                   int seqArcNo, int index) {
    void *seqPlayer;
    void *heap;
    void *bank;

    seqPlayer = func_02030828(handle, playerNo, playerPrio);
    if (seqPlayer == 0) {
        return 0;
    }

    heap = func_02030990(playerNo, seqPlayer);

    if (func_0203258c(bankNo, 6, heap, 0, &bank) != 0) {
        func_020308c0(seqPlayer);
        return 0;
    }

    func_020308cc(seqPlayer, (u8 *) seqArc + seqArc->dataOffset, param->fileId, bank);
    func_02030530(handle, param->volume);
    func_02030570(handle, param->channelPrio);
    func_020305e4(handle, seqArcNo, index);
    return 1;
}
