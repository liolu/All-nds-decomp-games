/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_CreateFriendKey from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef struct DWCstAccLoginId {
    unsigned long id_data;
    unsigned long userid_lo32;
    unsigned long playerid;
} DWCstAccLoginId;
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
extern unsigned long long func_0204807c(int gs_profile_id, unsigned long gamecode, int method);
extern unsigned long long func_02048798(struct DWCstAccUserData *userdata);
extern unsigned long long func_0204807c(int gs_profile_id, unsigned long gamecode, int method);
extern unsigned long long func_02048798(struct DWCstAccUserData *userdata);
unsigned long long func_0204807c(int gs_profile_id, unsigned long gamecode, int method);
unsigned long long func_02048798(struct DWCstAccUserData *userdata) {
    unsigned long long ret = 0;

    if (userdata->gs_profile_id != 0) {
        ret = func_0204807c(userdata->gs_profile_id, userdata->gamecode, 1);
    }
    return ret;
}
