/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744(M2C_UNK **);                  /* extern */
M2C_UNK func_02007a74();                            /* extern */
M2C_UNK func_02007ab0(M2C_UNK **);                  /* extern */
M2C_UNK func_02038afc();                            /* extern */
M2C_UNK func_02038c6c();                            /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd1e4;
extern s32 data_020d00a4;

M2C_UNK **func_020085e4(M2C_UNK **arg0) {
    *arg0 = &data_020bd1e4;
    func_02007a74();
    func_02007ab0(arg0);
    func_02038c6c();
    func_02038afc();
    func_02002744(arg0);
    data_020d00a4 = 0;
    *arg0         = &data_020bcd20;
    return arg0;
}
