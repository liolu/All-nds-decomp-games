#include "m2c.h"

M2C_UNK func_0200dc48(void *, M2C_UNK);             /* extern */
M2C_UNK func_02022324(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_0202208c(void *);                      /* extern */
M2C_UNK func_02022dc0(void *);                      /* extern */
extern M2C_UNK func_02082578;

void func_02081564(void *arg0, s32 arg1) {
    func_02022324(arg0, &func_02082578, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_0200dc48(arg0 + 0x4E0, 0);
    func_02022dc0(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_0202208c(arg0);
}
