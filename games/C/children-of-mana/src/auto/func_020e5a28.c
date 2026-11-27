/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205a174(s32, void *, M2C_UNK);        /* extern */
s16 func_0206124c();                                /* extern */
extern u16 data_0212e934;
extern s32 data_0212e93c;
extern void *data_0212e958;

void func_020e5a28(void) {
    func_0205a174(data_0212e93c, data_0212e958, 0x40);
    M2C_FIELD(data_0212e958, s16 *, 0x18) = func_0206124c();
    data_0212e934 += 1;
    M2C_FIELD(data_0212e958, u16 *, 0xC) = (u16) data_0212e934;
}
