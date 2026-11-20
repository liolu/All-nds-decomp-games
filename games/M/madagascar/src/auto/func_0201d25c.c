/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_0202c278(s32);                         /* extern */
extern M2C_UNK data_020bcd20;
extern s32 data_020be964;
extern s32 data_020be968;
extern s32 data_020be96c;
extern s32 data_020be970;
extern s32 data_020be974;
extern s32 data_020be978;
extern s32 data_020be980;
extern s32 data_020be984;
extern s32 data_020be988;
extern s32 data_020be98c;
extern s32 data_020be990;
extern M2C_UNK data_020beb24;

void *func_0201d25c(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;
    void **temp_r0_6;
    void **temp_r0_7;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020beb24;
    func_02002744();
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    temp_r0_5 = M2C_FIELD(arg0, void ***, 0x1C);
    if (temp_r0_5 != NULL) {
        M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 4)(temp_r0_5);
    }
    temp_r0_6 = M2C_FIELD(arg0, void ***, 0x24);
    if (temp_r0_6 != NULL) {
        M2C_FIELD(*temp_r0_6, M2C_UNK(**)(), 4)(temp_r0_6);
    }
    temp_r0_7 = M2C_FIELD(arg0, void ***, 0x28);
    if (temp_r0_7 != NULL) {
        M2C_FIELD(*temp_r0_7, M2C_UNK(**)(), 4)(temp_r0_7);
    }
    func_0202c278(data_020be970);
    func_0202c278(data_020be990);
    func_0202c278(data_020be98c);
    func_0202c278(data_020be964);
    func_0202c278(data_020be974);
    func_0202c278(data_020be978);
    func_0202c278(data_020be980);
    func_0202c278(data_020be988);
    func_0202c278(data_020be96c);
    func_0202c278(data_020be968);
    func_0202c278(data_020be984);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    return arg0;
}
