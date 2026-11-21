#include "m2c.h"

typedef struct S {
    s8 *str;
    s32 end;
} S;
void func_020d2618(void *);
void func_020d269c(void *);
s32 func_020e9580(void *);
s8 *func_020e9ad0(s8 *, void *);
s32 func_020eb82c(s8 *);
extern u8 data_ov000_022166e4[];
extern u8 data_ov000_02216714[];
extern u8 data_ov000_02216700[];

s32 func_ov000_021e9370(u8 *arg0) {
    s8 *str;
    S *s;
    s32 off;
    s8 *p;
    s8 *q;
    s8 saved;

    str = *(s8 **) (arg0 + 0x1A08);
    s   = (S *) (arg0 + 0x1A08);
    if (func_020e9ad0(str, data_ov000_022166e4) == NULL) {
        return 0;
    }
    off = (s32) func_020e9ad0(str, data_ov000_022166e4) + 4;
    func_020d2618(arg0 + 0x1A18);
    *(s32 *) (arg0 + 0x1A34) = s->end - off;
    func_020d269c(arg0 + 0x1A18);
    p = func_020e9ad0(s->str, data_ov000_02216700);
    if (p == NULL) {
        return 1;
    }
    p     = p + func_020e9580(data_ov000_02216700);
    q     = func_020e9ad0(p, data_ov000_02216714);
    saved = *q;
    *q    = 0;
    func_020d2618(arg0 + 0x1A18);
    *(s32 *) (arg0 + 0x1A30) = func_020eb82c(p);
    func_020d269c(arg0 + 0x1A18);
    *q = saved;
    return 1;
}
