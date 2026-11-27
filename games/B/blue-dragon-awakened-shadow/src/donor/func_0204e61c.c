/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02046694 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02046694.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern int func_020533ac(int *a0);
extern int func_020531a0(int index, int count);
int func_0204e61c(int code) {
    int data;
    int count;
    int i;
    unsigned char *p;
    count = func_020533ac(&data);
    i     = 0;
    if (count > 0) {
        p = (unsigned char *) data;
        do {
            if (code == *p) {
                break;
            }
            i++;
            p++;
        } while (i < count);
    }
    if (i == count) {
        return 0;
    }
    return func_020531a0(i, count);
}
