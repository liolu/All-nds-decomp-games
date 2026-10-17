/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0203c9cc(void *, M2C_UNK *);           /* extern */
void *func_0203d8a8(void *, M2C_UNK);               /* extern */
M2C_UNK func_02047248(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0204729c(void *, void *, u8);          /* extern */
extern M2C_UNK data_020bc190;

void func_02040714(void *arg0) {
    void *temp_r0;

    temp_r0 = func_0203d8a8(arg0, 0x17);
    func_020246e8(M2C_FIELD(arg0, void **, 0x1C4), M2C_FIELD(temp_r0, s32 *, 4), 0);
    func_0204729c(arg0, temp_r0 + 8, M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 0x34));
    func_02047248(arg0, temp_r0 + 0x14, 0);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x19;
    func_0203c9cc(arg0, &data_020bc190);
}
