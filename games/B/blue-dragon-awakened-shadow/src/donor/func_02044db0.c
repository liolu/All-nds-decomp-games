/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203d2e8 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203d2e8.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char _0[0xc];
    unsigned char name[0x20];
    unsigned short flags;
} entry_0203d2e8_t;
typedef struct {
    char _0[0xd0c];
    unsigned char mode : 4;
    unsigned char _hi : 4;
} game_0203d2e8_t;
extern void *func_020449a8(int a);
extern int func_02046d74(int a0);
extern int func_02046cc8(int arg0);
static inline int IsFlag10_0203d2e8(entry_0203d2e8_t *rec) {
    unsigned char bit = (rec->flags >> 4) & 1;

    return bit;
}
int func_02044db0(entry_0203d2e8_t *rec) {
    game_0203d2e8_t *g = func_020449a8(0x10);

    if ((g->mode == 0 || g->mode == 4) && IsFlag10_0203d2e8(rec) == 1) {
        if (func_02046d74((int) rec->name) == 1) {
            return 6;
        }
    }
    if ((g->mode == 0 || g->mode == 5) && IsFlag10_0203d2e8(rec) == 1) {
        if (func_02046cc8((int) rec->name) == 1) {
            return 7;
        }
    }
    return -1;
}
