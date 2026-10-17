/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202e384(M2C_UNK);                         /* extern */
s32 func_020759d4(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_0207b000(M2C_UNK);                     /* extern */
s32 func_0207b00c(s32);                             /* extern */
extern M2C_UNK data_020bfa78;
extern M2C_UNK data_020bfbc8;
extern M2C_UNK data_020bfbd0;

void func_020269d4(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x34) = func_0202e384(arg1);
    func_0207b000(arg1);
    temp_r4 = *((M2C_UNK *) ((s8 *) &data_020bfa78 + (M2C_FIELD(arg0, s32 *, 0x2C) * 8)));
    if ((func_020759d4(temp_r4, &data_020bfbd0, 5) != 0) && (func_020759d4(temp_r4, &data_020bfbc8, 5) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_0207b00c(M2C_FIELD(arg0, s32 *, 0x34));
    }
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
}
