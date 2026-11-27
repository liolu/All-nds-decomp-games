#include "m2c.h"

M2C_UNK func_02008b78(M2C_UNK);                     /* extern */
M2C_UNK func_020094e4(M2C_UNK);                     /* extern */
M2C_UNK func_02009530(M2C_UNK);                     /* extern */
M2C_UNK func_02018568();                            /* extern */
M2C_UNK func_020728b0(M2C_UNK);                     /* extern */
extern void *data_020d1d24;

void func_020316cc(void) {
    func_02008b78(0);
    func_020094e4(0);
    if (M2C_FIELD(data_020d1d24, u8 *, 1) == 0) {
        M2C_FIELD(data_020d1d24, s8 *, 0) = 0;
        M2C_FIELD(data_020d1d24, u8 *, 1) = 0U;
    }
    func_020728b0(0);
    func_02018568();
    func_02009530(-1);
}
