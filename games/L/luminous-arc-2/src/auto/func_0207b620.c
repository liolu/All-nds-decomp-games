#include "m2c.h"

u32 func_0207baac();                                /* extern */
extern M2C_UNK data_0217024c;

u8 func_0207b620(void) {
    u32 temp_r0;
    u8 var_r4;

    var_r4  = 0xFF;
    temp_r0 = func_0207baac();
    if ((temp_r0 >= 0xAU) && (temp_r0 <= 0x10U)) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_0217024c, void **, 0xC), u8 *, 0x17);
    }
    return var_r4;
}
