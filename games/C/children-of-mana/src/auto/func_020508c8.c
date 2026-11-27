/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0208ff44(s32);                         /* extern */
M2C_UNK func_0209009c(s32);                         /* extern */
extern s32 data_0211a530;
extern s32 data_0211a53c;

void func_020508c8(void) {
    s32 temp_r1;
    s32 temp_r4;

    temp_r1       = data_0211a530 - 1;
    data_0211a530 = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    func_0208ff44(data_0211a53c);
    temp_r4 = data_0211a53c;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_0209009c(temp_r4);
        func_0200f2c4(temp_r4);
    }
    data_0211a53c = 0;
}
