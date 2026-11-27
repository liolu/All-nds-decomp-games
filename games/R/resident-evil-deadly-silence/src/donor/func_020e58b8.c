/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CriDevSplitPath from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_dev.c (license: none), reused by
 * tools/donor_match.py */
extern int func_0211282c(const char *);
extern void *func_02110374(void *, const void *, int);
extern void func_020e5c10(char *);
extern void func_020e58b8(char *, char *, char *);
void func_020e58b8(char *out, char *rest, char *src) {
    int i, j, k;
    if (src == 0) {
        return;
    }
    for (i = 0; i < 0x129; i++) {
        char c = src[i];
        if (c == ':' || c == 0) {
            break;
        }
        out[i] = c;
    }
    if (src[i] == 0) {
        out[i] = 0;
        func_02110374(rest, out, func_0211282c(out) + 1);
        out[0] = 0;
        return;
    }
    out[i] = 0;
    i++;
    if (i == 2) {
        i      = 0;
        out[0] = 0;
    }
    k = i;
    for (; k < 0x129; k++) {
        char c = src[k];
        if (c == 0) {
            break;
        }
        rest[k - i] = c;
    }
    rest[k - i] = 0;
    func_020e5c10(out);
}
