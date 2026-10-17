/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202943c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020296bc(void *);                      /* extern */

void func_0202a124(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        if (M2C_FIELD(arg0, u8 *, 0x5AC) == 1) {
            M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK), 0x5B0)(0);
            M2C_FIELD(arg0, u8 *, 0x5AC) = 0U;
        }
        if (M2C_FIELD(arg0, u8 *, 0x57D) != 1) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x59C) = 5;
        func_020296bc(arg0);
        return;
    }
    func_0202943c(arg0, 0xA);
}
