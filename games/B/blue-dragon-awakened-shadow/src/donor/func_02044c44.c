/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_AC_FoundApCallback from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/ap_connect_control.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef signed char s8;
typedef unsigned long long int u64;
typedef u64 OSTick;
typedef struct ApProfile {
    u8 unk_00[0x40];
    u8 ssid[32];
    u8 ssid2[32];
    u8 wepKey[0x40];
    u8 ip[4];
    u8 gateway[4];
    u8 dns1[4];
    u8 dns2[4];
    u8 prefix;
    u8 wep40Keys[0x15];
    u8 wepKeyType : 2;
    u8 keyFormat : 6;
    u8 wepMode;
    u8 unk_E8[0x18];
} ApProfile;
typedef struct ApSsidEntry {
    u8 flags : 4;
    u8 flagsHi : 4;
    u8 index;
    u8 unk_02;
    u8 len;
    char ssid[32];
} ApSsidEntry;
typedef struct ApStatus {
    u8 status;
    u8 index;
    u8 rssi;
    u8 channel : 7;
    u8 done : 1;
} ApStatus;
typedef struct ApBss {
    u16 length;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[32];
    u16 capability;
    u8 unk_2E[8];
    u16 channel;
    u8 unk_38[0x88];
} ApBss;
typedef struct ApConnectWork {
    ApProfile profiles[3];
    ApSsidEntry entries[9];
    ApStatus ap[11];
    ApBss bss[11];
    OSTick tick;
    u8 connectConfig[0x52];
    u8 dmaNo;
    u8 powerMode : 2;
    u8 sharedKeyAuth : 2;
    u8 retry : 4;
    u8 profileSel : 4;
    u8 skipNetCheck : 2;
    u8 mode : 2;
    u8 profileIdx;
    u8 nextState;
    u8 cur;
    u8 numEntries;
    s8 channel;
    u8 numAps;
    u8 selAp;
    u8 connectFailure;
    u8 chIter;
    u16 chMask;
} ApConnectWork;
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
extern void func_02046078(u16);
extern void *func_020449a8(int kind);
extern u8 func_02044a60(void);
extern void func_02044c44(ApBss *bss);
extern int func_02044e44(ApBss *ap, int n, ApSsidEntry *s);
extern int func_02044ec0(ApBss *ap, ApConnectWork *w);
extern int func_02044f50(int x, ApBss *bss, u8 y, ApConnectWork *w);
extern void func_020450d0(int i, ApConnectWork *w);
void *func_020449a8(int kind);
u8 func_02044a60(void);
void func_02044c44(ApBss *bss) {
    int idx = -1;
    u8 y;
    ApConnectWork *w                   = func_020449a8(0x10);
    ((Ctx *) func_020449a8(1))->apSeen = 1;
    switch (func_02044a60()) {
        case 3:
            y = w->channel;
            if (bss->ssidLength == 0 || bss->ssid[0] == 0) {
                func_02046078(bss->channel);
            } else if (bss->ssidLength == 1 && bss->ssid[0] == 0x20) {
                func_02046078(bss->channel);
                idx = func_02044e44(bss, w->numEntries, w->entries);
            } else {
                idx = func_02044e44(bss, w->numEntries, w->entries);
            }
            break;
        case 4:
            y   = w->bss[w->cur].channel - 1;
            idx = func_02044ec0(bss, w);
            if (idx >= 0) {
                w->ap[w->cur].done = 1;
            }
            break;
        case 5:
            y   = w->channel;
            idx = func_02044e44(bss, 1, &w->entries[w->cur]);
            if (idx >= 0) {
                w->entries[w->cur].flags = 1;
            }
            break;
        default:
            return;
    }
    if (idx < 0) {
        return;
    }
    func_020450d0(func_02044f50(idx, bss, y, w), w);
}
int func_02044e44(ApBss *ap, int n, ApSsidEntry *s);
int func_02044ec0(ApBss *ap, ApConnectWork *w);
int func_02044f50(int x, ApBss *bss, u8 y, ApConnectWork *w);
void func_020450d0(int i, ApConnectWork *w);
