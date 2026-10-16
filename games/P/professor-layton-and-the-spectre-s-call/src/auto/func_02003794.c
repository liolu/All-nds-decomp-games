#include "m2c.h"

extern M2C_UNK data_02031ecc;

void func_02003794(s32 arg0, s8 arg1) {
    *((u8 *) ((s8 *) &data_02031ecc + (arg0 * 0x24))) = arg1;
}
