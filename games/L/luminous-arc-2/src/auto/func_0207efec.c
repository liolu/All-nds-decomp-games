/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207efec from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
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
extern void func_0207efec(DWCAccFriendData *frienddata);
u32 func_0207eee0(const DWCAccFlag *userdata);
u32 func_0207eef4(const DWCAccFlag *userdata);
void func_0207efb0(DWCAccFlag *userdata, u32 flags);
void func_0207efec(DWCAccFriendData *frienddata) {
    if (func_0207eef4(&frienddata->flags) == 3) {
        u32 flags;

        flags = func_0207eee0(&frienddata->flags);
        flags = (flags & ~(1u << 2)) | (1u << 2);

        func_0207efb0(&frienddata->flags, flags);
    }
}
