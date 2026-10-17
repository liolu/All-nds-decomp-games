/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002378(M2C_UNK);                     /* extern */
M2C_UNK func_020023e4();                            /* extern */
M2C_UNK func_02037194();                            /* extern */
extern void **data_020d024c;

void func_020088b4(M2C_UNK arg0) {
    func_020023e4();
    func_02037194();
    M2C_FIELD(*data_020d024c, M2C_UNK(**)(), 0xC)(data_020d024c);
    func_02002378(arg0);
}
