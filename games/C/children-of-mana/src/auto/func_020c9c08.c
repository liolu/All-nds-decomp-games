/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c9b50();                            /* extern */
M2C_UNK func_0208ff94(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_020900a0();                                /* extern */
extern M2C_UNK data_0210aaec;
extern s32 data_02129c30;

void func_020c9c08(void) {
    s32 var_r0;

    func_020c9b50();
    var_r0 = func_0200f270(0x18, 0);
    if (var_r0 != 0) {
        var_r0 = func_020900a0();
    }
    data_02129c30 = var_r0;
    func_0208ff94(var_r0, &data_0210aaec, 0);
}
