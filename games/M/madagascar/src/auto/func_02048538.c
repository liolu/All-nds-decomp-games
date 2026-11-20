/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205daec(M2C_UNK *);                   /* extern */
M2C_UNK func_0205dc40(s32);                         /* extern */
M2C_UNK func_0205dd1c(M2C_UNK, s32);                /* extern */
extern s32 data_020d8934;
extern s32 data_020d8940;
extern M2C_UNK data_020d8944;

void func_02048538(M2C_UNK arg0) {
    if (data_020d8940 == 0) {
        func_0205dd1c(arg0, data_020d8934);
        data_020d8940 = 1;
    } else {
        func_0205dc40(data_020d8934);
    }
    func_0205daec(&data_020d8944);
}
