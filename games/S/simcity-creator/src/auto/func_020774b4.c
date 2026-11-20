#include "m2c.h"

M2C_UNK func_02077500(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02077538(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207b5fc(s32);                         /* extern */
M2C_UNK func_0207dfa0();                            /* extern */
extern M2C_UNK data_020ce4aa;
extern M2C_UNK data_020ce4b4;

void *func_020774b4(void *arg0, M2C_UNK arg1) {
    func_0207dfa0();
    func_0207b5fc(arg0 + 0x14);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_020ce4b4;
    func_02077500(arg0 + 0x1C, &data_020ce4aa);
    func_02077538(arg0, arg1);
    return arg0;
}
