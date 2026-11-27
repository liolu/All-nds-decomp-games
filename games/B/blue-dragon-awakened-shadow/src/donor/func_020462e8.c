/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203e870 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203e870.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char _0[0xd0b];
    unsigned char lo : 4;
    unsigned char retries : 4;
    char _d0c[0x5];
    unsigned char slot;
    char _d12[0x3];
    unsigned char fd15;
} game_0203e870_t;
extern int func_02045ad0(int a0);
int func_020462e8(game_0203e870_t *g) {
    g->fd15    = 0;
    g->retries = g->retries + 1;
    func_02045ad0(0);
    g->slot = 1;
    return 3;
}
