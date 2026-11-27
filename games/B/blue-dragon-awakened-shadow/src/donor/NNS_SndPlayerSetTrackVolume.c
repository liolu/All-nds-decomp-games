/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndPlayerSetTrackVolume from https://github.com/RonyxDumb/mkds src/arm9/0212bd10_SoundDtorFn.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
extern void SND_SetTrackVolume(int playerNo, u32 trackBitMask, int volume);
extern const s16 SNDi_DecibelTable[128];
static inline

    s16
    SND_CalcDecibel(int scale) {
    ((void) 0);
    return SNDi_DecibelTable[scale];
}
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
inline BOOL NNS_SndHandleIsValid(const struct NNSSndHandle *handle) {
    ((void) 0);
    return handle->player != ((void *) 0);
}
extern void NNS_SndPlayerSetTrackVolume(NNSSndHandle *handle, u16 trackBitMask, int volume);
typedef struct NNSSndPlayerHeap {
    NNSFndLink link;
    NNSSndHeapHandle handle;
    NNSSndSeqPlayer *player;
    int playerNo;
} NNSSndPlayerHeap;
void NNS_SndPlayerSetTrackVolume(NNSSndHandle *handle, u16 trackBitMask, int volume) {
    ((void) 0);
    ((void) 0);

    if (!NNS_SndHandleIsValid(handle)) {
        return;
    }

    SND_SetTrackVolume(handle->player->playerNo, trackBitMask, SND_CalcDecibel(volume));
}
