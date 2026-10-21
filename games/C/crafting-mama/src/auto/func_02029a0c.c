#include "m2c.h"

M2C_UNK func_02028fd8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02029b24();                            /* extern */
void *func_02030650();                              /* extern */
extern M2C_UNK data_027e0000;

void func_02029a0c(void) {
    u32 temp_ip;
    void *temp_r0;

    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 0x40);
    temp_r0                                  = func_02030650();
    temp_ip = (M2C_FIELD(temp_r0, s32 *, 4) * M2C_FIELD(temp_r0, u32 *, 0)) + M2C_FIELD(temp_r0, s32 *, 8);
    M2C_FIELD(temp_r0, u32 *, 0) = temp_ip;
    func_02028fd8(((u16) ((u32) ((temp_ip >> 0x10) * 0x28) >> 0x10) + 0xB4) << 0xA, 0, 0x10);
    func_02029b24();
}
