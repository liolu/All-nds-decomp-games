/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0208ff44();                            /* extern */
M2C_UNK func_0209009c(s32);                         /* extern */
extern s32 data_0211a534;

void func_020507e8(void) {
    s32 temp_r4;

    if (data_0211a534 == 0) {
        return;
    }
    func_0208ff44();
    temp_r4 = data_0211a534;
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_0209009c(temp_r4);
        func_0200f2c4(temp_r4);
    }
    data_0211a534 = 0;
}
