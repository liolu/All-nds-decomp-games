/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02039cd0();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ffde8;

M2C_UNK **func_02000e54(M2C_UNK **arg0) {
    *arg0 = &data_020ffde8;
    func_02039cd0();
    func_02059f70(arg0);
    return arg0;
}
