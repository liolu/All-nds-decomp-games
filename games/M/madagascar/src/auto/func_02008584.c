/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744(M2C_UNK **);                  /* extern */
M2C_UNK func_02007a74();                            /* extern */
M2C_UNK func_02007ab0(M2C_UNK **);                  /* extern */
M2C_UNK func_02038afc();                            /* extern */
M2C_UNK func_02038c6c();                            /* extern */
M2C_UNK func_0207b040(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd1e4;
extern s32 data_020d00a4;

M2C_UNK **func_02008584(M2C_UNK **arg0) {
    *arg0 = &data_020bd1e4;
    func_02007a74();
    func_02007ab0(arg0);
    func_02038c6c();
    func_02038afc();
    func_02002744(arg0);
    data_020d00a4 = 0;
    *arg0         = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
