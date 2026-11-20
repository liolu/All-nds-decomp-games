/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_CreateExchangeToken from projets/blue-dragon-awakened-shadow/src/donor/DWC_CreateExchangeToken.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
extern void func_020075b0(void *dest, u8 data, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_020075b0(dest, 0, size);
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
extern void func_0207f784(const DWCAccUserData *userdata, DWCAccFriendData *token);
extern void func_0207eed8(DWCAccGsProfileId *data, int gs_profile_id);
extern BOOL func_0207f4cc(const DWCAccUserData *userdata);
extern void func_0207eed8(DWCAccGsProfileId *data, int gs_profile_id);
extern void func_0207efc8(DWCAccFlag *userdata, int type);
extern BOOL func_0207f4cc(const DWCAccUserData *userdata);
void func_0207f784(const DWCAccUserData *userdata, DWCAccFriendData *token) {
    MI_CpuClear8(token, sizeof(DWCAccFriendData));

    if (func_0207f4cc(userdata)) {
        func_0207eed8(&token->gs_profile_id, userdata->gs_profile_id);
        func_0207efc8(&token->flags, 3);
    } else {
        token->login_id = userdata->pseudo;
    }
}
