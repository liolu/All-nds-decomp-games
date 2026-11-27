#include "m2c.h"
typedef struct {
    s32 v;
    s32 w;
} Ent;
typedef struct Strm {
    u8 pad0[0x20];
    s32 fmt;
    s32 active : 1;
    s32 rest : 31;
    u32 unit;
    s32 interval;
    s32 f30;
    s32 f34;
    s32 f38;
    s32 f3c;
    s32 alarm;
    u8 pad1[4];
    s32 count;
    u8 idx[8];
} Strm;
extern Ent data_021e02b4[];
extern u8 data_021e0268[];
extern void func_020c8d6c(Strm *);
extern s32 _u32_div_f(s32, s32);
extern s32 func_020c7c0c(void);
extern void func_020d52e8(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_020d5200(s32, s32, s32, void (*)(void *), Strm *);
extern void func_020c8e98(void *);
extern void func_020b4bac(void *, Strm *);
extern s32 _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(s32);
extern void func_020c8ea8(Strm *, s32);
s32 func_020c8b78(Strm *s, s32 fmt, s32 buf, s32 size, s32 rate, s32 fp, s32 cb, s32 cbArg) {
    s32 tick;
    s32 i;
    u32 v;
    s32 irq;
    if (s->active) {
        func_020c8d6c(s);
    }
    v       = _u32_div_f(size, s->count * (fp << 5));
    s->unit = (v * fp) << 5;
    v       = s->unit;
    if (fmt == 1) {
        v >>= 1;
    }
    tick     = _u32_div_f(rate * v, fp);
    s->alarm = func_020c7c0c();
    if (s->alarm < 0) {
        return 0;
    }
    for (i = 0; i < s->count; i++) {
        u8 ch  = s->idx[i];
        Ent *e = &data_021e02b4[ch];
        e->v   = buf + s->unit * i;
        e->w   = 0;
        func_020d52e8(ch, fmt, e->v, 1, 0, s->unit >> 2, 127, 0, rate << 5, 64);
    }
    func_020d5200(s->alarm, tick, tick, func_020c8e98, s);
    func_020b4bac(data_021e0268, s);
    s->fmt      = fmt;
    s->interval = fp;
    s->f30      = cb;
    s->f34      = cbArg;
    s->f38      = 0;
    s->f3c      = 0;
    s->active   = 1;
    irq         = _Z20DisableIRQInterruptsv();
    s->interval = 1;
    func_020c8ea8(s, 0);
    s->interval = fp;
    _Z20SetIRQInterruptStatei(irq);
    return 1;
}
