/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02037570 from projets/battle-of-giants-dinosaurs/src/auto/func_02037570.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern int func_02004470(double x);
int func_02004470(double x) {
    switch ((((int *) &x)[1]) & 0x7FF00000) {
        case 0x7FF00000:
            if (((((int *) &x)[1]) & 0x000FFFFF) || ((((int *) &x)[0]) & 0xFFFFFFFF)) {
                return 1;
            } else {
                return 2;
            }
        case 0:
            if (((((int *) &x)[1]) & 0x000FFFFF) || ((((int *) &x)[0]) & 0xFFFFFFFF)) {
                return 5;
            } else {
                return 3;
            }
    }
    return 4;
}
