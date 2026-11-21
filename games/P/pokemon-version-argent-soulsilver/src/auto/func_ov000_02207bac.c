#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
} P;
typedef struct {
    s32 x;
    s32 y;
} Node;
typedef struct {
    u8 pad[0xC];
    s32 f0c;
    s32 f10;
} Arg;
s32 func_020e9848(void *, void *, s32);
s32 func_020eb82c(void *);
s32 func_ov000_02202aa4(void *, P, Node *, void *, s32);
void func_ov000_022029b0(void *, s32, s32);
void func_ov000_022066f0(void *, void *);
void func_ov000_0220a8b0(void *, void *);
void func_ov000_0220a88c(void *, s32, void *);
s32 func_ov000_0220a4c0(void *, void *, void *, s32);
s32 func_ov000_0220a3e8(void *, void *, s32);
Node *func_ov000_021ec3c8(s32);
extern u8 data_ov000_0221925c;
extern u8 data_ov000_02219264;
extern u8 data_ov000_02219294;
extern u8 data_ov000_022192a0;

s32 func_ov000_02207bac(void *arg0, Arg *arg1, void *arg2) {
    u8 sp10[16];
    P p;
    s32 r6;
    Node *n;
    s32 r;

    if (func_ov000_0220a3e8(arg0, arg2, 1) != 0) {
        return 4;
    }
    if (func_020e9848(arg2, &data_ov000_0221925c, 5) != 0) {
        func_ov000_0220a88c(arg0, 1, &data_ov000_02219264);
        func_ov000_022029b0(arg0, 3, 1);
        return 3;
    }
    if (func_ov000_0220a4c0(arg2, &data_ov000_02219294, sp10, 0x10) == 0) {
        func_ov000_0220a88c(arg0, 1, &data_ov000_02219264);
        func_ov000_022029b0(arg0, 3, 1);
        return 3;
    }
    r6  = func_020eb82c(sp10);
    p.a = arg1->f0c;
    p.b = arg1->f10;
    if (p.a != 0) {
        n = func_ov000_021ec3c8(8);
        if (n == NULL) {
            func_ov000_0220a8b0(arg0, &data_ov000_022192a0);
            return 1;
        }
        n->y = r6;
        n->x = 0;
        r    = func_ov000_02202aa4(arg0, p, n, arg1, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov000_022066f0(arg0, arg1);
    return 0;
}
