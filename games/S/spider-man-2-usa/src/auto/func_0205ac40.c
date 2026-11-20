/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205aacc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0205c14c();                            /* extern */
extern M2C_UNK data_02161684;
extern s32 data_02161688;

void func_0205ac40(void) {
    s32 temp_r1;

    if ((s32) data_02161688 > 0) {
        temp_r1       = data_02161688 - 1;
        data_02161688 = temp_r1;
        if (temp_r1 == 0) {
            func_0205aacc(&data_02161684, 1);
        }
    }
    func_0205c14c();
}
