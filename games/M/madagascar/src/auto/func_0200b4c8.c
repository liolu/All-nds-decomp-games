/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201882c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d14cc;
extern M2C_UNK data_020d18d8;

void func_0200b4c8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        func_0201882c(&data_020d18d8);
        return;
    }
    func_0201882c(&data_020d14cc);
}
