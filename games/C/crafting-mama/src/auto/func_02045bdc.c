#include "m2c.h"

M2C_UNK func_020315bc(M2C_UNK *);                   /* extern */
extern s32 data_020ab2d8;
extern M2C_UNK data_020ab2dc;

void func_02045bdc(s32 arg0) {
    if (arg0 == data_020ab2d8) {
        data_020ab2d8 = 0;
    }
    func_020315bc(&data_020ab2dc);
}
