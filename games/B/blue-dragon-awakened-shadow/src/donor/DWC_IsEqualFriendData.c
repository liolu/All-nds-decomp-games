/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_IsEqualFriendData from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
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
extern BOOL DWC_IsEqualFriendData(const DWCAccFriendData *frienddata1, const DWCAccFriendData *frienddata2);
extern u64 DWCi_Acc_GetUserId(const DWCAccLoginId *data);
extern u32 DWCi_Acc_GetPlayerId(const DWCAccLoginId *data);
extern u64 DWCi_Acc_GetFriendKey(const DWCAccFriendKey *data);
extern int DWCi_Acc_GetGsProfileId(const DWCAccGsProfileId *data);
u64 DWCi_Acc_GetUserId(const DWCAccLoginId *userdata);
u32 DWCi_Acc_GetPlayerId(const DWCAccLoginId *userdata);
u64 DWCi_Acc_GetFriendKey(const DWCAccFriendKey *data);
int DWCi_Acc_GetGsProfileId(const DWCAccGsProfileId *data);
u32 DWCi_Acc_GetFlag_DataType(const DWCAccFlag *userdata);
BOOL DWC_IsEqualFriendData(const DWCAccFriendData *frienddata1, const DWCAccFriendData *frienddata2) {
    u32 type1, type2;

    type1 = DWCi_Acc_GetFlag_DataType(&frienddata1->flags);
    type2 = DWCi_Acc_GetFlag_DataType(&frienddata2->flags);

    if (type1 != type2) {
        return 0;
    } else if (type1 == 3) {
        return (DWCi_Acc_GetGsProfileId(&frienddata1->gs_profile_id) == DWCi_Acc_GetGsProfileId(&frienddata2->gs_profile_id))
                   ? 1
                   : 0;
    } else if (type1 == 1) {
        return ((DWCi_Acc_GetUserId(&frienddata1->login_id) == DWCi_Acc_GetUserId(&frienddata2->login_id)) &&
                (DWCi_Acc_GetPlayerId(&frienddata1->login_id) == DWCi_Acc_GetPlayerId(&frienddata2->login_id)))
                   ? 1
                   : 0;
    } else if (type1 == 2) {
        return (DWCi_Acc_GetFriendKey(&frienddata1->friend_key) == DWCi_Acc_GetFriendKey(&frienddata2->friend_key)) ? 1 : 0;
    }

    return 0;
}
