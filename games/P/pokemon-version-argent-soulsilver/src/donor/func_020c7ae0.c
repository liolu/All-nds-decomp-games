/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_SndReadTrackInfo from https://github.com/Project-Holon/aletheia src/game/arm9/nns_snd_system.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef int BOOL;
struct SleepCb {
    void (*fn)(void *);
    void *arg;
    void *p08;
    void *p0c;
};
struct Sys {
    signed char idx;
    u8 p01[3];
    u32 pending;
    u32 tag;
    u32 initialized;
    struct SleepCb cb10;
    struct SleepCb cb20;
};
typedef struct SNDDriverInfo SNDDriverInfo;
typedef struct SNDTrackInfo SNDTrackInfo;
typedef struct SNDDriverInfo SNDDriverInfo;
typedef struct SNDTrackInfo SNDTrackInfo;
extern BOOL func_020d5f34(SNDDriverInfo *driverInfo, int playerNo, int trackNo, SNDTrackInfo *trackInfo);
extern int func_020c7ae0(int playerNo, int trackNo, struct SNDTrackInfo *trackInfo);
extern struct Sys data_021dd440;
extern u8 data_021dd480[];
int func_020c7ae0(int playerNo, int trackNo, struct SNDTrackInfo *trackInfo) {
    s8 idx = data_021dd440.idx;
    u8 *p;

    if (idx < 0) {
        p = 0;
    } else {
        p = data_021dd480 + idx * 0x11E0;
    }
    if (p == 0) {
        return 0;
    }
    return func_020d5f34((struct SNDDriverInfo *) p, playerNo, trackNo, trackInfo);
}
