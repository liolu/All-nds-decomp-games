/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209fe28 from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef struct DWCstAccLoginId {
    unsigned long id_data;
    unsigned long userid_lo32;
    unsigned long playerid;
} DWCstAccLoginId;
extern unsigned long long func_0209fb74(struct DWCstAccLoginId *loginId);
extern unsigned long func_0209fb94(struct DWCstAccLoginId *loginId);
extern void func_0209fdb8(unsigned long long num, int bitnum, char *result);
extern void func_0209fe28(struct DWCstAccLoginId *loginid, unsigned long gamecode, char *username);
extern void func_0209fdb8(unsigned long long num, int bitnum, char *result);
extern int func_020d168c(char *dst, unsigned int len, const char *fmt, ...);
extern void func_0209fe28(struct DWCstAccLoginId *loginid, unsigned long gamecode, char *username);
extern unsigned long long func_0209fb74(struct DWCstAccLoginId *loginId);
extern unsigned long func_0209fb94(struct DWCstAccLoginId *loginId);
extern const char data_02110638[];
unsigned long long func_0209fb74(struct DWCstAccLoginId *loginId);
unsigned long func_0209fb94(struct DWCstAccLoginId *loginId);
void func_0209fdb8(unsigned long long num, int bitnum, char *result);
void func_0209fe28(struct DWCstAccLoginId *loginid, unsigned long gamecode, char *username) {
    char userid[21];
    char playerid[21];

    func_0209fdb8(func_0209fb74(loginid), 43, userid);
    func_0209fdb8(func_0209fb94(loginid), 32, playerid);
    func_020d168c(username, 21, data_02110638, userid, (unsigned char) (gamecode >> 24), (unsigned char) (gamecode >> 16),
                  (unsigned char) (gamecode >> 8), (unsigned char) gamecode, playerid);
}
