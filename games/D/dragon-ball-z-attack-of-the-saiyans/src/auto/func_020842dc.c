#include "m2c.h"

M2C_UNK _Z26InitializeContextRegistersP16ProcessorContextjj(void *, M2C_UNK (*)(s32)); /* extern */
M2C_UNK func_02084338(s32);                         /* extern */
M2C_UNK func_02084710(void *);                      /* extern */
extern M2C_UNK data_020d8600;

void func_020842dc(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_020d8600, s32 *, 0x1C) != 0) {
        _Z26InitializeContextRegistersP16ProcessorContextjj(arg0, func_02084338);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_02084710(arg0);
        return;
    }
    func_02084338(arg1);
}
