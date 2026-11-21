#include "m2c.h"
typedef struct {
    u8 *a;
    u8 *b;
} Pair;
typedef struct {
    Pair *items;
    s32 cap;
    s32 n;
} List;
typedef struct {
    u8 pad[0x1010];
    void *(*alloc)(void *, s32);
    void (*free)(void *, void *, s32);
} Heap;
s32 func_020e9580(u8 *);
void func_020e959c(u8 *, u8 *);
extern u8 data_ov000_0221682c;
extern u8 data_ov000_0221684c;
extern u8 data_ov000_0221686c;
extern u8 data_ov000_02216888;

s32 func_ov000_021e9df8(Heap *h, List *l, u8 *s1, u8 *s2) {
    void *(*al)(void *, s32);
    void (*fr)(void *, void *, s32);

    al = h->alloc;
    fr = h->free;
    if (l->n > l->cap) {
        return 0;
    }
    l->items[l->n].a = al(&data_ov000_0221682c, func_020e9580(s1) + 1);
    if (l->items[l->n].a != 0) {
        l->items[l->n].b = al(&data_ov000_0221684c, func_020e9580(s2) + 1);
        if (l->items[l->n].b != 0) {
            func_020e959c(l->items[l->n].a, s1);
            func_020e959c(l->items[l->n].b, s2);
            l->n = l->n + 1;
            return 1;
        }
    }
    if (l->items[l->n].a != 0) {
        fr(&data_ov000_0221686c, l->items[l->n].a, 0);
        l->items[l->n].a = 0;
    }
    if (l->items[l->n].b != 0) {
        fr(&data_ov000_02216888, l->items[l->n].b, 0);
        l->items[l->n].b = 0;
    }
    return 0;
}
