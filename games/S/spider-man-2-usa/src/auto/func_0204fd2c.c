/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205458c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02054c68(M2C_UNK);                     /* extern */
M2C_UNK func_02057ea8(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_021606d4;

void func_0204fd2c(M2C_UNK arg0, s32 arg1) {
    data_021606d4 = arg1;
    func_02054c68(1);
    func_0205458c(2, 0, 0);
    func_02057ea8(data_021606d4, 0x06800000, arg0, 0x18000);
}
