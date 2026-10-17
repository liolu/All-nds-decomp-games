/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202c930(M2C_UNK *);                   /* extern */
M2C_UNK func_0202c9d8();                            /* extern */
M2C_UNK func_0202c9dc();                            /* extern */
M2C_UNK func_0202e3a0(M2C_UNK *);                   /* extern */
extern u8 data_020bcfa8;
extern s32 data_020d0054;
extern M2C_UNK func_020045cc;
extern M2C_UNK func_020046e8;

void func_020048b4(void) {
    if (data_020bcfa8 == 0) {
        return;
    }
    if (data_020d0054 != 0) {
        func_0202e3a0(&func_020046e8);
        func_0202c930(&func_020045cc);
        func_0202c9d8();
        func_0202c9dc();
    }
    data_020bcfa8 = 0;
}
