/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209ff34 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
extern void func_020d3e78(u32 buffer[32 / sizeof(u32)]);
typedef struct {
    u64 x;
    u64 mul;
    u64 add;
} MATHRandContext32;
static inline void MATH_InitRand32(MATHRandContext32 *context, u64 seed) {
    context->x   = seed;
    context->mul = (1566083941LL << 32) + 1812433253LL;
    context->add = 2531011;
}
static inline u32 MATH_Rand32(MATHRandContext32 *context, u32 max) {
    context->x = context->mul * context->x + context->add;

    if (max == 0) {
        return (u32) (context->x >> 32);
    } else {
        return (u32) (((context->x >> 32) * max) >> 32);
    }
}
typedef struct {
    u64 uId;
    u64 notAttestedId;
    u32 flag;
} DWCAuthWiFiId;
extern void func_0209fa40(DWCAuthWiFiId *id);
typedef struct DWCstAccFlag {
    u32 flags;
    u32 reserved;
    u32 reserved1;
} DWCAccFlag;
typedef struct DWCstAccLoginId {
    u32 id_data;
    u32 userid_lo32;
    u32 playerid;
} DWCAccLoginId;
extern void func_0209ff34(DWCAccLoginId *loginid);
extern void func_0209fbb8(DWCAccLoginId *data, u64 userid);
extern void func_0209fbe0(DWCAccLoginId *data, u32 playerid);
void func_0209fbb8(DWCAccLoginId *userdata, u64 userid);
void func_0209fbe0(DWCAccLoginId *userdata, u32 playerid);
void func_0209fc78(DWCAccFlag *userdata, int type);
void func_0209ff34(DWCAccLoginId *loginid) {
    DWCAuthWiFiId authid;
    MATHRandContext32 randcontext;
    u32 buffer[8];
    u32 i;

    func_020d3e78(buffer);

    for (i = 1; i < 8; i++) {
        buffer[i] = buffer[i] ^ buffer[i - 1];
    }

    MATH_InitRand32(&randcontext, buffer[7]);
    func_0209fa40(&authid);

    if (authid.flag) {
        func_0209fbb8(loginid, authid.uId);
    } else {
        func_0209fbb8(loginid, authid.notAttestedId);
    }

    func_0209fbe0(loginid, MATH_Rand32(&randcontext, 0));
    func_0209fc78((DWCAccFlag *) loginid, 1);
}
