/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f758();                            /* extern */
extern void **data_0215d690;
extern void **data_0215d694;

void func_0201a830(void *arg0) {
    func_0201f758();
    if (M2C_FIELD(arg0, u8 *, 0x48) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        M2C_FIELD(*data_0215d694, M2C_UNK(**)(), 0x10)(data_0215d694);
        return;
    }
    M2C_FIELD(*data_0215d690, M2C_UNK(**)(), 0x10)(data_0215d690);
}
