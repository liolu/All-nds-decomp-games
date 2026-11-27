#include "m2c.h"

M2C_UNK func_020a0dac(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02110650;
extern M2C_UNK data_02110668;

void func_020a2eac(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        func_020a0dac(&data_02110668);
        return;
    }
    func_020a0dac(&data_02110650);
}
