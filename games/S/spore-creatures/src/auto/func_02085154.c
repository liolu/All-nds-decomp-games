/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207364c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_player_init.c (license: none),
 * reused by tools/donor_match.py */
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
extern UnkFndList data_020e5240;
extern const s16 data_020dc958[];
extern void *func_020ae7f4(UnkFndList *list, void *object);
extern u32 func_020b8794(void);
extern BOOL func_020b84b8(u32 tag);
extern void func_02085610(UnkSndSeqPlayer *player);
extern void func_0208454c(UnkSndFader *fader);
extern int func_02084518(UnkSndFader *fader);
extern BOOL func_02084564(UnkSndFader *fader);
extern void func_020b7b90(u32 playerNo, int volume);
extern void func_02085570(UnkSndSeqPlayer *player);
extern void func_020b7b38(u32 playerNo);
void func_02085154(void) {
    u32 status              = func_020b8794();
    UnkSndSeqPlayer *player = func_020ae7f4(&data_020e5240, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = func_020ae7f4(&data_020e5240, player);

        if (!player->startedFlag) {
            if (func_020b84b8(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            func_02085610(player);
        } else {
            func_0208454c(&player->fader);
            seqVol   = data_020dc958[player->volume];
            initVol  = data_020dc958[player->initVolume];
            groupVol = data_020dc958[player->player->volume];
            volume   = data_020dc958[func_02084518(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                func_020b7b90(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && func_02084564(&player->fader)) {
                func_02085570(player);
            }
            if (player->updateFlag) {
                func_020b7b38(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
