#include "m2c.h"

M2C_UNK func_0208db18(M2C_UNK);                     /* extern */
M2C_UNK func_0208dff4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0208e144(M2C_UNK);                     /* extern */
M2C_UNK func_0208e2dc(M2C_UNK);                     /* extern */
u32 func_020b132c();                                /* extern */

void func_0208c7d4(M2C_UNK arg0) {
    u32 temp_r0;

    temp_r0 = func_020b132c();
    switch (temp_r0) {
        default:
            break;
        case 1:
            func_0208dff4(arg0, 0);
            break;
        case 4:
        case 5:
            func_0208e144(arg0);
            break;
        case 7:
            func_0208e2dc(arg0);
            break;
    }
    func_0208db18(arg0);
}
