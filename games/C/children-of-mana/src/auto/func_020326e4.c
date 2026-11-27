/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
M2C_UNK func_0208ff44();                            /* extern */
M2C_UNK func_0209009c(void *);                      /* extern */

void func_020326e4(void **arg0) {
    void *temp_r4;

    if (*arg0 == NULL) {
        return;
    }
    func_0208ff44();
    temp_r4 = *arg0;
    if (M2C_FIELD(temp_r4, s32 *, 0x14) != 0) {
        return;
    }
    if (temp_r4 == NULL) {
        return;
    }
    if (temp_r4 != NULL) {
        func_0209009c(temp_r4);
        func_0200f2c4(temp_r4);
    }
    *arg0 = NULL;
}
