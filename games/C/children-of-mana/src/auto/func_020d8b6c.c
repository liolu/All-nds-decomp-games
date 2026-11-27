/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6b40(M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020c6e14(M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_020c6e84(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_020e95b4(M2C_UNK);                         /* extern */
extern M2C_UNK data_0210ca2c;
extern M2C_UNK data_0210ca3c;
extern M2C_UNK data_0210ca4c;
extern M2C_UNK data_0210ca5c;
extern M2C_UNK data_0210ca6c;
extern M2C_UNK data_0210ca7c;

void func_020d8b6c(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020e95b4(0xA);
    func_020c6e84(arg0, &data_0210ca2c, &data_0210ca3c, &data_0210ca4c, temp_r0);
    func_020c6e14(arg0, &data_0210ca5c, &data_0210ca6c, temp_r0);
    func_020c6b40(arg0, 1, &data_0210ca7c, temp_r0);
}
