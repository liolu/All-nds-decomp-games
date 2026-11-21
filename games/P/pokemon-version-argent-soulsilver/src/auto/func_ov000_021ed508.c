/* near start: 1 diffs with profile "1.2/sp3" */
extern int func_020e9580(char *);
extern void func_020e9664(char *, int, int);
extern int func_020e9848(int, char *, int);
extern int func_020e987c(int, int);

int func_ov000_021ed508(char *s, char *out, int in, int ch) {
    int p;
    int q;
    int len;
    if (out == 0) {
        return -1;
    }
    p = func_020e987c(in, ch);
    if (p == 0) {
        return -1;
    }
    while (1) {
        if (func_020e9848(p + 1, s, func_020e9580(s)) != 0 || ch != ((signed char *) ((char *) func_020e9580(s) + p))[1]) {
            q = func_020e987c(p + 1, ch);
            if (q == 0) {
                return -1;
            }
            p = func_020e987c(q + 1, ch);
            if (p == 0) {
                return -1;
            }
        } else {
            break;
        }
    }
    q = func_020e987c(p + 1, ch);
    if (q == 0) {
        return -1;
    }
    p = func_020e987c(q + 1, ch);
    if (p != 0) {
        len = p - (q + 1);
    } else {
        len = func_020e9580((char *) (q + 1));
    }
    func_020e9664(out, q + 1, len);
    out[len] = 0;
    return len;
}
