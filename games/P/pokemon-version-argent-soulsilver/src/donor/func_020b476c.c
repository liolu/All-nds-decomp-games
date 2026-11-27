/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gsiInt64ToString from https://github.com/Project-Holon/aletheia src/game/ov009/gsplatformutil.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern void func_020b476c(char *theNumberStr, long long theNumber);
extern int func_020b4550(char *dst, const char *fmt, ...);
extern void func_020b476c(char *theNumberStr, long long theNumber);
extern char data_021d706c[];
void func_020b476c(char *theNumberStr, long long theNumber) {
    func_020b4550(theNumberStr, data_021d706c, theNumber);
}
