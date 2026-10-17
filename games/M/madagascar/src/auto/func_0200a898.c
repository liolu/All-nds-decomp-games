/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200242c(void *);                      /* extern */
M2C_UNK func_020246e8(void *, s32, M2C_UNK);        /* extern */
extern s32 data_0207f888;

void func_0200a898(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, void **, 0x3C);
    if (temp_r0 != NULL) {
        temp_r0_2 = M2C_FIELD(temp_r0, void **, 0x20);
        if (M2C_FIELD(temp_r0_2, u8 *, 4) != 0) {
            func_020246e8(temp_r0_2, data_0207f888, 0);
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r0_3 != NULL) {
        temp_r0_4 = M2C_FIELD(temp_r0_3, void **, 0x20);
        if (M2C_FIELD(temp_r0_4, u8 *, 4) != 0) {
            func_020246e8(temp_r0_4, M2C_FIELD(arg0, s32 *, 0x20), 0);
        }
    }
    func_0200242c(arg0);
}
