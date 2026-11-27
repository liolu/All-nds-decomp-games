/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206e200(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206e360(void *);

s32 func_0206e130(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_0206e360(sp0);
    if (func_0206e200((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
