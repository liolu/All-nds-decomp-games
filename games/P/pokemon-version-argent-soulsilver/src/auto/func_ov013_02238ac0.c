#include "m2c.h"
extern s32 func_ov013_02227278(void);
extern void func_ov013_0223abd8(s32 k);
extern void func_ov013_0222b908(void *f);
extern void func_ov013_02238b10(void);
extern u8 data_ov013_0224f5a8;
void func_ov013_02238ac0(void) {
    switch (func_ov013_02227278()) {
        case 0:
            func_ov013_0223abd8(7);
            break;
        case 1:
            func_ov013_0223abd8(6);
            data_ov013_0224f5a8 = 1;
            break;
        default:
            return;
    }
    func_ov013_0222b908(func_ov013_02238b10);
}
