#include "m2c.h"

M2C_UNK func_02074314(M2C_UNK **);                  /* extern */
M2C_UNK func_02093a94(s32, M2C_UNK **);             /* extern */
extern M2C_UNK data_020e60e4;
extern s32 data_020fc268;

M2C_UNK **func_020bbbb4(M2C_UNK **arg0) {
    *arg0 = &data_020e60e4;
    func_02093a94(data_020fc268, arg0);
    func_02074314(arg0);
    return arg0;
}
