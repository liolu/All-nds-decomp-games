#include "m2c.h"

s32 func_0205c294(u8);                              /* extern */
M2C_UNK func_0205c364(u8, u8);                      /* extern */
M2C_UNK func_020a2fe4();                            /* extern */
M2C_UNK func_020a3b54(M2C_UNK);                     /* extern */
extern M2C_UNK data_02152a24;

void func_020a390c(void) {
    func_020a3b54(0);
    func_0205c364((u8) M2C_FIELD(&data_02152a24, volatile u16 *, 0),
                  (u8) (func_0205c294((u8) M2C_FIELD(&data_02152a24, volatile u16 *, 0)) -
                        M2C_FIELD(&data_02152a24, volatile u16 *, 2)));
    func_020a2fe4();
}
