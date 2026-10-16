/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002584(M2C_UNK **);                  /* extern */
M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bdd28;

M2C_UNK **func_020121c4(M2C_UNK **arg0) {
    *arg0 = &data_020bdd28;
    func_02002744();
    func_02002584(arg0);
    func_0207b040(arg0);
    return arg0;
}
