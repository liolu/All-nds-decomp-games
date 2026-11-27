/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Acc_SetLoginIdToUserData from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT
 * = tooling only)), reused by tools/donor_match.py */
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
extern void DWCi_Acc_SetLoginIdToUserData(struct DWCstAccUserData *userdata, struct DWCstAccLoginId *loginid,
                                          int gs_profile_id);
typedef struct MATHCRC32Table {
    u32 table[256];
} MATHCRC32Table;
extern void MATHi_CRC32InitTableRev(MATHCRC32Table *table, u32 poly);
extern u32 MATH_CalcCRC32(MATHCRC32Table *table, void *data, u32 dataLength);
extern void DWCi_Acc_SetLoginIdToUserData(struct DWCstAccUserData *userdata, struct DWCstAccLoginId *loginid,
                                          int gs_profile_id);
void DWCi_Acc_SetLoginIdToUserData(struct DWCstAccUserData *userdata, struct DWCstAccLoginId *loginid, int gs_profile_id) {
    struct MATHCRC32Table table;

    userdata->authentic     = *loginid;
    userdata->gs_profile_id = gs_profile_id;
    MATHi_CRC32InitTableRev(&table, 0xedb88320);
    userdata->crc32 = MATH_CalcCRC32(&table, userdata, 0x3c);
    userdata->flag |= 1;
}
