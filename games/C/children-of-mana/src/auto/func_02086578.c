/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020d29b0();                            /* extern */
extern M2C_UNK data_021005a4;
extern M2C_UNK data_021017bc;
extern s32 data_021266b8;

void func_02086578(void *arg0) {
    func_0200e8c8(&data_021017bc, &data_021005a4);
    if (data_021266b8 == 0) {
        return;
    }
    func_020d29b0();
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0xA;
}
