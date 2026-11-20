/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff93d4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020253e8();                            /* extern */
M2C_UNK func_0202aa30(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0207a4b0;

void func_02024ee4(void *arg0) {
    func_020253e8();
    func_0202aa30(arg0, 0xF, 0);
    func_01ff93d4(arg0, &data_0207a4b0);
    M2C_FIELD(arg0, s32 *, 0x28C) = 0;
}
