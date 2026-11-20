/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201a0d0(s32, void *, u32);            /* extern */
s32 func_0203a6cc(s32);                             /* extern */
extern M2C_UNK data_0210906c;
extern M2C_UNK data_0211310c;

void *func_02019ce4(void *arg0, u32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210906c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211310c;
    M2C_FIELD(arg0, s32 *, 4)      = func_0203a6cc(0x101C);
    func_0201a0d0(M2C_FIELD(arg0, s32 *, 4), ((s8 *) arg1 + 4), (u32) *arg1 >> 8);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}
