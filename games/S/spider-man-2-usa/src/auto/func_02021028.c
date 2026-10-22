/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035e98();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021158c4;

M2C_UNK **func_02021028(M2C_UNK **arg0) {
    *arg0 = &data_021158c4;
    func_02035e98();
    func_02059f70(arg0);
    return arg0;
}
