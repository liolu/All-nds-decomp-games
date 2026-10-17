/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202fdfc(M2C_UNK);                     /* extern */
s32 func_0203038c();                                /* extern */
M2C_UNK func_02030808(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020326ac(M2C_UNK);                         /* extern */
s32 func_020326d4(M2C_UNK);                         /* extern */
extern s32 data_0208ab40;

void func_0202f658(M2C_UNK arg0) {
    if ((func_0203038c() > (s32) data_0208ab40) || (func_020326d4(arg0) != 0) || (func_020326ac(arg0) != 0)) {
        func_0202fdfc(arg0);
        return;
    }
    func_02030808(arg0, 0);
}
