/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* AllocSeqPlayer from projets/blue-dragon-awakened-shadow/src/auto/AllocSeqPlayer.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
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
extern void func_0208aaa4(UnkList *list, void *obj);
extern void *func_0208ab04(UnkList *list, void *obj);
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
extern UnkList data_020ddb8c;
extern UnkList data_020ddb98;
extern void func_0208bee8(UnkSndSeqPlayer *seqPlayer);
extern void func_0208bf3c(UnkSndSeqPlayer *seqPlayer);
extern UnkSndSeqPlayer *func_0208bf74(int prio);
extern void func_0208bee8(UnkSndSeqPlayer *seqPlayer);
extern void func_0208bf3c(UnkSndSeqPlayer *seqPlayer);
UnkSndSeqPlayer *func_0208bf74(int prio) {
    UnkSndSeqPlayer *seqPlayer = func_0208ab04(&data_020ddb8c, 0);

    if (seqPlayer == 0) {
        seqPlayer = func_0208ab04(&data_020ddb98, 0);
        if (prio < seqPlayer->prio) {
            return 0;
        }
        func_0208bf3c(seqPlayer);
    }

    func_0208aaa4(&data_020ddb8c, seqPlayer);
    seqPlayer->prio = prio;
    func_0208bee8(seqPlayer);
    return seqPlayer;
}
