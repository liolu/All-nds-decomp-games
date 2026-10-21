#include "m2c.h"

M2C_UNK func_020315bc(M2C_UNK *);                   /* extern */
M2C_UNK func_0205e6a8(s32);                         /* extern */
extern M2C_UNK data_020aad7c;

void func_0204121c(s32 arg0) {
    func_0205e6a8(arg0 + 0x60);
    func_020315bc(&data_020aad7c);
}
