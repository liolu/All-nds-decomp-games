/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020aa2e0(s8);                              /* extern */
M2C_UNK func_020aac90();                            /* extern */
extern s8 data_021266a4;
extern s8 data_021266b0;

void func_02087e00(s8 arg0) {
    s8 temp_r1;

    func_020aac90();
    temp_r1       = data_021266a4;
    data_021266a4 = arg0;
    if (temp_r1 == arg0) {
        return;
    }
    if (func_020aa2e0(arg0) != 0) {
        data_021266b0 = 1;
    }
}
