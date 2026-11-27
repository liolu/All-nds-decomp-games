#include "m2c.h"

void func_ov000_021b85c8(s32);
void func_ov000_021b862c(void);
s32 WM_StartMP(void *, void *, u16, void *, u16, s32);
extern void func_ov000_021b89fc(void);
extern u8 data_ov000_021ef300[];
extern u8 data_ov000_021ef820[];
extern u8 data_ov000_021ef4c0[];

s32 func_ov000_021b8968(void) {
    s32 r;
    s32 v;

    v = *(s32 *) (data_ov000_021ef300 + 0x24);
    if (!(v != 4 && v != 6 && v != 5)) {
        r = 1;
    } else {
        func_ov000_021b85c8(4);
        if (WM_StartMP((void *) func_ov000_021b89fc, data_ov000_021ef820, (u16) * (s32 *) (data_ov000_021ef300 + 0x50),
                       data_ov000_021ef4c0, (u16) * (s32 *) (data_ov000_021ef300 + 0x4C), 1) == 2) {
            r = 1;
        } else {
            func_ov000_021b862c();
            r = 0;
        }
    }
    return r;
}
