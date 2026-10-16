/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020187e4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d14cc;
extern M2C_UNK data_020d18d8;

void func_0200b484(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        func_020187e4(&data_020d18d8);
        return;
    }
    func_020187e4(&data_020d14cc);
}
