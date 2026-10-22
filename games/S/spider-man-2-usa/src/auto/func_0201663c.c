/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014be0(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_020165fc(void *);                      /* extern */
extern M2C_UNK data_0215b3d4;

void func_0201663c(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_02014be0(&data_0215b3d4, M2C_FIELD(arg0, s32 *, 0x128));
    if (temp_r0 == M2C_FIELD(arg0, s32 *, 0x130)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x130) = temp_r0;
    func_020165fc(arg0);
}
