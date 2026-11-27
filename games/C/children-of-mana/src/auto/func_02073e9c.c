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
extern void func_020645f0(UnkList *list, void *obj);
extern void *func_020645d8(UnkList *list, void *obj);
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
extern UnkList data_021232a0;
extern UnkList data_021232ac;
extern void func_02073f54(UnkSndSeqPlayer *seqPlayer);
extern void func_02073f18(UnkSndSeqPlayer *seqPlayer);
extern UnkSndSeqPlayer *func_02073e9c(int prio);
void func_02073f54(UnkSndSeqPlayer *seqPlayer);
void func_02073f18(UnkSndSeqPlayer *seqPlayer);
UnkSndSeqPlayer *func_02073e9c(int prio) {
    UnkSndSeqPlayer *seqPlayer = func_020645d8(&data_021232a0, 0);

    if (seqPlayer == 0) {
        seqPlayer = func_020645d8(&data_021232ac, 0);
        if (prio < seqPlayer->prio) {
            return 0;
        }
        func_02073f18(seqPlayer);
    }

    func_020645f0(&data_021232a0, seqPlayer);
    seqPlayer->prio = prio;
    func_02073f54(seqPlayer);
    return seqPlayer;
}
