/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209fdb8 from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_account.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
extern void func_0209fdb8(unsigned long long num, int bitnum, char *result);
extern void func_0209fdb8(unsigned long long num, int bitnum, char *result);
extern const char data_02110614[];
void func_0209fdb8(unsigned long long num, int bitnum, char *result) {
    int i;
    int loopnum;
    const char *sStringTable;

    sStringTable = data_02110614;
    loopnum      = (bitnum + 4) / 5;
    for (i = 0; i < loopnum; i++) {
        *(result + loopnum - 1 - i) = sStringTable[num & 0x1f];
        num >>= 5;
    }
    result[loopnum] = 0;
}
