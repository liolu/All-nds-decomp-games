/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207347c(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_020734f0(s32, u32);                        /* extern */
M2C_UNK func_02073540(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212325c;
extern M2C_UNK data_02123260;

void func_020738fc(void) {
    M2C_FIELD(&data_0212325c, s32 *, 4) =
        func_020734f0(M2C_FIELD(&data_0212325c, s32 *, 0xC), (u32) M2C_FIELD(&data_0212325c, u32 *, 0x10) >> 4);
    func_02073540(&data_0212325c);
    func_0207347c(&data_0212325c, &data_02123260, 0, M2C_FIELD(&data_0212325c, s32 *, 8));
}
