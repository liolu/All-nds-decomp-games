#include "m2c.h"

extern M2C_UNK data_021dfe04;

void func_020c7f74(s32 arg0, s8 arg1) {
    *((u8 *) ((s8 *) &data_021dfe04 + (arg0 * 0x24))) = arg1;
}
