/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_020aac84();                               /* extern */
M2C_UNK func_020af38c();                            /* extern */
M2C_UNK func_020af518(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020c87d4(s32, M2C_UNK);                /* extern */
s32 func_020c87ec();                                /* extern */

void func_020b3410(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xB0)  = 0;
    M2C_FIELD(arg0, s8 *, 0x114) = 0;
    M2C_FIELD(arg0, s8 *, 0x164) = 0;
    M2C_FIELD(arg0, s8 *, 0x19C) = 1;
    M2C_FIELD(arg0, s8 *, 0x19D) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = -1;
    func_020af38c(arg0);
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    *func_020aac84()              = 0;
    func_020c87d4(func_020c87ec(), 0);
    func_020af518(arg0, 6, 9, 5);
}
