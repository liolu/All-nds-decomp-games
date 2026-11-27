/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_SetBuddyFriendData from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused
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
extern void DWCi_SetBuddyFriendData(DWCAccFriendData *frienddata);
u32 DWCi_Acc_GetFlags(const DWCAccFlag *userdata);
u32 DWCi_Acc_GetFlag_DataType(const DWCAccFlag *userdata);
void DWCi_Acc_SetFlags(DWCAccFlag *userdata, u32 flags);
void DWCi_SetBuddyFriendData(DWCAccFriendData *frienddata) {
    if (DWCi_Acc_GetFlag_DataType(&frienddata->flags) == 3) {
        u32 flags;

        flags = DWCi_Acc_GetFlags(&frienddata->flags);
        flags = (flags & ~(1u << 2)) | (1u << 2);

        DWCi_Acc_SetFlags(&frienddata->flags, flags);
    }
}
