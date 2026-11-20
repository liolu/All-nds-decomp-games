/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d2d0();                            /* extern */
M2C_UNK func_0200d458(M2C_UNK, s32);                /* extern */
M2C_UNK func_0200d4b0(M2C_UNK, s32);                /* extern */
M2C_UNK func_0201f714(M2C_UNK, void *);             /* extern */

void func_0200d31c(M2C_UNK arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) == 0x12) {
        temp_r1 = M2C_FIELD(arg1, s32 *, 4);
        switch (temp_r1) {                          /* irregular */
            case 0:
                func_0200d4b0(arg0, M2C_FIELD(arg1, s32 *, 8));
                break;
            case 2:
                func_0200d458(arg0, M2C_FIELD(arg1, s32 *, 8));
                break;
            case 1:
                func_0200d2d0();
                break;
        }
    }
    func_0201f714(arg0, arg1);
}
