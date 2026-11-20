/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a78c();                            /* extern */
void *func_0202be38();                              /* extern */
M2C_UNK func_0202cd90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_020d00a8;

void func_0201339c(void *arg0) {
    func_0202be38();
    func_0202a78c();
    if (M2C_FIELD(func_0202be38(), s32 *, 8) != 0xA) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8)             = 6;
    M2C_FIELD(&data_020d00a8, s8 *, 0x38) = 1;
    func_0202cd90(2, 1, 1);
}
