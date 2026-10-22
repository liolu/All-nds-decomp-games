/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a570(s32);                         /* extern */
M2C_UNK func_02059f64(s32);                         /* extern */
M2C_UNK func_02059f70(void *);                      /* extern */
extern M2C_UNK data_0210c4b8;

void *func_02018ab0(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c4b8;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x30);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_02059f64(M2C_FIELD(arg0, s32 *, 0x2C));
    func_0204a570(M2C_FIELD(arg0, s32 *, 0x78));
    func_0204a570(M2C_FIELD(arg0, s32 *, 0x74));
    func_02059f70(arg0);
    return arg0;
}
