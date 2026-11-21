#include "m2c.h"

extern int func_020e5bb0(const void *, const void *, int);
extern void func_ov000_0220c0e4(void *, s32, s32);
extern void func_ov000_0220c05c(void *, const void *, s32);
extern s32 func_ov000_0220bf90(void *);
extern s32 func_ov000_0220cc58(void *, void *, s32);
extern u8 data_ov000_02219cd4;

s32 func_ov000_0220ebec(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *p;
    s32 n;
    if (arg2 < 2 || func_020e5bb0(arg1, &data_ov000_02219cd4, 2) != 0) {
        if (func_ov000_0220cc58(arg0, arg1, arg2) == 0) {
            return 0;
        }
        return 1;
    }
    n = arg2 + 2;
    if (func_ov000_0220bf90(arg0 + 0x50) < n) {
        return 1;
    }
    p = (u8 *) (*(s32 *) (arg0 + 0x50) + *(s32 *) (arg0 + 0x58));
    func_ov000_0220c05c(arg0 + 0x50, &data_ov000_02219cd4, 2);
    func_ov000_0220c05c(arg0 + 0x50, arg1, arg2);
    if (func_ov000_0220cc58(arg0, p, n) == 0) {
        return 0;
    }
    func_ov000_0220c0e4(arg0 + 0x50, -1, n);
    return 1;
}
