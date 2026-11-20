/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202c9ac(M2C_UNK *);                   /* extern */
M2C_UNK func_0202ca10();                            /* extern */
M2C_UNK func_0202e428(M2C_UNK *);                   /* extern */
extern u8 data_020bcfa8;
extern s32 data_020d0054;
extern M2C_UNK func_020045cc;
extern M2C_UNK func_020046e8;

void func_02004848(void) {
    if (data_020bcfa8 != 0) {
        return;
    }
    if (data_020d0054 != 0) {
        func_0202e428(&func_020046e8);
        func_0202ca10();
        func_0202c9ac(&func_020045cc);
    }
    data_020bcfa8 = 1;
}
