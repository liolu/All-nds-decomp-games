/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
s32 func_02010468();                                /* extern */
M2C_UNK func_02010620(M2C_UNK);                     /* extern */
M2C_UNK func_020242d4(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02024654();                                /* extern */
extern M2C_UNK data_02087b34;
extern M2C_UNK data_020be42c;

void func_02017ce8(M2C_UNK arg0) {
    if (func_02010468() > 0) {
        func_02010620(arg0);
        func_02002720(&data_020be42c);
        return;
    }
    func_020242d4(func_02024654(), &data_02087b34, 0);
}
