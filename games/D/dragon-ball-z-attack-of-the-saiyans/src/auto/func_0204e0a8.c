#include "m2c.h"

void *func_02053a7c(u8);                            /* extern */
extern M2C_UNK data_020cc620;

u16 func_0204e0a8(void) {
    void *temp_r0;

    temp_r0 = func_02053a7c(M2C_FIELD(&data_020cc620, u8 *, 0xB41));
    if (temp_r0 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r0, u16 *, 0x28);
}
