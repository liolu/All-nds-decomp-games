/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063160(M2C_UNK, s32);                /* extern */
M2C_UNK func_02063174(M2C_UNK, s32);                /* extern */
s32 func_02063188(M2C_UNK);                         /* extern */
s32 func_020631fc(M2C_UNK);                         /* extern */
extern s32 data_020db9f8;

void func_02063318(void) {
    if (data_020db9f8 != 0) {
        return;
    }
    data_020db9f8 = 1;
    func_02063174(0, func_020631fc(0));
    func_02063160(0, func_02063188(0));
    func_02063160(2, 0);
    func_02063174(2, 0);
    func_02063174(3, func_020631fc(3));
    func_02063160(3, func_02063188(3));
    func_02063174(4, func_020631fc(4));
    func_02063160(4, func_02063188(4));
    func_02063174(5, func_020631fc(5));
    func_02063160(5, func_02063188(5));
    func_02063174(6, func_020631fc(6));
    func_02063160(6, func_02063188(6));
}
