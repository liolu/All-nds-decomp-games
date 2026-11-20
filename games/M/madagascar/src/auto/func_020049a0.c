/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202c930(M2C_UNK *);                   /* extern */
M2C_UNK func_0202e3a0(M2C_UNK *);                   /* extern */
M2C_UNK func_0202e45c();                            /* extern */
M2C_UNK func_0207b000(s32);                         /* extern */
extern M2C_UNK data_020bcd20;
extern u8 data_020bcfa8;
extern M2C_UNK data_020bcfd8;
extern s32 data_020d0054;
extern M2C_UNK func_020045cc;
extern M2C_UNK func_020046e8;

void *func_020049a0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcfd8;
    if (data_020bcfa8 != 0) {
        func_0202e3a0(&func_020046e8);
        func_0202c930(&func_020045cc);
        func_0202e45c();
    }
    data_020d0054 = 0;
    func_0207b000(M2C_FIELD(arg0, s32 *, 0x194));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
