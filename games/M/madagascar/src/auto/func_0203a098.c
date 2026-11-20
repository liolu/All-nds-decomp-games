/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e60(void *, s32);                 /* extern */
M2C_UNK func_0203a064(void *);                      /* extern */

void func_0203a098(void *arg0, s32 arg1) {
    func_02000e60(arg0 + 4, M2C_FIELD(arg0, s32 *, 0x10) + arg1);
    if ((arg1 & 0x80000000) == (M2C_FIELD(arg0, s32 *, 0x18) & 0x80000000)) {
        return;
    }
    func_0203a064(arg0);
}
