/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02037e28(void *);                      /* extern */
s32 func_02038198(void *);                          /* extern */
extern M2C_UNK data_020fda20;

void func_020381ac(void *arg0) {
    u8 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x620) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x620)  = var_r1;
    M2C_FIELD(arg0, s32 *, 0x524) = (s32) * ((M2C_UNK *) ((s8 *) &data_020fda20 + (func_02038198(arg0) * 4)));
    func_02037e28(arg0);
}
