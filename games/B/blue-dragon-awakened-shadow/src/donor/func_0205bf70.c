/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_ov007_020c7504 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/ov007/func_ov007_020c7504.c (license: MIT),
 * reused by tools/donor_match.py */
extern void ArrayMapBackwards(void *a, int b, int c);
void func_0205bf70(int *self, int b, int c) {
    int i;
    for (i = 0; i < self[1]; i++) {
        ArrayMapBackwards(((void **) self[0])[i], b, c);
    }
}
