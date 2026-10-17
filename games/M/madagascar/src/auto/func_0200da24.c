/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202c2b8(s32);                         /* extern */
extern M2C_UNK data_020bd880;

void *func_0200da24(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd880;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x30);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x2C));
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x48));
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x4C));
    return arg0;
}
