/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_AC_Create from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/ap_connect_control.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef unsigned long long int u64;
extern void MIi_CpuClear32(register u32 value, register u32 *dst, register u32 size);
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
typedef struct Globals {
    void *p0;
    void *p4;
    void *p8;
    Ctx *ctx;
    ApConnectWork *work;
} Globals;
extern Globals data_0210e630;
typedef struct InitParam {
    void *(*alloc)(int, int);
    void (*free)(int, void *, int);
    u8 dmaNo;
    u8 powerMode;
    u8 profileSel;
    u8 skipNetCheck;
} InitParam;
extern void DWCi_BM_GetApInfo(void *);
extern int WCM_Init(void *, int);
extern int DWC_AC_Create(InitParam *param);
extern void *func_020447e0(int kind, int size);
extern void func_02044884(void);
int DWC_AC_Create(InitParam *param) {
    Ctx *ctx;
    ApConnectWork *w;
    u32 *p8;
    int r;
    data_0210e630.ctx = param->alloc(1, sizeof(Ctx));
    MIi_CpuClear32(0, (u32 *) data_0210e630.ctx, sizeof(Ctx));
    ctx                = data_0210e630.ctx;
    ctx->alloc         = param->alloc;
    ctx->free          = param->free;
    ctx->state         = 1;
    ctx->furthestState = 1;
    ctx->flags         = 1;
    data_0210e630.work = func_020447e0(0x10, sizeof(ApConnectWork));
    data_0210e630.p0   = func_020447e0(2, 0x2300);
    data_0210e630.p4   = func_020447e0(4, 0x58);
    data_0210e630.p8   = func_020447e0(8, 0xc);
    MIi_CpuClear32(0, (u32 *) data_0210e630.work, sizeof(ApConnectWork));
    MIi_CpuClear32(0, (u32 *) data_0210e630.p0, 0x2300);
    MIi_CpuClear32(0, (u32 *) data_0210e630.p4, 0x58);
    MIi_CpuClear32(0, (u32 *) data_0210e630.p8, 0xc);
    w               = data_0210e630.work;
    w->dmaNo        = param->dmaNo;
    w->powerMode    = param->powerMode;
    p8              = data_0210e630.p8;
    p8[0]           = (u32) param->alloc;
    p8[1]           = (u32) param->free;
    p8[2]           = 0;
    w->profileSel   = param->profileSel;
    w->skipNetCheck = param->skipNetCheck;
    DWCi_BM_GetApInfo(w);
    r = WCM_Init(data_0210e630.p0, 0x2300);
    if (r == 1 || r > 4) {
        func_02044884();
        return 0;
    }
    return 1;
}
void *func_020447e0(int kind, int size);
void func_02044884(void);
