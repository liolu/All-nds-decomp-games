/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002bc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02002bf4(void *, M2C_UNK, u8);         /* extern */
M2C_UNK func_02003d10(void *);                      /* extern */

void func_020032a0(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    func_02002bf4(arg0, 5, M2C_FIELD(arg0, u8 *, 0x362));
    func_02002bc8(arg0, 5, 0);
    func_02003d10(arg0);
}
