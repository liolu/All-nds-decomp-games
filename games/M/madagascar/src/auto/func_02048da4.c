/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048c3c(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0205a078();                            /* extern */
extern M2C_UNK data_020d894c;
extern s32 data_020d8950;

void func_02048da4(void) {
    s32 temp_r1;

    if ((s32) data_020d8950 > 0) {
        temp_r1       = data_020d8950 - 1;
        data_020d8950 = temp_r1;
        if (temp_r1 == 0) {
            func_02048c3c(&data_020d894c, 1);
        }
    }
    func_0205a078();
}
