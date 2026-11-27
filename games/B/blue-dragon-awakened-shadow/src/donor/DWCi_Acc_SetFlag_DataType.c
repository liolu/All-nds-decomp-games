/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Acc_SetFlag_DataType from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef struct DWCstAccFlag {
    u32 flags;
    u32 reserved;
    u32 reserved1;
} DWCAccFlag;
u32 DWCi_Acc_GetFlags(const DWCAccFlag *userdata);
void DWCi_Acc_SetFlags(DWCAccFlag *userdata, u32 flags);
void DWCi_Acc_SetFlag_DataType(DWCAccFlag *userdata, int type) {
    u32 flags;

    flags = DWCi_Acc_GetFlags(userdata);
    flags = (flags & ~3) | type;

    DWCi_Acc_SetFlags(userdata, flags);
}
