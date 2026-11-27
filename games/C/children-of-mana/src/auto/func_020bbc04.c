/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207a9dc(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207ab04(s32);                         /* extern */
M2C_UNK func_0207abf4(s32);                         /* extern */
M2C_UNK func_0207ae1c(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0207ae5c(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207ae9c(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02108b94;
extern M2C_UNK data_02108ba0;
extern M2C_UNK data_02108bac;

s32 func_020bbc04(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        return 1;
    }
    func_0207ae9c(M2C_FIELD(arg0, s32 *, 0xF8), &data_02108b94, 0, 0);
    func_0207ae5c(M2C_FIELD(arg0, s32 *, 0xF8), &data_02108ba0, 0, 0);
    func_0207ae1c(M2C_FIELD(arg0, s32 *, 0xF8), &data_02108bac, 0);
    func_0207abf4(M2C_FIELD(arg0, s32 *, 0xF8));
    func_0207ab04(M2C_FIELD(arg0, s32 *, 0xF8));
    func_0207a9dc(M2C_FIELD(arg0, s32 *, 0xF8), 2);
    M2C_FIELD(arg0, s32 *, 0x140) = 0x1E000;
    M2C_FIELD(arg0, s32 *, 0x144) = 0x1000;
    M2C_FIELD(arg0, u8 *, 0xC)    = 1U;
    return 1;
}
