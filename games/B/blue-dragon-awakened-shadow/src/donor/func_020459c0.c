/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_AC_GetConnectErrorCode from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/ap_connect_control.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef struct Ctx {
    void *(*alloc)(int, int);
    void (*free)(int, void *, int);
    u8 flags;
    u8 state;
    u8 prevState;
    u8 apSeen;
    int errorReason;
    int status;
    u8 failedApStatus;
    u8 failedApType;
    u8 furthestState;
    u8 apType;
    char spotInfo[10];
    u8 presetApType;
    u8 pad23;
} Ctx;
extern inline int c800(void);
extern inline int defaultError(int reason);
extern int func_020459c0(Ctx *p);
static inline int c800(void) {
    return 51200;
}
static inline int defaultError(int reason) {
    return -c800() - reason;
}
#pragma opt_rebuildconditionals off
int func_020459c0(Ctx *p) {
    int reason         = p->presetApType;
    unsigned int phase = p->furthestState;
    if (reason == 0) {
        reason = p->failedApType;
    }
    if (phase < 10) {
        if (p->failedApStatus == 3) {
            return -51100 - reason;
        }
        if (p->failedApStatus != 4) {
            return -51300 - reason;
        }
        return defaultError(reason);
    }
    if (phase < 13) {
        return -52000 - reason;
    }
    if (p->status == 0) {
        return -50000 - reason;
    }
    if (p->status == -1) {
        return -52100 - reason;
    }
    if (p->status == -2) {
        return -52200 - reason;
    }
    if (p->status == -3) {
        return -52300 - reason;
    }
    if (p->status == -4) {
        return -53000 - reason;
    }
    if (p->status == -5) {
        return -53100 - reason;
    }
    if (p->status == -6) {
        return -53200 - reason;
    }
    return p->status;
}
