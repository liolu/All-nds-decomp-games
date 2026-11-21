#include "m2c.h"
typedef struct S {
    u8 on;
    u8 b1;
    u8 b2;
    u8 b3;
    u32 w4;
    s32 w8;
    s32 wc;
    s64 t10;
    s64 t18;
} S;
extern S *data_ov000_0221a948;
s64 func_020d34b0(void);
void func_ov000_021f7dfc(int arg0) {
    if (data_ov000_0221a948 == 0) {
        return;
    }
    if (data_ov000_0221a948->on == 0) {
        return;
    }
    data_ov000_0221a948->w8  = 0;
    data_ov000_0221a948->wc  = 0;
    data_ov000_0221a948->b2  = 0;
    data_ov000_0221a948->t18 = func_020d34b0();
    if (arg0 != 0) {
        return;
    }
    data_ov000_0221a948->t10 = func_020d34b0();
}
