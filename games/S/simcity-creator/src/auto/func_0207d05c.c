#include "m2c.h"

M2C_UNK func_02077500(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0207b5fc(void *);                      /* extern */
M2C_UNK func_0207d140(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207dfa0();                            /* extern */
extern M2C_UNK data_020ce4b4;
extern M2C_UNK data_020ce562;

void *func_0207d05c(void *arg0, M2C_UNK arg1) {
    func_0207dfa0();
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020ce4b4;
    func_02077500(((s8 *) arg0 + 8), &data_020ce562);
    func_0207b5fc(((s8 *) arg0 + 0x80C));
    M2C_FIELD(arg0, M2C_UNK **, 0x820) = &data_020ce4b4;
    func_02077500(((s8 *) arg0 + 0x820), &data_020ce562);
    func_0207b5fc(((s8 *) arg0 + 0x1024));
    func_0207b5fc(((s8 *) arg0 + 0x1058));
    M2C_FIELD(arg0, M2C_UNK **, 0x106C) = &data_020ce4b4;
    func_02077500(((s8 *) arg0 + 0x106C), &data_020ce562);
    func_0207b5fc(((s8 *) arg0 + 0x1870));
    func_0207d140(arg0, arg1);
    return arg0;
}
