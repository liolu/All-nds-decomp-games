typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef struct Obj {
    u8 p[0x1BC];
    s32 f1BC;
    s32 f1C0;
} Obj;
typedef struct St {
    s32 f0;
    u8 p4[4];
    s32 f8;
    s32 fC;
    s32 f10;
    u8 p14[4];
    u8 f18[0x10];
    u8 f28[8];
    s32 f30;
} St;
typedef struct Pair {
    s32 a;
    s32 b;
} Pair;
typedef struct Node {
    s32 a;
    s32 b;
    s32 c;
} Node;
extern s32 func_ov000_021ffa90(s32);
extern s32 func_ov000_021ff3f4(s32);
extern void func_ov000_02201be4(void **, s32, s32, void *);
extern void func_ov000_02202958(void **, void *);
extern s32 func_ov000_0220281c(void **, void *, s32 *, s32 *, s32 *);
extern s32 func_ov000_0220269c(void **, s32, void *, s32 *, s32, void *);
extern s32 func_ov000_02202474(void **, s32, void *, s32 *, s32 *, void *);
extern s32 func_ov000_02202aa4(void **, Pair, void *, s32, s32);
extern s32 func_ov000_02206e24(void **, St *);
extern void func_ov000_0220a1e0(void **, St *, s32, s32, s32, s32);
extern void func_ov000_0220a8b0(void **, void *);
extern Node *func_ov000_021ec3c8(s32);
extern u8 data_ov000_0221906c[];
extern u8 data_ov000_022190fc[];
extern u8 data_ov000_0221910c[];
s32 func_ov000_02206ef8(void **arg0, St *arg1) {
    s32 sp8;
    s32 spC;
    Pair pr;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 r;
    Obj *o;
    Node *n;
    o = (Obj *) *arg0;
    if (arg1->f30 != 0) {
        r = func_ov000_0220269c(arg0, arg1->f8, arg1->f28, &spC, 1, data_ov000_0221906c);
        if (spC != 0 || r != 0) {
            arg1->f0 = 0x6A;
            return 0;
        }
    }
    if (arg1->f30 == 0) {
        r = func_ov000_02206e24(arg0, arg1);
        if (r != 0) {
            return r;
        }
        if (arg1->f0 == 0x6A) {
            return 0;
        }
    }
    if (func_ov000_02202474(arg0, arg1->f8, arg1->f18, &sp8, &spC, data_ov000_0221906c) != 0) {
        arg1->f0 = 0x6A;
        return 0;
    }
    if (sp8 > 0) {
        arg1->f10 = func_ov000_021ffa90(0) + 0x12C;
    }
    for (;;) {
        r = func_ov000_0220281c(arg0, arg1->f18, &sp18, &sp1C, &sp20);
        if (r != 0) {
            return r;
        }
        if (sp18 != 0) {
            switch (sp1C) {
                case 1:
                    pr = *(Pair *) &o->f1BC;
                    if (pr.a != 0) {
                        n = func_ov000_021ec3c8(0xC);
                        if (n == 0) {
                            func_ov000_0220a8b0(arg0, data_ov000_022190fc);
                            return 1;
                        }
                        n->a = arg1->fC;
                        n->c = func_ov000_021ff3f4(sp18);
                        n->b = func_ov000_021ffa90(0);
                        r    = func_ov000_02202aa4(arg0, pr, n, 0, 2);
                        if (r != 0) {
                            return r;
                        }
                    }
                    break;
                case 0x66:
                    func_ov000_02201be4(arg0, arg1->fC, 0x67, data_ov000_0221910c);
                    break;
                case 0xC8:
                case 0xC9:
                case 0xCA:
                case 0xCB:
                case 0xCC:
                case 0xCD:
                case 0xCE:
                case 0xCF:
                case 0xD0:
                    func_ov000_0220a1e0(arg0, arg1, sp1C, *(s32 *) arg1->f18, sp18, sp20);
                    break;
            }
            func_ov000_02202958(arg0, arg1->f18);
        }
        if (sp18 == 0) {
            if (spC != 0) {
                arg1->f0 = 0x6A;
            }
            return 0;
        }
    }
}
