/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_020033e8(void *);                      /* extern */
M2C_UNK func_02010898(void *);                      /* extern */
M2C_UNK func_0202c2b8(s32);                         /* extern */
M2C_UNK func_02046ce4(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020be478;
extern M2C_UNK data_020bf35c;

void *func_020180dc(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020be478;
    func_02002744();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x2D8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2DC);
    if (temp_r4 != 0) {
        func_02046ce4(temp_r4);
        func_0207b040(temp_r4);
    }
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x2E0));
    func_020033e8(arg0 + 0x2B0);
    func_020033e8(arg0 + 0x288);
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &data_020bf35c;
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0x38)  = &data_020bf35c;
    M2C_FIELD(arg0, M2C_UNK **, 0x38)  = &data_020bcd20;
    func_02010898(arg0);
    return arg0;
}
