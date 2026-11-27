/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndPlayerPauseByPlayerNo from https://github.com/RonyxDumb/mkds src/arm9/0212bd10_SoundDtorFn.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
extern void *func_020b4d14(NNSFndList *list, void *object);
typedef struct NNSSndHeap *NNSSndHeapHandle;
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
typedef struct NNSSndHandle {
    struct NNSSndSeqPlayer *player;
} NNSSndHandle;
typedef struct NNSSndSeqPlayer {
    struct NNSSndHandle *handle;
    struct NNSSndPlayer *player;
    struct NNSSndPlayerHeap *heap;
    NNSFndLink playerLink;
    NNSFndLink prioLink;
    NNSSndFader fader;
    u8 status;
    u8 startFlag;
    u8 pauseFlag;
    u8 prepareFlag;
    u32 commandTag;
    u16 seqType;
    u16 pad2;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 prio;
    s16 volume;
    u8 initVolume;
    u8 extVolume;
    u16 pad3_;
} NNSSndSeqPlayer;
typedef struct NNSSndPlayer {
    NNSFndList playerList;
    NNSFndList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u8 volume;
    u8 pad_;
    u16 pad2_;
} NNSSndPlayer;
extern void func_020c816c(int playerNo, BOOL flag);
extern void func_020c873c(NNSSndSeqPlayer *seqPlayer, BOOL flag);
typedef struct NNSSndPlayerHeap {
    NNSFndLink link;
    NNSSndHeapHandle handle;
    NNSSndSeqPlayer *player;
    int playerNo;
} NNSSndPlayerHeap;
extern NNSSndPlayer data_021dfde4[32];
void func_020c816c(int playerNo, BOOL flag) {
    NNSSndSeqPlayer *seqPlayer;
    NNSSndSeqPlayer *next;

    ((void) 0);

    for (seqPlayer = (NNSSndSeqPlayer *) func_020b4d14(&data_021dfde4[playerNo].playerList, ((void *) 0));
         seqPlayer != ((void *) 0); seqPlayer = next) {
        next = (NNSSndSeqPlayer *) func_020b4d14(&data_021dfde4[playerNo].playerList, seqPlayer);

        func_020c873c(seqPlayer, flag);
    }
}
void func_020c873c(NNSSndSeqPlayer *seqPlayer, BOOL flag);
