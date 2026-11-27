#include "m2c.h"

M2C_UNK func_02092e58();                            /* extern */
M2C_UNK func_02092ed8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e7c90;
extern s32 data_027e05e8;

void func_0202a230(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x570) = 0;
    data_027e05e8 &= ~0x10;
    func_02092ed8(&data_020e7c90);
    M2C_FIELD(&data_020e7c90, u8 *, 0xC) = (u8) (M2C_FIELD(&data_020e7c90, u8 *, 0xC) & ~0x40);
    func_02092e58();
}
