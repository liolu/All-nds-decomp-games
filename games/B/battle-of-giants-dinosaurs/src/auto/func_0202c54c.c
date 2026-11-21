#include "m2c.h"

M2C_UNK func_0202c598(M2C_UNK);                     /* extern */
M2C_UNK func_0203b87c();                            /* extern */
extern M2C_UNK data_020c201c;

void func_0202c54c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020c201c, s32 *, 0xC) == 0) {
        func_0203b87c();
        if (M2C_FIELD(&data_020c201c, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_020c201c, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_020c201c, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_0202c598(arg0);
}
