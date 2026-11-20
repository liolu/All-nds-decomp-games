/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207f908 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
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
typedef struct DWCstAccUserData {
    int size;
    DWCAccLoginId pseudo;
    DWCAccLoginId authentic;
    int gs_profile_id;
    int flag;
    u32 gamecode;
    int reserved[5];
    u32 crc32;
} DWCAccUserData;
extern BOOL func_0207ef04(const DWCAccFriendData *frienddata);
extern void func_0207f908(const DWCAccUserData *userdata, const DWCAccFriendData *frienddata);
extern void func_0207f1e8(char *string, u64 friendKey);
extern u64 func_0207ee84(const DWCAccFriendKey *data);
extern void func_0207f278(const DWCAccLoginId *loginid, u32 gamecode, char *username);
u64 func_0207ee84(const DWCAccFriendKey *data);
u32 func_0207eef4(const DWCAccFlag *userdata);
BOOL func_0207ef04(const DWCAccFriendData *frienddata);
void func_0207f1e8(char *string, u64 friendKey);
void func_0207f278(const DWCAccLoginId *loginid, u32 gamecode, char *username);
void func_0207f908(const DWCAccUserData *userdata, const DWCAccFriendData *frienddata) {
    if (func_0207eef4(&frienddata->flags) == 3) {
        if (func_0207ef04(frienddata)) {
            ((void) 0);
        } else {
            ((void) 0);
        }
    } else if (func_0207eef4(&frienddata->flags) == 2) {
        char name[(12 + 1)];
        func_0207f1e8(name, func_0207ee84(&frienddata->friend_key));
        ((void) 0);
    } else if (func_0207eef4(&frienddata->flags) == 1) {
        char name[(20 + 1)];
        func_0207f278(&frienddata->login_id, userdata->gamecode, name);
        ((void) 0);
    } else {
        ((void) 0);
    }
}
