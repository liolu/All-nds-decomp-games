/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203d9c4 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203d9c4.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct game_0203d5b0_t game_0203d5b0_t;
typedef struct out_0203d5b0_t out_0203d5b0_t;
typedef struct {
    unsigned char state;
    char pad[3];
} state_t;
typedef struct {
    char pad[0x15];
    unsigned char f15;
    char pad16[0x16];
    unsigned short flags;
    char pad2e[0x92];
} entry_t;
typedef struct {
    char pad[0x444];
    state_t states[11];
    entry_t entries[11];
    char padcb0[8];
    unsigned char buf[0x52];
    char d0a;
    unsigned char low : 2;
    unsigned char mode : 2;
    unsigned char high : 4;
    char d0c;
    unsigned char kind;
    char d0e[5];
    unsigned char self;
    unsigned char d14;
    unsigned char d15;
} game_t;
extern int func_02045698(game_0203d5b0_t *g, int kind, out_0203d5b0_t *out);
extern unsigned char func_020454c4(game_t *g);
extern void MI_CpuFill8(void *dst, int value, unsigned int size);
static inline int flag(entry_t *e) {
    int bit = (e->flags >> 4) & 1;
    return bit;
}
int func_02045290(game_t *g) {
    entry_t *e = &g->entries[g->self];
    g->kind    = func_020454c4(g);
    MI_CpuFill8(g->buf, 0, 0x52);
    if (func_02045698((void *) g, g->kind, (void *) g->buf)) {
        g->mode = 1;
        if (flag(e) == 0) {
            g->states[g->self].state = 3;
            return 9;
        }
        if (g->kind == 6 && e->f15 == 0) {
            g->states[g->self].state = 3;
            return 9;
        }
    } else {
        g->mode = 0;
        if (flag(e) == 1) {
            g->states[g->self].state = 3;
            return 9;
        }
    }
    g->d15 = 0;
    g->d14 = 0;
    return 8;
}
