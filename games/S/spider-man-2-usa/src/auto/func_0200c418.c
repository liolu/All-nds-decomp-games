/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200bb30();                                /* extern */
M2C_UNK func_0200c218(s32);                         /* extern */
M2C_UNK func_02038b48(M2C_UNK *);                   /* extern */
extern s32 data_02157e2c;
extern M2C_UNK func_0200c4ac;

s32 func_0200c418(s32 arg0) {
    s32 temp_r1;

    if (func_0200bb30() != 0) {
        func_0200c218(arg0);
    }
    temp_r1       = data_02157e2c - 1;
    data_02157e2c = temp_r1;
    if (temp_r1 == 0) {
        func_02038b48(&func_0200c4ac);
    }
    return arg0;
}
