/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b9cb4 from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gstats.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_020b9cb4(char *buf, int len);
extern char *data_0212ec00;
void func_020b9cb4(char *buf, int len) {
    int i;
    char *pos = data_0212ec00;

    for (i = 0; i < len; i++) {
        buf[i] ^= *pos++;
        if (*pos == 0) {
            pos = data_0212ec00;
        }
    }
}
