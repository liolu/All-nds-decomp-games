#include "m2c.h"

void *func_ov000_0220b17c(void *, void *);
s32 func_020eb82c(void *);
s32 func_ov000_0220b208(s32, s32, s32);
void func_ov000_0220b6b4(s32, s32, s32, s32, s32);
extern u8 data_ov000_022199a8;
extern u8 data_ov000_02219990;
extern u8 data_ov000_02219974;
extern u8 data_ov000_02219994;

void func_ov000_0220b4ac(void *a) {
    s32 s1;
    s32 s2;
    s32 s3;
    s32 s4;
    s32 r;
    s1 = func_020eb82c(func_ov000_0220b17c(a, &data_ov000_022199a8));
    s2 = func_020eb82c(func_ov000_0220b17c(a, &data_ov000_02219990));
    s3 = func_020eb82c(func_ov000_0220b17c(a, &data_ov000_02219974));
    s4 = func_020eb82c(func_ov000_0220b17c(a, &data_ov000_02219994));
    r  = func_ov000_0220b208(2, s3, s2);
    if (r == -1) {
        return;
    }
    func_ov000_0220b6b4(r, s1, s4, 0, 0);
}
