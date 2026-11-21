#include "m2c.h"

typedef struct S {
    u8 pad0[8];
    s32 f8;
    u8 pad1[1];
    u8 cnt;
    u8 pad2[0xf4 - 0xe];
    s32 f4[0x1a];
    u8 pad3[0x18c - 0xf4 - 0x68];
    s32 f18c;
    s32 f190;
    u8 pad4[0x1a0 - 0x194];
    s32 st;
    u8 pad5[0x1a9 - 0x1a4];
    u8 c1a9;
    u8 pad6[0x1b0 - 0x1aa];
    u16 h1b0;
    u8 pad7[0x210 - 0x1b2];
    s32 w210[8];
    u8 pad9[0x60];
    u16 h290[8];
    u8 pad8[0x30];
    u8 b2d0[8];
} S;
typedef struct R {
    s32 w0;
    u8 b0;
    u8 b1;
} R;

S *func_ov000_021f957c(void);
void func_ov000_0220d02c(s32, char *, s32);
s32 func_ov000_021ee6f0(void);
void func_ov000_021f2f04(s32, s32);
u32 func_020eb6cc(u8 *, s32, s32);
s32 func_ov000_0220d020(s32, s32);
void func_ov000_021f2ee4(void);
void *func_ov000_021ee74c(s32);
u8 *func_ov000_021ee7c4(s32);
void func_ov000_0220d2c4(s32, void *);
void func_ov000_021f64e0(s32);

extern char data_ov000_02217a94[];
extern char data_ov000_02217aa0[];
extern char data_ov000_02217aac[];

void func_ov000_021f2994(s32 unused, s32 a, s32 b, s32 c, s32 cnt, u8 *str) {
    s32 id;
    s32 t;
    u32 v;
    u8 *r;
    R *q;
    S *s;

    if (func_ov000_021f957c() == 0 || func_ov000_021f957c()->st != 7 || func_ov000_021f957c()->c1a9 != 0) {
        func_ov000_0220d02c(a, data_ov000_02217a94, -1);
        return;
    }
    id = func_ov000_021ee6f0();
    if (id == -1) {
        func_ov000_0220d02c(a, data_ov000_02217aa0, -1);
        func_ov000_021f2f04(6, 0xfffeabc4);
        return;
    }
    if (b != func_ov000_021f957c()->w210[func_ov000_021f957c()->cnt] ||
        c != func_ov000_021f957c()->h290[func_ov000_021f957c()->cnt]) {
        if (*str != 0) {
            v = func_020eb6cc(str, 0, 10);
            if (v == func_ov000_021f957c()->f4[func_ov000_021f957c()->cnt]) {
                func_ov000_021f957c()->w210[func_ov000_021f957c()->cnt] = b;
                func_ov000_021f957c()->h290[func_ov000_021f957c()->cnt] = c;
                goto ok;
            }
        }
        func_ov000_0220d02c(a, data_ov000_02217aac, -1);
        return;
    }
ok:
    s       = func_ov000_021f957c();
    s->f18c = 0;
    s->f190 = 0;
    if (func_ov000_0220d020(a, func_ov000_021f957c()->f8) == 0) {
        func_ov000_021f2f04(6, 0xfffec5e6);
        return;
    }
    func_ov000_021f2ee4();
    if (func_ov000_021f957c()->cnt == 0) {
        t = cnt >> 1;
        if (t >= 0xffff) {
            t = 0xffff;
        }
        func_ov000_021f957c()->h1b0 = t;
    }
    q     = func_ov000_021ee74c(id);
    r     = func_ov000_021ee7c4(id);
    q->w0 = a;
    func_ov000_021f957c()->cnt++;
    r[0]             = id;
    s                = func_ov000_021f957c();
    r[1]             = s->b2d0[func_ov000_021f957c()->cnt - 1];
    *(u16 *) (r + 2) = 0;
    *(u32 *) (r + 4) = 0;
    func_ov000_0220d2c4(a, r);
    func_ov000_021f64e0(2);
}
