#include "m2c.h"

s32 func_0205c294(u8);                              /* extern */
M2C_UNK func_020a2fe4();                            /* extern */
M2C_UNK func_020a3034(s32);                         /* extern */
M2C_UNK func_020a3b54(M2C_UNK);                     /* extern */
extern M2C_UNK data_02152824;
extern M2C_UNK data_02152a24;

void func_020a3954(void) {
    func_020a3b54(0);
    if (func_0205c294((u8) M2C_FIELD(&data_02152a24, u16 *, 0)) >= (s32) M2C_FIELD(&data_02152a24, u16 *, 2)) {
        func_020a3034(M2C_FIELD(&data_02152824, s32 *, 0x204));
        return;
    }
    func_020a2fe4();
}
