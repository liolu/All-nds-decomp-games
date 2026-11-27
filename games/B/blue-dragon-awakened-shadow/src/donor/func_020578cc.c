/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204b130 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0204b130.c (license: MIT), reused
 * by tools/donor_match.py */
extern char data_020fa7d8[];
extern char data_020fa89c[];
extern char data_020fa8a8[];
extern char data_020fa7e0[];
extern char data_020fa7ec[];
extern char data_020fa7f8[];
extern int func_02074488(void *self, void *key, int flags);
int func_020578cc(void *self) {
    if (func_02074488(self, data_020fa89c, -1) == -1) {
        return 0;
    }
    if (func_02074488(self, data_020fa8a8, -1) == -1) {
        return 0;
    }
    if (func_02074488(self, data_020fa7e0, -1) == -1) {
        return 0;
    }
    if (func_02074488(self, data_020fa7ec, -1) == -1) {
        if (func_02074488(self, data_020fa7ec, 0) == 0) {
            return 0;
        }
    }
    if (func_02074488(self, data_020fa7f8, -1) == -1) {
        return 0;
    }
    return func_02074488(self, data_020fa7d8, 0);
}
