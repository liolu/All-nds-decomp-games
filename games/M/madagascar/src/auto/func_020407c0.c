/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e1a8();                            /* extern */
extern M2C_UNK data_02089dd8;

void func_020407c0(void *arg0) {
    func_0203e1a8();
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(&data_02089dd8, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) M2C_FIELD(&data_02089dd8, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) M2C_FIELD(&data_02089dd8, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) M2C_FIELD(&data_02089dd8, s32 *, 0xC);
}
