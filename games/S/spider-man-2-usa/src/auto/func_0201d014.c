/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201c828();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021139b8;

M2C_UNK **func_0201d014(M2C_UNK **arg0) {
    *arg0 = &data_021139b8;
    func_0201c828();
    func_02059f70(arg0);
    return arg0;
}
