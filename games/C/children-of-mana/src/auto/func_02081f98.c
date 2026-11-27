/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();        /* extern */
M2C_UNK func_020aa074();                            /* extern */
s32 func_020ae36c();                             /* extern */
extern M2C_UNK data_021007dc;
extern M2C_UNK data_02100d40;
extern M2C_UNK data_02100d4c;

void func_02081f98(void *arg0) {
    func_0200e8c8(&data_02100d40, &data_021007dc);
    if (func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300)) != 0) {
        func_0200e8c8(&data_02100d4c);
        return;
    }
    func_020aa074();
}
