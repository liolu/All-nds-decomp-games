#include "m2c.h"

M2C_UNK func_02090ba0();                            /* extern */
M2C_UNK func_02091058();                            /* extern */
M2C_UNK func_020ba764(M2C_UNK);                     /* extern */
s32 func_020baf04(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_020e72f4;
extern M2C_UNK data_020e737c;

void func_02090b58(void) {
    func_020ba764(3);
    func_020baf04(&data_020e737c, func_020baf04(NULL, 0));
    M2C_FIELD(&data_020e72f4, s8 *, 0x85) = 0;
    M2C_FIELD(&data_020e72f4, s8 *, 0x84) = 0;
    func_02090ba0();
    func_02091058();
}
