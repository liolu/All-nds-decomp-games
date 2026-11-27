/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02040d94 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02040d94.c (license: MIT), reused by
 * tools/donor_match.py */
extern char *func_0204b0b8(void *self, const char *key);
extern int strlen(const char *s);
extern int func_0204c848(const char *s, int len, char *buf, unsigned size);
int func_0204b110(void *self, const char *key, char *buf, unsigned size) {
    char *s = func_0204b0b8(self, key);
    int n;
    if (s == 0) {
        return 0;
    }
    n = func_0204c848(s, strlen(s), buf, size);
    if (n == -1 || (unsigned) n >= size) {
        return n;
    }
    buf[n] = 0;
    return n;
}
