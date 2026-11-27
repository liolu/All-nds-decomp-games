/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
M2C_UNK func_0208cf10();                            /* extern */
extern M2C_UNK data_021018fc;
extern s8 data_021266ac;
extern s32 data_021266c8;

void func_02086d54(void *arg0) {
    func_0200e8c8(&data_021018fc);
    if (data_021266c8 == 0) {
        return;
    }
    func_0208cf10();
    data_021266ac                 = 0;
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0xD;
}
