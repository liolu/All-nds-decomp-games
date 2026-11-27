/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f3b4();                            /* extern */
M2C_UNK func_0200f408();                            /* extern */
M2C_UNK func_0200f4f8();                            /* extern */
M2C_UNK func_0200f588();                            /* extern */
M2C_UNK func_0200f5e4();                            /* extern */
M2C_UNK func_02010220();                            /* extern */
M2C_UNK func_020112dc();                            /* extern */
M2C_UNK func_02011b18();                            /* extern */
M2C_UNK func_0203328c();                            /* extern */
M2C_UNK func_0203d1bc();                            /* extern */
M2C_UNK func_0203d1dc();                            /* extern */
M2C_UNK func_0203d1e8();                            /* extern */
M2C_UNK func_0203d204();                            /* extern */
M2C_UNK func_0203d2bc();                            /* extern */
M2C_UNK func_0203d2e4();                            /* extern */
M2C_UNK func_0203dc58();                            /* extern */
M2C_UNK func_0203de18();                            /* extern */
M2C_UNK func_0203de8c();                            /* extern */
M2C_UNK func_0205adbc(s32);                         /* extern */
M2C_UNK func_0205ae1c();                            /* extern */
M2C_UNK func_020a9ef4();                            /* extern */
extern u8 data_02117340;
extern M2C_UNK data_0211b028;

void func_0203e150(void) {
    s32 temp_r6;

    data_02117340 = 1;
    do {
        func_0203dc58();
        func_02011b18();
        func_0203328c();
        func_0200f5e4();
        func_020a9ef4();
        func_020112dc();
        func_0203d1dc();
        func_0203d2e4();
        func_0200f588();
        func_0203d1bc();
        func_0200f4f8();
        func_0203d2bc();
        temp_r6 = M2C_FIELD(&data_0211b028, s32 *, 8);
        func_0205ae1c();
        func_0205adbc(temp_r6);
        func_0203de8c();
        func_0203d204();
        func_0203de18();
        func_0203d1e8();
        func_02010220();
        func_0200f408();
        func_0200f3b4();
    } while (data_02117340 != 0);
}
