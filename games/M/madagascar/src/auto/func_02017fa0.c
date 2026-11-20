/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020023a0();                            /* extern */
M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0207fabc;

void func_02017fa0(void **arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) == 0x1A) {
        temp_r1 = M2C_FIELD(arg1, s32 *, 4);
        switch (temp_r1) {                          /* irregular */
            case 0:
                M2C_FIELD(*arg0, M2C_UNK(**)(), 0x20)(arg0);
                return;
            case 1:
                M2C_FIELD(*arg0, M2C_UNK(**)(), 0x24)(arg0);
                return;
            case 2:
                func_02002720(&data_0207fabc);
                return;
        }
    } else {
        func_020023a0(arg0);
    }
}
