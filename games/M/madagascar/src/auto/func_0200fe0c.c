/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b000();                         /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd318;
extern M2C_UNK data_020bdbac;

void *func_0200fe0c(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;
    void **temp_r0_6;
    void **temp_r0_7;
    void **temp_r0_8;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bdbac;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x70);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x74);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x78);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    func_0207b000(M2C_FIELD(arg0, s32 *, 0x7C));
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x68);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
        func_0207b000();
        temp_r0_5 = M2C_FIELD(arg0, void ***, 0x6C);
        if (temp_r0_5 != NULL) {
            M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 4)(temp_r0_5);
        }
    }
    temp_r0_6 = M2C_FIELD(arg0, void ***, 0x88);
    if ((temp_r0_6 != NULL) && (temp_r0_6 != NULL)) {
        M2C_FIELD(*temp_r0_6, M2C_UNK(**)(), 4)(temp_r0_6);
    }
    temp_r0_7 = M2C_FIELD(arg0, void ***, 0x60);
    if (temp_r0_7 != NULL) {
        M2C_FIELD(*temp_r0_7, M2C_UNK(**)(), 4)(temp_r0_7);
    }
    temp_r0_8 = M2C_FIELD(arg0, void ***, 0x64);
    if (temp_r0_8 != NULL) {
        M2C_FIELD(*temp_r0_8, M2C_UNK(**)(), 4)(temp_r0_8);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd318;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
