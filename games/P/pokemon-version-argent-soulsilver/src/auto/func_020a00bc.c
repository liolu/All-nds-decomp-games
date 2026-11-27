/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a00bc from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT = tooling
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
typedef unsigned int u32;
extern int func_020a00bc(struct DWCstAccUserData *userdata);
typedef struct MATHCRC32Table {
    u32 table[256];
} MATHCRC32Table;
extern void func_020e3960(MATHCRC32Table *table, u32 poly);
extern u32 func_020e3a58(MATHCRC32Table *table, void *data, u32 dataLength);
extern int func_020a00bc(struct DWCstAccUserData *userdata);
int func_020a00bc(struct DWCstAccUserData *userdata) {
    struct MATHCRC32Table table;
    unsigned long crc32;

    func_020e3960(&table, 0xedb88320);
    crc32 = func_020e3a58(&table, userdata, 0x3c);
    return crc32 == userdata->crc32;
}
