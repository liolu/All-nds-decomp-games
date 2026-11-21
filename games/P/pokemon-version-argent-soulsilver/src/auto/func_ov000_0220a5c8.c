#include "m2c.h"
s32 func_ov000_021ff5bc(s32, s32, s32 *, s32 *);
void func_ov000_022029b0(s32, s32, s32);
void func_ov000_0220a88c(s32, s32, void *);
void func_ov000_0220a3dc(s32, void *);
extern u8 data_ov000_0221980c;
extern u8 data_ov000_02219820;
extern u8 data_ov000_02219858;
extern u8 data_ov000_02219870;

s32 func_ov000_0220a5c8(s32 arg0, s32 arg1, s32 *arg2) {
    s32 sp0;
    s32 sp4;
    s32 t;

    sp0 = 0;
    sp4 = 0;
    t   = func_ov000_021ff5bc(arg1, 0, &sp0, &sp4);
    if (t == -1) {
        func_ov000_0220a3dc(arg0, &data_ov000_0221980c);
        func_ov000_0220a88c(arg0, 5, &data_ov000_02219820);
        func_ov000_022029b0(arg0, 3, 1);
        return 3;
    }
    if (t > 0) {
        if (sp4 != 0) {
            func_ov000_0220a3dc(arg0, &data_ov000_02219858);
            *arg2 = 4;
            return 0;
        }
        if (sp0 != 0) {
            func_ov000_0220a3dc(arg0, &data_ov000_02219870);
            *arg2 = 3;
            return 0;
        }
    }
    *arg2 = 0;
    return 0;
}
