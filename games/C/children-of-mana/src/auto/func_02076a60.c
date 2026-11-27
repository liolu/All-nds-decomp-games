/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0205c948();                                /* extern */
M2C_UNK func_0205c95c(s32);                         /* extern */
M2C_UNK func_02064740(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02123cf8;

void func_02076a60(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0205c948();
    func_02064740(&data_02123cf8, arg0);
    func_0205c95c(temp_r4);
}
