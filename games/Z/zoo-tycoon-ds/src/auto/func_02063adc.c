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
extern void func_02062aa8(UnkList *list, void *obj);
extern void *func_02062a90(UnkList *list, void *obj);
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
extern UnkList data_02182f00;
extern UnkList data_02182f0c;
extern void func_02063b94(UnkSndSeqPlayer *seqPlayer);
extern void func_02063b58(UnkSndSeqPlayer *seqPlayer);
extern UnkSndSeqPlayer *func_02063adc(int prio);
void func_02063b94(UnkSndSeqPlayer *seqPlayer);
void func_02063b58(UnkSndSeqPlayer *seqPlayer);
UnkSndSeqPlayer *func_02063adc(int prio) {
    UnkSndSeqPlayer *seqPlayer = func_02062a90(&data_02182f00, 0);

    if (seqPlayer == 0) {
        seqPlayer = func_02062a90(&data_02182f0c, 0);
        if (prio < seqPlayer->prio) {
            return 0;
        }
        func_02063b58(seqPlayer);
    }

    func_02062aa8(&data_02182f00, seqPlayer);
    seqPlayer->prio = prio;
    func_02063b94(seqPlayer);
    return seqPlayer;
}
