#include "m2c.h"

M2C_UNK func_0205884c();                            /* extern */
M2C_UNK func_02058930(M2C_UNK);                     /* extern */
M2C_UNK func_020596e8();                            /* extern */
M2C_UNK func_02059c68();                            /* extern */
extern M2C_UNK data_02158048;

void func_02056758(void) {
    func_020596e8();
    func_02059c68();
    func_0205884c();
    func_02058930(0x17);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
