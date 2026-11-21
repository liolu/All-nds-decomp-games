#include "m2c.h"
extern void func_020d3f48(void);
extern void func_ov013_0223e6b8(void);
extern s16 func_ov013_0223e1c8(void);
extern void func_ov013_0223df5c(void);
extern u32 func_ov013_0223df48(void);
extern u8 *data_ov013_0224f5e8;
void func_ov013_0223eecc(void) {
    switch (func_ov013_0223df48()) {
        case 1:
            func_ov013_0223df5c();
            break;
        case 7:
            *(s16 *) (data_ov013_0224f5e8 + 0x64A) = func_ov013_0223e1c8();
            *(s32 *) (data_ov013_0224f5e8 + 0xA98) = 0;
            *(s8 *) (data_ov013_0224f5e8 + 0xA90)  = 3;
            break;
        case 0:
            *(s32 *) (data_ov013_0224f5e8 + 0xA98) = 0;
            *(s8 *) (data_ov013_0224f5e8 + 0xA90)  = 3;
            break;
        case 9:
            func_ov013_0223e6b8();
            break;
        case 3:
            break;
        default:
            func_020d3f48();
            break;
    }
}
