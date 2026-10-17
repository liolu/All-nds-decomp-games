/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006650(void *);                      /* extern */
s32 func_020241c4();                                /* extern */
M2C_UNK func_020244b4(s32, s32);                    /* extern */
s32 func_02024654();                                /* extern */
void *func_0203868c();                              /* extern */
s32 func_020386e4();                                /* extern */
M2C_UNK func_02038c6c();                            /* extern */
extern s32 data_02087990;
extern s32 data_020cf83c;

void func_02006a40(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;

    func_02038c6c();
    temp_r5 = func_020386e4();
    func_02038c6c();
    if (temp_r5 == (M2C_FIELD(func_0203868c(), s32 *, 8) - 1)) {
        M2C_FIELD(arg0, s32 *, 4) = 0xE;
        if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
            return;
        }
        temp_r5_2 = data_02087990;
        func_02024654();
        if (data_02087990 == func_020241c4()) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (data_020cf83c + 0x12C);
        func_020244b4(func_02024654(), temp_r5_2);
        return;
    }
    func_02006650(arg0);
}
