/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203d6e0 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_0203d6e0.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    char pad[0xc];
    unsigned char name[0x20];
    unsigned short flags;
} entry_0203d2e8_t;
typedef struct {
    char pad[0xc];
    unsigned char name[0x20];
} entry_0203e204_t;
typedef struct {
    char pad[0xa];
    unsigned short len;
    unsigned char name[0xb4];
} entry_t;
typedef struct {
    unsigned char low : 4;
    unsigned char state : 4;
    unsigned char value;
    unsigned char pad;
    unsigned char len;
    unsigned char name[0x20];
} rec_t;
typedef struct {
    char pad[0x300];
    rec_t recs[10];
    char pad468[8];
    entry_t entries[11];
    char padcb0[0x5c];
    unsigned char low : 6;
    unsigned char mode : 2;
    char padd0d[3];
    unsigned char count;
    char padd11[2];
    unsigned char self;
} game_t;
extern int func_02044db0(entry_0203d2e8_t *rec);
extern int func_02045b64(entry_0203e204_t *rec);
extern int strncmp(unsigned char *s1, unsigned char *s2, int n);
unsigned char func_020454c4(game_t *g) {
    entry_t *e = &g->entries[g->self];
    int result = 0;
    int i, n;
    if (g->mode == 0) {
        n = 0;
        if (e->len == 0x20) {
            result = func_02044db0((entry_0203d2e8_t *) e);
            if (result > 0) {
                n++;
            } else {
                result = 0;
            }
        } else if (e->len == 8) {
            result = func_02045b64((entry_0203e204_t *) e);
            if (result != 0) {
                n++;
            } else {
                result = 0;
            }
        }
        for (i = 0; i < g->count; i++) {
            if (e->len == g->recs[i].len && strncmp(e->name, g->recs[i].name, e->len) == 0) {
                if (n == 0) {
                    result = g->recs[i].value;
                } else {
                    g->recs[i].state = 1;
                    g->mode          = 1;
                }
                n++;
            }
        }
    } else {
        i = 0;
        n = 0;
        for (; i < g->count; i++) {
            if (g->recs[i].state == 1) {
                if (n == 0) {
                    g->recs[i].state = 0;
                    result           = g->recs[i].value;
                }
                n++;
            }
        }
        if (n == 1) {
            g->mode = 0;
        }
    }
    return result;
}
