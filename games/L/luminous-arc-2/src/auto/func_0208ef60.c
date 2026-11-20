#include "m2c.h"

extern M2C_UNK data_0217053c;

u8 func_0208ef60(void) {
    u8 var_r3;

    var_r3 = 0;
loop_1:
    if (*((u8 *) ((s8 *) &data_0217053c + (var_r3 * 0xC))) == 0) {
        return (u8) (var_r3 + 0x64);
    }
    var_r3 += 1;
    if ((u32) var_r3 >= 0x9AU) {
        return 0U;
    }
    goto loop_1;
}
