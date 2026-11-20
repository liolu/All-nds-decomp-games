/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Acc_GetUserId from projets/blue-dragon-awakened-shadow/src/donor/DWCi_Acc_GetUserId.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct DWCstAccLoginId {
    u32 id_data;
    u32 userid_lo32;
    u32 playerid;
} DWCAccLoginId;
extern u64 func_0207ee5c(const DWCAccLoginId *data);
static inline u32 DWCi_Acc_GetMaskBits(u32 data, u32 shift, u32 mask) {
    return ((data >> shift) & mask);
}
u64 func_0207ee5c(const DWCAccLoginId *userdata) {
    u32 hi32;

    hi32 = DWCi_Acc_GetMaskBits(userdata->id_data, 0, (((1u << 11) - 1)));
    return (u64) hi32 << 32 | userdata->userid_lo32;
}
