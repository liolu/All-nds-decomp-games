#include "m2c.h"

void func_020cb68c(void **arg0, s32 arg1) {
    s32 temp_ip;

    temp_ip                                                        = arg1 * 0xC;
    *(s8 *) (M2C_FIELD(*arg0, s32 *, 0x640) + temp_ip)             = 1;
    M2C_FIELD((M2C_FIELD(*arg0, s32 *, 0x640) + temp_ip), s8 *, 1) = 0;
}