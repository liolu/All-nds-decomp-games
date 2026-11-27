/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a0264 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
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
typedef struct DWCstAccFriendKey {
    u32 id_data;
    u32 friendkey_lo32;
    u32 friendkey_hi32;
} DWCAccFriendKey;
typedef struct DWCstAccGsProfileId {
    u32 id_data;
    int id;
    u32 reserved;
} DWCAccGsProfileId;
typedef union DWCstAccFriendData {
    DWCAccFlag flags;
    DWCAccLoginId login_id;
    DWCAccFriendKey friend_key;
    DWCAccGsProfileId gs_profile_id;
} DWCAccFriendData;
extern u64 func_020a0264(const DWCAccFriendData *frienddata);
extern u64 func_0209fb9c(const DWCAccFriendKey *data);
u64 func_0209fb9c(const DWCAccFriendKey *data);
u32 func_0209fc0c(const DWCAccFlag *userdata);
u64 func_020a0264(const DWCAccFriendData *frienddata) {
    if (func_0209fc0c(&frienddata->flags) == 2) {
        return func_0209fb9c(&frienddata->friend_key);
    }

    return 0;
}
