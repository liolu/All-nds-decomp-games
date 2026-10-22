/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018a48();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ffedc;

M2C_UNK **func_02001688(M2C_UNK **arg0) {
    *arg0 = &data_020ffedc;
    func_02018a48();
    func_02059f70(arg0);
    return arg0;
}
