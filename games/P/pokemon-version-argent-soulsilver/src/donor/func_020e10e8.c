/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDG_IsPulledOut from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/ctrdg/ctrdg.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    union {
        struct {
            u8 bitID;
            u8 numberID : 5;
            u8 : 2;
            u8 disableExLsiID : 1;
        };
        u16 raw;
    };
} CTRDGModuleID;
typedef struct {
    CTRDGModuleID moduleID;
    u8 exLsiID[3];
    u8 isAgbCartridge : 1;
    u8 detectPullOut : 1;
    u8 : 0;
    u16 makerCode;
    u32 gameCode;
} CTRDGModuleInfo;
extern BOOL func_020e10e8(void);
extern BOOL func_020e1134(void);
extern const u16(*ctrdgi_fl_maxtime);
BOOL func_020e10e8(void) {
    CTRDGModuleInfo *cip = ((CTRDGModuleInfo *) (0x02000000 + 0x007ffc30));

    if (cip->moduleID.raw == 0xffff) {
        return 0;
    }

    if (!cip->detectPullOut) {
        (void) func_020e1134();
    }

    return cip->detectPullOut;
}
BOOL func_020e1134(void);
