/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */
M2C_UNK func_02052418(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020da978;

void func_0205d384(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02063cf8();
    func_02052418(&data_020da978, arg0);
    func_02063d0c(temp_r4);
}
