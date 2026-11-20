/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_SndPlayerMain from projets/blue-dragon-awakened-shadow/src/auto/NNSi_SndPlayerMain.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    u8 unk_00[0x10];
} UnkSndFader;
typedef struct {
    u8 unk_00[0x20];
    u8 volume;
} UnkSndPlayerGroup;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    UnkSndPlayerGroup *player;
    u8 unk_08[0x14 - 0x08];
    UnkFndLink prioLink;
    UnkSndFader fader;
    u8 status;
    u8 startedFlag;
    u8 unk_2e;
    u8 updateFlag;
    u32 commandTag;
    u16 seqType;
    u16 unk_36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 unk_3d;
    s16 extVolume;
    u8 initVolume;
    u8 volume;
    u8 unk_42[2];
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *volatile player;
} UnkSndHandle;
extern UnkFndList data_020ddb98;
extern const s16 data_0209a13c[];
extern void *func_0208ab04(UnkFndList *list, void *object);
extern u32 func_02086c34(void);
extern BOOL func_02086988(u32 tag);
extern void func_0208bfdc(UnkSndSeqPlayer *player);
extern void func_0208f098(UnkSndFader *fader);
extern int func_0208f064(UnkSndFader *fader);
extern BOOL func_0208f0b0(UnkSndFader *fader);
extern void func_020861b0(u32 playerNo, int volume);
extern void func_0208bf3c(UnkSndSeqPlayer *player);
extern void func_02086170(u32 playerNo);
void func_0208bb30(void) {
    u32 status              = func_02086c34();
    UnkSndSeqPlayer *player = func_0208ab04(&data_020ddb98, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = func_0208ab04(&data_020ddb98, player);

        if (!player->startedFlag) {
            if (func_02086988(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            func_0208bfdc(player);
        } else {
            func_0208f098(&player->fader);
            seqVol   = data_0209a13c[player->volume];
            initVol  = data_0209a13c[player->initVolume];
            groupVol = data_0209a13c[player->player->volume];
            volume   = data_0209a13c[func_0208f064(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                func_020861b0(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && func_0208f0b0(&player->fader)) {
                func_0208bf3c(player);
            }
            if (player->updateFlag) {
                func_02086170(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
