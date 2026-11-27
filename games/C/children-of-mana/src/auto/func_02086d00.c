/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
M2C_UNK func_0208c6c8(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_021018f0;
extern s32 data_021266c8;

void func_02086d00(void *arg0) {
    func_0200e8c8(&data_021018f0);
    if (M2C_FIELD(arg0, u8 *, 0x304) != 0) {
        return;
    }
    if (data_021266c8 == 0) {
        return;
    }
    func_0208c6c8(data_021266c8, 1);
    M2C_FIELD(arg0, s32 *, 0x2B4) = 3;
}
