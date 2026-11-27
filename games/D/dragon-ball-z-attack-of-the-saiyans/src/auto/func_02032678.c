#include "m2c.h"

M2C_UNK func_02008b78(M2C_UNK);                     /* extern */
M2C_UNK func_020094e4(M2C_UNK);                     /* extern */
M2C_UNK func_02009530(M2C_UNK);                     /* extern */
M2C_UNK func_02018344(M2C_UNK);                     /* extern */
M2C_UNK func_02018568();                            /* extern */
M2C_UNK func_0202edd4();                            /* extern */
extern M2C_UNK data_020af054;

void func_02032678(void) {
    func_02008b78(0);
    func_020094e4(0);
    func_02009530(-1);
    func_02018344(0);
    func_02018568();
    func_0202edd4();
    M2C_FIELD(&data_020af054, s16 *, 0xE) = 0;
}
