/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010be4(void *, s32, s32);            /* extern */
M2C_UNK func_0203e3ac(void *, void *);              /* extern */
extern s32 data_02117378;

void func_0203e2c4(void *arg0, void *arg1) {
    func_02010be4(arg0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 8));
    func_0203e3ac(arg0, arg0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - data_02117378);
}
