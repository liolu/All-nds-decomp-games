/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020241c4();                                /* extern */
M2C_UNK func_020244b4(s32, s32);                    /* extern */
s32 func_02024654();                                /* extern */
extern s32 data_0208798c;
extern s32 data_020cf83c;

void func_020069d4(void *arg0) {
    s32 temp_r5;

    M2C_FIELD(arg0, s32 *, 4) = 0xF;
    temp_r5                   = data_0208798c;
    func_02024654();
    if (data_0208798c == func_020241c4()) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (data_020cf83c + 0x12C);
    func_020244b4(func_02024654(), temp_r5);
}
