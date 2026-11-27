/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088e4c(u16);                         /* extern */
extern u8 data_020a0120;
extern M2C_UNK data_020d6814;

void func_0204eeb4(void) {
    data_020a0120 += 1;
    func_02088e4c((u16) M2C_FIELD(&data_020d6814, s32 *, 4));
}
