#include "m2c.h"

M2C_UNK func_020d1fa0();                            /* extern */
M2C_UNK func_020d2108();                            /* extern */
extern M2C_UNK data_021d4640;

void func_020a3978(void) {
    if (M2C_FIELD(&data_021d4640, s32 *, 0x24) == 0) {
        func_020d1fa0();
        return;
    }
    func_020d2108();
}
