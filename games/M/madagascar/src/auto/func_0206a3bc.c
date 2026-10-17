/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02069ec0();                                /* extern */
M2C_UNK func_0206a3f0(void **);                     /* extern */
M2C_UNK func_0206ab40(void **, M2C_UNK, M2C_UNK);   /* extern */

void func_0206a3bc(void **arg0) {
    M2C_FIELD(*arg0, s32 *, 4) = func_02069ec0();
    func_0206ab40(arg0, 2, 1);
    func_0206a3f0(arg0);
}
