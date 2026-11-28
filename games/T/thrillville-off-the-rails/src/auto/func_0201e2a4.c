/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202b7b8(M2C_UNK *);                       /* extern */
s32 func_0202d208(M2C_UNK *, u16, u16, u16, s32);   /* extern */
M2C_UNK func_0201c49c(M2C_UNK, s32);                /* extern */
extern u16 data_020dff74;
extern u16 data_020dff78;
extern u16 data_020dff7c;
extern u16 data_020dff80;
extern M2C_UNK func_0201da2c;

void func_0201e2a4(void) {
    func_0201c49c(0x80, func_0202b7b8(&func_0201da2c));
    func_0201c49c(0x1D, func_0202d208(&func_0201da2c, data_020dff80, data_020dff78, data_020dff74, (s32) data_020dff7c));
}
