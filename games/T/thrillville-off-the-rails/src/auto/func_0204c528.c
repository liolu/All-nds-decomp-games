#include "m2c.h"

M2C_UNK func_0204c86c(s32);                         /* extern */
M2C_UNK func_0204c554();                            /* extern */
M2C_UNK func_0204d368(s32, M2C_UNK, M2C_UNK *);     /* extern */
extern M2C_UNK func_0204c518;

void func_0204c528(s32 arg0) {
    func_0204c554();
    func_0204d368(arg0 + 8, 1, &func_0204c518);
    func_0204c86c(arg0);
}
