/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020110e4 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_020110e4.c (license: MIT), reused
 * by tools/donor_match.py */
#pragma ipa file
void func_020054f8(int *p, int shift) {
    if (shift <= 0) {
        return;
    }
    p[0] <<= shift;
    p[1] <<= shift;
    p[2] <<= shift;
    p[3] <<= shift;
    p[4] <<= shift;
    p[5] <<= shift;
    p[6] <<= shift;
    p[7] <<= shift;
    p[8] <<= shift;
}
