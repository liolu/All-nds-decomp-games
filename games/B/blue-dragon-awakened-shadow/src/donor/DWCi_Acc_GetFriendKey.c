/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Acc_GetFriendKey from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct DWCstAccFriendKey {
    u32 id_data;
    u32 friendkey_lo32;
    u32 friendkey_hi32;
} DWCAccFriendKey;
extern u64 DWCi_Acc_GetFriendKey(const DWCAccFriendKey *data);
u64 DWCi_Acc_GetFriendKey(const DWCAccFriendKey *data) {
    return (u64) data->friendkey_hi32 << 32 | data->friendkey_lo32;
}
