/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02073a68 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_player.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_020a105c(UnkList *list, void *obj);
extern void *func_020a1044(UnkList *list, void *obj);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    struct UnkSndPlayer *player;
    struct UnkSndPlayerHeap *heap;
    UnkLink prioLink;
    UnkLink playerLink;
    UnkSndFader fader;
    u8 status;
    u8 unk_2d;
    u8 unk_2e;
    u8 unk_2f;
    u32 commandTag;
    u16 unk_34;
    u8 unk_36[6];
    u8 playerNo;
    u8 prio;
    u16 unk_3e;
    u8 unk_40;
    u8 unk_41;
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *player;
} UnkSndHandle;
typedef struct UnkSndPlayer {
    UnkList playerList;
    UnkList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u32 unk_20;
} UnkSndPlayer;
typedef struct UnkSndPlayerHeap {
    UnkLink link;
    void *heap;
    UnkSndSeqPlayer *seqPlayer;
    int playerNo;
} UnkSndPlayerHeap;
extern UnkList data_0212c2d8;
extern UnkList data_0212c2e4;
extern void func_020b3c84(UnkSndSeqPlayer *seqPlayer);
extern void func_020b3c48(UnkSndSeqPlayer *seqPlayer);
extern UnkSndSeqPlayer *func_020b3bcc(int prio);
void func_020b3c84(UnkSndSeqPlayer *seqPlayer);
void func_020b3c48(UnkSndSeqPlayer *seqPlayer);
UnkSndSeqPlayer *func_020b3bcc(int prio) {
    UnkSndSeqPlayer *seqPlayer = func_020a1044(&data_0212c2d8, 0);

    if (seqPlayer == 0) {
        seqPlayer = func_020a1044(&data_0212c2e4, 0);
        if (prio < seqPlayer->prio) {
            return 0;
        }
        func_020b3c48(seqPlayer);
    }

    func_020a105c(&data_0212c2d8, seqPlayer);
    seqPlayer->prio = prio;
    func_020b3c84(seqPlayer);
    return seqPlayer;
}
