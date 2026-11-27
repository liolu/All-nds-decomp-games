/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a037c from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
extern void func_020d4994(void *dest, u8 data, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_020d4994(dest, 0, size);
}
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
extern void func_020a037c(const DWCAccUserData *userdata, DWCAccFriendData *token);
extern void func_0209fbf0(DWCAccGsProfileId *data, int gs_profile_id);
extern BOOL func_020a007c(const DWCAccUserData *userdata);
void func_0209fbf0(DWCAccGsProfileId *data, int gs_profile_id);
void func_0209fc78(DWCAccFlag *userdata, int type);
BOOL func_020a007c(const DWCAccUserData *userdata);
void func_020a037c(const DWCAccUserData *userdata, DWCAccFriendData *token) {
    MI_CpuClear8(token, sizeof(DWCAccFriendData));

    if (func_020a007c(userdata)) {
        func_0209fbf0(&token->gs_profile_id, userdata->gs_profile_id);
        func_0209fc78(&token->flags, 3);
    } else {
        token->login_id = userdata->pseudo;
    }
}
