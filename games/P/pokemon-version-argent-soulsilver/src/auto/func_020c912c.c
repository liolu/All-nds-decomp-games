#include "m2c.h"

typedef struct {
    s32 f0, f4;
    u8 p0[0x20 - 8];
    s32 f20, f24, f28, f2c;
} G;
typedef struct {
    u8 p[0x48];
    s32 f48;
} H;
extern H data_021e0334;
extern G data_021e037c;
extern u8 data_021e033c[];
extern void func_020d519c(u32, u32, u32, u32);
extern s32 func_020d59fc(void);
extern s32 func_020d57d4(s32);
extern void func_020d5990(s32);
extern int func_020d2444(void *, void *, int);
extern void func_020c7bf0(s32);
extern void func_020c7bc0(s32);
extern void func_020c7c54(s32);
extern void func_020d53b4(int, int, int, int);

void func_020c912c(void) {
    G *g = &data_021e037c;
    s32 en;
    s32 r;
    if (data_021e0334.f48 == 0) {
        return;
    }
    en = g->f2c >= 0;
    func_020d519c(g->f24, g->f28, en ? 1 << g->f2c : 0, 0);
    if (en) {
        r = func_020d59fc();
        func_020d57d4(1);
        func_020d5990(r);
        while (func_020d2444(data_021e033c, 0, 0) != 0) {
        }
    }
    if (g->f28 != 0) {
        func_020c7bf0(g->f28);
    }
    if (g->f20 != 0) {
        func_020c7bc0(g->f20);
    }
    if (en) {
        func_020c7c54(g->f2c);
    }
    if (g->f4 == 1) {
        func_020d53b4(0, 0, 0, 0);
    }
    g->f0 = 0;
}
