#include "m2c.h"
typedef struct {
    void *f0;
    u8 pad[0x10];
    s32 f14;
    s32 f18;
} S;
extern S *data_ov000_0221a7a4;
extern u8 func_ov000_021ef1d4[];
extern u8 func_ov000_021f2994[];
extern u8 func_ov000_021f28a0[];
extern s32 func_ov000_021ed604(s32);
extern s32 func_ov000_0220f744(s32, u16, s32);
extern s32 func_ov000_0220cfb8(S *, s32, s32, s32, void *);
extern s32 func_ov000_021ee9f0(s32);
extern void func_ov000_0220d014(void *, void *);
extern void func_ov000_0220d2bc(void *, void *);

s32 func_ov000_021ee5a4(void) {
    S *s;
    s32 r;
    s32 t;
    if (data_ov000_0221a7a4->f0 != 0) {
        return 0;
    }
    t = func_ov000_021ed604(0x4000) + 0xc000;
    s = data_ov000_0221a7a4;
    t = func_ov000_0220f744(0, t, 0);
    r = func_ov000_0220cfb8(data_ov000_0221a7a4, t, s->f14, s->f18, func_ov000_021ef1d4);
    if (func_ov000_021ee9f0(r) != 0) {
        return r;
    }
    func_ov000_0220d014(data_ov000_0221a7a4->f0, func_ov000_021f2994);
    func_ov000_0220d2bc(data_ov000_0221a7a4->f0, func_ov000_021f28a0);
    return r;
}
