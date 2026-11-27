/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_GetGsProfileId from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct DWCstAccLoginId {
    unsigned long id_data;
    unsigned long userid_lo32;
    unsigned long playerid;
} DWCstAccLoginId;
typedef struct DWCstAccFriendKeyData {
    int pad;
    unsigned long keyLow;
    unsigned long keyHigh;
} DWCstAccFriendKeyData;
typedef struct DWCstAccGsProfileIdData {
    int pad;
    int gsProfileId;
} DWCstAccGsProfileIdData;
typedef struct DWCstAccUserData {
    unsigned long size;
    DWCstAccLoginId pseudo;
    DWCstAccLoginId authentic;
    int gs_profile_id;
    unsigned long flag;
    unsigned long gamecode;
    unsigned long reserved[5];
    unsigned long crc32;
} DWCstAccUserData;
extern unsigned long long DWCi_Acc_GetFriendKey(struct DWCstAccFriendKeyData *data);
extern int DWCi_Acc_GetGsProfileId(struct DWCstAccGsProfileIdData *data);
extern unsigned long DWCi_Acc_GetFlag_DataType(void *userdata);
extern int func_02048168(unsigned long long friendkey, unsigned long gamecode);
extern int func_02048738(struct DWCstAccUserData *userdata, void *frienddata);
extern unsigned long DWCi_Acc_GetFlag_DataType(void *frienddata);
extern int func_02048168(unsigned long long friendkey, unsigned long gamecode);
extern unsigned long long DWCi_Acc_GetFriendKey(struct DWCstAccFriendKeyData *data);
extern int DWCi_Acc_GetGsProfileId(struct DWCstAccGsProfileIdData *data);
extern int func_02048738(struct DWCstAccUserData *userdata, void *frienddata);
unsigned long long DWCi_Acc_GetFriendKey(struct DWCstAccFriendKeyData *data);
int DWCi_Acc_GetGsProfileId(struct DWCstAccGsProfileIdData *data);
unsigned long DWCi_Acc_GetFlag_DataType(void *userdata);
int func_02048168(unsigned long long friendkey, unsigned long gamecode);
int func_02048738(struct DWCstAccUserData *userdata, void *frienddata) {
    unsigned long long friend_key;
    unsigned long type;

    type = DWCi_Acc_GetFlag_DataType(frienddata);
    switch (type) {
        case 2:
            friend_key = DWCi_Acc_GetFriendKey(frienddata);
            return func_02048168(friend_key, userdata->gamecode);
        case 3:
            return DWCi_Acc_GetGsProfileId(frienddata);
        case 1:
            return -1;
    }
    return 0;
}
