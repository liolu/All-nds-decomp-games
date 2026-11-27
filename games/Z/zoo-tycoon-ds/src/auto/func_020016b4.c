#include "m2c.h"

M2C_UNK func_02001314(void *);                      /* extern */
extern M2C_UNK data_020ce1d8;

void func_020016b4(s32 arg0) {
    func_02001314((M2C_UNK *) ((s8 *) &data_020ce1d8 + (arg0 * 0x10)));
}
