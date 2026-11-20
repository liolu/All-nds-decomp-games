/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020060f4 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_020060f4.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct {
    int f_0;
    int f_4;
} state_02103d74_pair_t;
extern state_02103d74_pair_t data_020cc1b0;
void func_02014538(int *out_a, int *out_b) {
    *out_a = data_020cc1b0.f_0;
    *out_b = data_020cc1b0.f_4;
}
