#include "m2c.h"

M2C_UNK func_02001478(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02001fdc(M2C_UNK);                     /* extern */
M2C_UNK func_02002084(M2C_UNK);                     /* extern */
M2C_UNK func_020022d4();                            /* extern */
M2C_UNK func_020022e8();                            /* extern */
M2C_UNK func_02006e64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020a5e00(void) {
    func_020022e8();
    func_020022d4();
    func_02006e64(0, 0x06800000, 0xA4000);
    func_02001fdc(4);
    func_02002084(0x100);
    func_02001478(1, 3, 1);
}
