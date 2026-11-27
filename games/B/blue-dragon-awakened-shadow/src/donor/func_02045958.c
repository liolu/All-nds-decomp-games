/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GetProgramaError from https://github.com/Project-Holon/aletheia src/game/arm9/dwc_ac_error.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern int func_02045958(int err);
int func_02045958(int err) {
    switch (err) {
        case 1:
            return -9;
        case 0:
            return -10;
        case 2:
            return -8;
        case 3:
            return -7;
        default:
            return 0;
    }
}
