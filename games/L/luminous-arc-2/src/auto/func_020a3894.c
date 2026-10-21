#include "m2c.h"

M2C_UNK func_0205c364(u8, u8);                      /* extern */
M2C_UNK func_020a2fe4();                            /* extern */
M2C_UNK func_020a3b54(M2C_UNK);                     /* extern */
extern M2C_UNK data_02152a24;

void func_020a3894(void) {
    func_020a3b54(0);
    func_0205c364((u8) M2C_FIELD(&data_02152a24, u16 *, 0), (u8) M2C_FIELD(&data_02152a24, u16 *, 2));
    func_020a2fe4();
}
