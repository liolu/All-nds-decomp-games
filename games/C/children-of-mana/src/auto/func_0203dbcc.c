/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK func_020280f8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202834c();                            /* extern */
M2C_UNK func_02028cb0();                            /* extern */
M2C_UNK func_02029330();                            /* extern */
M2C_UNK func_0203d304();                            /* extern */
M2C_UNK func_0203dae4();                            /* extern */
M2C_UNK func_0203e974();                            /* extern */
M2C_UNK func_0203f618();                            /* extern */
M2C_UNK func_02040d6c();                            /* extern */
M2C_UNK func_02056544();                            /* extern */
M2C_UNK func_02077f1c();                            /* extern */
M2C_UNK func_020c2ba8();                            /* extern */
M2C_UNK func_020ca964();                            /* extern */

void func_0203dbcc(void) {
    func_0203dae4();
    func_0203d304();
    func_02028cb0();
    func_02040d6c();
    func_0203f618();
    func_0203e974();
    func_02077f1c();
    func_0202834c();
    func_02029330();
    func_020c2ba8();
    func_020ca964();
    func_020280f8(2, 0, 0x40000);
    func_020280f8(2, 1, 0x18000);
    func_020280f8(2, 2, 0x2000);
    VBlankIntrWait();
    func_02056544();
    *(s32 *) 0x04001000 |= 0x10000;
}
