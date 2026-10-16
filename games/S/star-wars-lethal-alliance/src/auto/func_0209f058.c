#include "m2c.h"

M2C_UNK func_0209848c(M2C_UNK **);                  /* extern */
M2C_UNK func_0209792c();                            /* extern */
extern M2C_UNK data_020e3278;

M2C_UNK **func_0209f058(M2C_UNK **arg0) {
    *arg0 = &data_020e3278;
    func_0209792c();
    func_0209848c(arg0);
    return arg0;
}
