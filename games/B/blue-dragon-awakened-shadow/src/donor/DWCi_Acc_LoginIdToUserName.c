/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_Acc_LoginIdToUserName from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef struct DWCstAccLoginId {
    unsigned long id_data;
    unsigned long userid_lo32;
    unsigned long playerid;
} DWCstAccLoginId;
extern unsigned long long DWCi_Acc_GetUserId(struct DWCstAccLoginId *loginId);
extern unsigned long DWCi_Acc_GetPlayerId(struct DWCstAccLoginId *loginId);
extern void DWCi_Acc_U64ToString32(unsigned long long num, int bitnum, char *result);
extern void DWCi_Acc_LoginIdToUserName(struct DWCstAccLoginId *loginid, unsigned long gamecode, char *username);
extern void DWCi_Acc_U64ToString32(unsigned long long num, int bitnum, char *result);
extern int OS_SNPrintf(char *dst, unsigned int len, const char *fmt, ...);
extern void DWCi_Acc_LoginIdToUserName(struct DWCstAccLoginId *loginid, unsigned long gamecode, char *username);
extern unsigned long long DWCi_Acc_GetUserId(struct DWCstAccLoginId *loginId);
extern unsigned long DWCi_Acc_GetPlayerId(struct DWCstAccLoginId *loginId);
extern const char data_020f9250[];
unsigned long long DWCi_Acc_GetUserId(struct DWCstAccLoginId *loginId);
unsigned long DWCi_Acc_GetPlayerId(struct DWCstAccLoginId *loginId);
void DWCi_Acc_U64ToString32(unsigned long long num, int bitnum, char *result);
void DWCi_Acc_LoginIdToUserName(struct DWCstAccLoginId *loginid, unsigned long gamecode, char *username) {
    char userid[21];
    char playerid[21];

    DWCi_Acc_U64ToString32(DWCi_Acc_GetUserId(loginid), 43, userid);
    DWCi_Acc_U64ToString32(DWCi_Acc_GetPlayerId(loginid), 32, playerid);
    OS_SNPrintf(username, 21, data_020f9250, userid, (unsigned char) (gamecode >> 24), (unsigned char) (gamecode >> 16),
                (unsigned char) (gamecode >> 8), (unsigned char) gamecode, playerid);
}
