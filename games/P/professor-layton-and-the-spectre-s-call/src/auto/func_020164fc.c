#include "engine.h"
#include "m2c.h"

s32 func_020164fc(s32 arg0) {
    if (((u32) arg0 >= 0x05000000U) && ((u32) arg0 < 0x07000800U)) {
        return 1;
    }
    return 0;
}
