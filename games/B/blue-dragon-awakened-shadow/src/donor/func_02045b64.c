/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203e204 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203e204.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char _0[0xc];
    unsigned char name[0x20];
} entry_0203e204_t;
typedef struct {
    char _0[0xd0c];
    unsigned char mode : 4;
    unsigned char _hi : 4;
} game_0203e204_t;
extern unsigned char data_020e4c20[];
extern void *func_020449a8(int a0);
extern int strncmp(void *a, void *h, unsigned int n);
int func_02045b64(entry_0203e204_t *rec) {
    game_0203e204_t *g = func_020449a8(0x10);

    if (g->mode == 0 || g->mode == 6) {
        if (strncmp(rec->name, data_020e4c20, 8) == 0) {
            return 8;
        }
    }
    return 0;
}
