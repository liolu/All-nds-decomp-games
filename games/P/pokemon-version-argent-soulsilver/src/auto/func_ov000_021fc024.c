#include "m2c.h"
typedef struct {
    u8 p0;
    u8 a;
    u8 p2;
    u8 b;
    u8 d[8];
    u8 q[0x18];
} E;
typedef struct {
    u8 k : 4;
    u8 r : 4;
} K;
extern u8 func_ov000_021fc170(u8 *);
extern void func_020d4a50(void *, void *, s32);
extern u8 data_ov000_02216080[];
u8 func_ov000_021fc024(u8 *o) {
    E *e = (E *) (o + 0x300);
    u8 n = func_ov000_021fc170(o);
    e    = e + n;
    if (((K *) (o + 0xd0c))->k == 0 || ((K *) (o + 0xd0c))->k == 6) {
        func_020d4a50(data_ov000_02216080, e->d, 8);
        e->b = 8;
        e->a = 8;
        n    = n + 1;
    }
    return n;
}
