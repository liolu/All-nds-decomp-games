#include "m2c.h"

s32 func_020ae420(void);
s32 func_020ad968(void);
void func_020adbc4(void);
void func_020ade4c(void);
void func_020ae0f4(void);
void func_020ae210(void);
void func_ov000_021faf08(s32);

s32 func_ov000_021fbc98(void) {
    switch (func_020ae420()) {
        case 0:
            return 1;
        case 1:
            func_020ad968();
            break;
        case 3:
            func_020adbc4();
            break;
        case 6:
            func_020ade4c();
            break;
        case 9:
            func_020ae0f4();
            break;
        case 12:
            func_020ae210();
            break;
        case 11:
            func_ov000_021faf08(0);
            return -1;
    }
    return 0;
}
