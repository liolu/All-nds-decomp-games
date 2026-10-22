/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014ba4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02014be0(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_02014c90(M2C_UNK *);                       /* extern */
M2C_UNK func_02034cc8(void *);                      /* extern */
M2C_UNK func_0203b5f0(s32, M2C_UNK);                /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_02106ba8;
extern M2C_UNK data_0215b3d4;

void *func_0200663c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106ba8;
    if (M2C_FIELD(arg0, u8 *, 0x88) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x80) != func_02014be0(&data_0215b3d4, 1)) {
            func_02014ba4(&data_0215b3d4, 1, -1);
            func_0203b5f0(func_02014c90(&data_0215b3d4), 0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x84) != func_02014be0(&data_0215b3d4, 4)) {
            func_02014ba4(&data_0215b3d4, 4, -1);
            func_0203b5f0(func_02014c90(&data_0215b3d4), 0);
        }
    }
    func_02034cc8(arg0);
    func_02059f70(arg0);
    return arg0;
}
