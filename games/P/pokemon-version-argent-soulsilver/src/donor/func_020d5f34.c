/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_ReadTrackInfo from https://github.com/Project-Holon/aletheia src/game/arm9/snd_work.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int BOOL;
typedef u32 uptr;
typedef struct SNDExChannel {
    unsigned char myNo;
    unsigned char pad[0x4f];
    struct SNDExChannel *nextLink;
} SNDExChannel;
typedef struct SNDTrack {
    unsigned char flags;
    unsigned char pan_range;
    unsigned short prgNo;
    unsigned char volume;
    unsigned char volume2;
    signed char pitch_bend;
    unsigned char bend_range;
    signed char pan;
    unsigned char pad9[0x13 - 0x9];
    signed char transpose;
    unsigned char pad14[0x3c - 0x14];
    SNDExChannel *channel_list;
} SNDTrack;
typedef struct SNDPlayer {
    unsigned char pad0[8];
    unsigned char tracks[16];
    unsigned char pad18[0x24 - 0x18];
} SNDPlayer;
typedef struct SNDWork {
    SNDExChannel channel[16];
    SNDPlayer player[16];
    SNDTrack track[32];
    unsigned char pad[0x1180 - 0xf80];
} SNDWork;
typedef struct SNDDriverInfo {
    SNDWork work;
    unsigned long chCtrl[16];
    SNDWork *workAddress;
    unsigned long lockedChannels;
    unsigned long padding[6];
} SNDDriverInfo;
typedef struct SNDTrackInfo {
    unsigned short prgNo;
    unsigned char volume;
    unsigned char volume2;
    signed char pitchBend;
    unsigned char bendRange;
    unsigned char pan;
    signed char transpose;
    unsigned char pad_;
    unsigned char chCount;
    unsigned char channel[16];
} SNDTrackInfo;
extern BOOL func_020d5f34(SNDDriverInfo *driverInfo, int playerNo, int trackNo, SNDTrackInfo *trackInfo);
static inline SNDExChannel *ConvAddr(const SNDExChannel *p, const SNDWork *base, const SNDDriverInfo *info) {
    if (p == 0) {
        return 0;
    }
    return (SNDExChannel *) ((unsigned char *) info + ((uptr) p - (uptr) base));
}
BOOL func_020d5f34(SNDDriverInfo *driverInfo, int playerNo, int trackNo, SNDTrackInfo *trackInfo) {
    SNDExChannel *chp;
    unsigned char trackID;
    SNDTrack *track;

    if (playerNo < 0 || playerNo > 15) {
        return 0;
    }
    if (trackNo < 0 || trackNo > 15) {
        return 0;
    }
    trackID = driverInfo->work.player[playerNo].tracks[trackNo];
    if (trackID == 0xff) {
        return 0;
    }
    track = &driverInfo->work.track[trackID];

    trackInfo->prgNo     = track->prgNo;
    trackInfo->volume    = track->volume;
    trackInfo->volume2   = track->volume2;
    trackInfo->pitchBend = track->pitch_bend;
    trackInfo->bendRange = track->bend_range;
    trackInfo->pan       = (unsigned char) (track->pan + 0x40);
    trackInfo->transpose = track->transpose;
    chp                  = ConvAddr(track->channel_list, driverInfo->workAddress, driverInfo);
    trackInfo->chCount   = 0;
    while (chp != 0) {
        trackInfo->channel[trackInfo->chCount] = chp->myNo;
        trackInfo->chCount++;
        chp = ConvAddr(chp->nextLink, driverInfo->workAddress, driverInfo);
    }
    return 1;
}
