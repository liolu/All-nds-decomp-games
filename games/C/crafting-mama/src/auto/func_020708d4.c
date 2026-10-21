#include "m2c.h"

M2C_UNK func_020315bc(M2C_UNK *);                   /* extern */
M2C_UNK func_0205e6a8(s32);                         /* extern */
extern s32 data_020ca324;
extern M2C_UNK data_020ca328;

void func_020708d4(s32 arg0) {
    data_020ca324 = 0;
    func_0205e6a8(arg0 + 0x20);
    func_020315bc(&data_020ca328);
}
