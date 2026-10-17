/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744(void *);                      /* extern */
M2C_UNK func_0202bd6c();                            /* extern */
M2C_UNK func_0202caf0(s32);                         /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bddd4;

void *func_02013a60(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bddd4;
    func_0202bd6c();
    func_0202caf0(M2C_FIELD(arg0, s32 *, 4));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
    } else {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1A8)(arg0 + 0x8C);
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1B0)(arg0 + 0x90);
    }
    func_02002744(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
