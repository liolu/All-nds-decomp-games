#include "m2c.h"

typedef struct {
    u8 p0;
    u8 kind;
    u16 swp;
    int id;
} P;
typedef struct {
    u8 p[0xc];
    int **q;
} Q;
Q *func_020a30d4(void *);
int func_ov000_021ffa64(void *);

int func_ov000_021fe184(void *a, int b0, P *c) {
    u16 b   = b0;
    c->kind = 2;
    c->swp  = (u16) (((b >> 8) & 0xff) | ((b << 8) & 0xff00));
    c->id   = func_ov000_021ffa64(a);
    if (c->id == -1) {
        Q *t = func_020a30d4(a);
        if (t == 0) {
            return 0;
        }
        c->id = **t->q;
    }
    return 1;
}
