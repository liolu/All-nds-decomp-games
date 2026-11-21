#include "m2c.h"

M2C_UNK func_0203b81c(void *);                      /* extern */
M2C_UNK func_0205b1dc(void *);                      /* extern */
M2C_UNK func_02099dcc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02099e08(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_020bf2fc;

void *func_02099d74(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf2fc;
    func_02099e08(M2C_FIELD(arg0, s32 *, 4), 0, 0);
    func_02099dcc(*M2C_FIELD(arg0, s32 **, 0x24), 0, 0);
    func_0205b1dc(arg0 + 0x18);
    func_0205b1dc(arg0 + 0xC);
    func_0203b81c(arg0);
    return arg0;
}
