/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203eb14 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203eb14.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char _0[0xd16];
    unsigned short mask;
} game_0203eb14_t;
extern void *func_020449a8(int a0);
void func_02046078(unsigned int n) {
    game_0203eb14_t *g = func_020449a8(0x10);

    if (n > 0xd) {
        n = 0xd;
    }
    g->mask |= 1 << (n - 1);
}
