/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209fc78 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef struct DWCstAccFlag {
    u32 flags;
    u32 reserved;
    u32 reserved1;
} DWCAccFlag;
u32 func_0209fbf8(const DWCAccFlag *userdata);
void func_0209fc60(DWCAccFlag *userdata, u32 flags);
void func_0209fc78(DWCAccFlag *userdata, int type) {
    u32 flags;

    flags = func_0209fbf8(userdata);
    flags = (flags & ~3) | type;

    func_0209fc60(userdata, flags);
}
