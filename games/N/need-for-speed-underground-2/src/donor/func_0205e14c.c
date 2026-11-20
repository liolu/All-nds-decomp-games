/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a0724 from projets/pokemon-dash/src/donor/func_020a0724.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
#pragma ipa file
int func_0205e14c(int *o, int r1, int sel) {
    switch (sel) {
        case 0:
            r1 += o[8];
            break;
        case 1:
            r1 += o[10];
            break;
        case 2:
            r1 += o[9];
            break;
        default:
            return 0;
    }
    if ((unsigned) r1 < (unsigned) o[8]) {
        r1 = o[8];
    }
    if (r1 > o[9]) {
        r1 = o[9];
    }
    o[10] = r1;
    return 1;
}
