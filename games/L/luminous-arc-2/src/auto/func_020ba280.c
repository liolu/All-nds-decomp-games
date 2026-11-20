/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ba280 from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gstats.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_020b9cb4(char *buf, int len);
extern char *func_020b9df4(char *buff, int len);
extern void func_020ba198(char *buff, int len);
extern int func_020ba280(char *buff, int len);
extern char data_0212ec4c[16];
extern char *data_0212ec00;
void func_020b9cb4(char *buf, int len);
char *func_020b9df4(char *buff, int len);
void func_020ba198(char *buff, int len);
int func_020ba280(char *buff, int len) {
    char *pos;
    int oldlen = len;

    pos = func_020b9df4(buff, len);

    while ((len > 0) && (pos != 0)) {
        data_0212ec00 = data_0212ec4c;
        func_020b9cb4(buff, pos - buff);
        ;
        func_020ba198(buff, pos - buff);
        len -= (pos - buff) + 7;
        buff = pos + 7;
        if (len > 0) {
            pos = func_020b9df4(buff, len);
        }
    }
    return oldlen - len;
}
