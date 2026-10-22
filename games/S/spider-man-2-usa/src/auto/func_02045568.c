/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02036774();                            /* extern */
M2C_UNK func_02059f70(M2C_UNK **);                  /* extern */
extern M2C_UNK data_021248ac;

M2C_UNK **func_02045568(M2C_UNK **arg0) {
    *arg0 = &data_021248ac;
    func_02036774();
    func_02059f70(arg0);
    return arg0;
}
