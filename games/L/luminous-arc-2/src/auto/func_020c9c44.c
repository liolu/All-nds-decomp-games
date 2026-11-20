#include "m2c.h"

M2C_UNK func_01ff85c4();                            /* extern */
M2C_UNK func_020c99f4(s16, s16);                    /* extern */
M2C_UNK func_020c9ab0();                            /* extern */
extern M2C_UNK data_02151468;

void func_020c9c44(void) {
    func_020c99f4(M2C_FIELD(&data_02151468, s16 *, 0), M2C_FIELD(&data_02151468, s16 *, 2));
    func_01ff85c4();
    func_020c9ab0();
}
