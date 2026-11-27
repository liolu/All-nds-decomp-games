#include "m2c.h"

M2C_UNK func_02009530(M2C_UNK);                     /* extern */
M2C_UNK func_02018568();                            /* extern */
M2C_UNK func_020334e4();                            /* extern */
M2C_UNK func_020728b0(M2C_UNK);                     /* extern */
extern void *data_020d1d24;

void func_02033ae8(void) {
    u8 temp_r0;

    func_020334e4();
    temp_r0 = M2C_FIELD(data_020d1d24, u8 *, 1);
    switch (temp_r0) {
        default:
            break;
        case 0:
        case 1:
            func_020728b0(6);
            break;
        case 2:
            if (*M2C_FIELD(data_020d1d24, u8 **, 0x3CE8) == 0xD) {
                func_020728b0(3);
            } else {
                func_020728b0(2);
            }
            break;
        case 3:
            func_020728b0(7);
            break;
        case 4:
        case 5:
            func_020728b0(4);
            break;
    }
    func_02018568();
    func_02009530(-1);
}
