/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ProcessInBuffer from https://github.com/LagoLunatic/ooe libs/GameSpy/gstats/gstats.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void xcode_buf(char *buf, int len);
extern char *FindFinal(char *buff, int len);
extern void ProcessStatement(char *buff, int len);
extern int ProcessInBuffer(char *buff, int len);
extern char enc1[16];
extern char *enc;
void xcode_buf(char *buf, int len);
char *FindFinal(char *buff, int len);
void ProcessStatement(char *buff, int len);
int ProcessInBuffer(char *buff, int len) {
    char *pos;
    int oldlen = len;

    pos = FindFinal(buff, len);

    while ((len > 0) && (pos != 0)) {
        enc = enc1;
        xcode_buf(buff, pos - buff);
        ;
        ProcessStatement(buff, pos - buff);
        len -= (pos - buff) + 7;
        buff = pos + 7;
        if (len > 0) {
            pos = FindFinal(buff, len);
        }
    }
    return oldlen - len;
}
