#include "m2c.h"

M2C_UNK func_02006964();                            /* extern */
M2C_UNK func_02043350(M2C_UNK);                     /* extern */
u16 func_020446e8(u16);                             /* extern */
extern M2C_UNK data_020cb134;
extern M2C_UNK data_020dafa0;

u16 func_02044688(void) {
    if (M2C_FIELD(&data_020dafa0, s32 *, 0x38) != 7) {
        func_02006964();
    }
    func_02043350(1);
    M2C_FIELD(&data_020dafa0, u16 *, 6) = func_020446e8(M2C_FIELD(&data_020dafa0, u16 *, 8));
    if (M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *, u16), 0x24) != NULL) {
        M2C_FIELD(&data_020dafa0, M2C_UNK(**)(M2C_UNK *, u16), 0x24)(&data_020cb134, M2C_FIELD(&data_020dafa0, u16 *, 6));
    }
    return M2C_FIELD(&data_020dafa0, u16 *, 6);
}
