#include "m2c.h"

M2C_UNK func_02022bb8(s32);                         /* extern */
extern M2C_UNK data_0216351c;

void func_020b0c90(s32 arg0) {
    M2C_FIELD(&data_0216351c, s16 *, 0x88) = 0;
    M2C_FIELD(&data_0216351c, s32 *, 0x90) = 0;
    func_02022bb8(arg0 + 4);
}
