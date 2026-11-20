/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02047248(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0204729c(void *, s32, u8);             /* extern */
extern M2C_UNK data_020bdf0c;

void func_02014034(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E4) = 4;
    func_020246e8(M2C_FIELD(arg0, void **, 0x1C4),
                  *((M2C_UNK *) ((s8 *) &data_020bdf0c + (M2C_FIELD(arg0, s32 *, 0x1E4) * 4))), 0);
    func_0204729c(arg0, (M2C_FIELD(arg0, s32 *, 0x1E4) * 0x18) + (s32) (arg0 + 0x1F4),
                  M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 0x34));
    func_02047248(arg0, (M2C_FIELD(arg0, s32 *, 0x1E4) * 0x18) + (s32) (arg0 + 0x200), 0);
}
