/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017030(void *);                      /* extern */
s32 func_02019a30(M2C_UNK *);                       /* extern */
M2C_UNK func_0203725c(void *, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_02076ad8;
extern M2C_UNK data_02077058;
extern M2C_UNK data_0210c3f8;
extern M2C_UNK data_02157f74;
extern M2C_UNK data_0215b3d4;

void *func_020171e4(void *arg0, s32 arg1) {
    func_0203725c(arg0, func_02019a30(&data_02077058), &data_02076ad8, &data_02157f74, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c3f8;
    M2C_FIELD(arg0, s32 *, 0x128)  = (s32) M2C_FIELD(&data_0215b3d4, s32 *, 0x54);
    func_02017030(arg0);
    return arg0;
}
