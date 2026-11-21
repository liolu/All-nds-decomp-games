#include "m2c.h"

extern u8 data_ov000_02219988[];
extern u8 data_ov000_02219974[];
extern u8 data_ov000_02219990[];
extern u8 data_ov000_02219994[];
extern u8 data_ov000_02219998[];
extern u8 data_ov000_022199a0[];
extern u8 data_ov000_02219964[];

void *func_ov000_0220b17c(void *a, void *b);
s32 func_020eb82c(void *p);
s32 func_ov000_0220b208(s32 a, s32 b, s32 c);
u8 *func_020e9ad0(u8 *a, u8 *b);
void func_ov000_0220b6b4(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_ov000_0220b3c8(void *arg0) {
    u8 *q;
    s32 r8;
    s32 r7;
    s32 r6;
    s32 r5;
    s32 third;
    s32 fourth;

    r7    = func_020eb82c(func_ov000_0220b17c(arg0, data_ov000_02219988));
    r6    = func_020eb82c(func_ov000_0220b17c(arg0, data_ov000_02219974));
    r5    = func_020eb82c(func_ov000_0220b17c(arg0, data_ov000_02219990));
    third = r5;
    r5    = func_020eb82c(func_ov000_0220b17c(arg0, data_ov000_02219994));
    r8    = func_ov000_0220b208(1, r6, third);
    if (r8 == -1) {
        return;
    }
    r6 = func_020eb82c(func_ov000_0220b17c(arg0, data_ov000_02219998));
    q  = func_020e9ad0(arg0, data_ov000_022199a0);
    if (q == NULL) {
        q  = data_ov000_02219964;
        r6 = 0;
    } else {
        q = q + 6;
    }
    func_ov000_0220b6b4(r8, r7, r5, (s32) q, r6);
}
