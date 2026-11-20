/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020013b4();                                /* extern */
M2C_UNK func_02001af8(s32);                         /* extern */
M2C_UNK func_0202e3a0(M2C_UNK *);                   /* extern */
extern s32 data_020cf5cc;
extern M2C_UNK func_02001d04;

s32 func_02001c70(s32 arg0) {
    s32 temp_r1;

    if (func_020013b4() != 0) {
        func_02001af8(arg0);
    }
    temp_r1       = data_020cf5cc - 1;
    data_020cf5cc = temp_r1;
    if (temp_r1 == 0) {
        func_0202e3a0(&func_02001d04);
    }
    return arg0;
}
