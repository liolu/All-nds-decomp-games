/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207f824 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
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
extern BOOL func_0207f824(const DWCAccFriendData *frienddata1, const DWCAccFriendData *frienddata2);
extern u64 func_0207ee5c(const DWCAccLoginId *data);
extern u32 func_0207ee7c(const DWCAccLoginId *data);
extern u64 func_0207ee84(const DWCAccFriendKey *data);
extern int func_0207ee98(const DWCAccGsProfileId *data);
u64 func_0207ee5c(const DWCAccLoginId *userdata);
u32 func_0207ee7c(const DWCAccLoginId *userdata);
u64 func_0207ee84(const DWCAccFriendKey *data);
int func_0207ee98(const DWCAccGsProfileId *data);
u32 func_0207eef4(const DWCAccFlag *userdata);
BOOL func_0207f824(const DWCAccFriendData *frienddata1, const DWCAccFriendData *frienddata2) {
    u32 type1, type2;

    type1 = func_0207eef4(&frienddata1->flags);
    type2 = func_0207eef4(&frienddata2->flags);

    if (type1 != type2) {
        return 0;
    } else if (type1 == 3) {
        return (func_0207ee98(&frienddata1->gs_profile_id) == func_0207ee98(&frienddata2->gs_profile_id)) ? 1 : 0;
    } else if (type1 == 1) {
        return ((func_0207ee5c(&frienddata1->login_id) == func_0207ee5c(&frienddata2->login_id)) &&
                (func_0207ee7c(&frienddata1->login_id) == func_0207ee7c(&frienddata2->login_id)))
                   ? 1
                   : 0;
    } else if (type1 == 2) {
        return (func_0207ee84(&frienddata1->friend_key) == func_0207ee84(&frienddata2->friend_key)) ? 1 : 0;
    }

    return 0;
}
