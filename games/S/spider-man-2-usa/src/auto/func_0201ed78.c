/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ee18(void *, M2C_UNK);             /* extern */

void func_0201ed78(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        return;
    }
    do {
        temp_r0 = *M2C_FIELD(arg0, void ****, 4);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        func_0201ee18(arg0, 0);
    } while (M2C_FIELD(arg0, s32 *, 0xC) != 0);
}
