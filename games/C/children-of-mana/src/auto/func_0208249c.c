/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();    /* extern */
s8 func_020121b4();                  /* extern */
void *func_020aac90();                              /* extern */
s32 func_020ae36c();                             /* extern */
extern M2C_UNK data_0210087c;
extern M2C_UNK data_02100e18;
extern M2C_UNK data_02100e28;

void func_0208249c(void *arg0) {
    s8 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100e18, &data_0210087c, temp_r0);
    if (func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300)) != 0) {
        func_0200e8c8(&data_02100e28);
        return;
    }
    M2C_FIELD(func_020aac90(), s8 *, 0x2D) = temp_r0;
}
