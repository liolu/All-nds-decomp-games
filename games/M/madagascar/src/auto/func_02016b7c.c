/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744(void *);                      /* extern */
M2C_UNK func_0201f640();                            /* extern */
M2C_UNK func_02027a20();                            /* extern */
M2C_UNK func_0202f014(s32);                         /* extern */
M2C_UNK func_0203232c(void *);                      /* extern */
M2C_UNK func_02037dc0();                            /* extern */
M2C_UNK func_02039d9c();                            /* extern */
M2C_UNK func_020464a8();                            /* extern */
M2C_UNK func_020482e8();                            /* extern */
M2C_UNK func_0207b000(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern M2C_UNK data_020be144;

void *func_02016b7c(void *arg0) {
    s32 temp_r5;
    void **temp_r0;
    void **temp_r0_10;
    void **temp_r0_11;
    void **temp_r0_12;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;
    void **temp_r0_6;
    void **temp_r0_7;
    void **temp_r0_8;
    void **temp_r0_9;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020be144;
    func_02039d9c();
    func_020464a8();
    func_02037dc0();
    func_0201f640();
    func_02027a20();
    func_020482e8();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x78);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x7C);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x88);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    func_0207b000(M2C_FIELD(arg0, s32 *, 0x74));
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_r5 != 0) {
        func_0202f014(temp_r5);
        func_0207b040(temp_r5);
    }
    temp_r0_5 = M2C_FIELD(arg0, void ***, 0xE0);
    if (temp_r0_5 != NULL) {
        M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 4)(temp_r0_5);
    }
    temp_r0_6 = M2C_FIELD(arg0, void ***, 0xE4);
    if (temp_r0_6 != NULL) {
        M2C_FIELD(*temp_r0_6, M2C_UNK(**)(), 4)(temp_r0_6);
    }
    temp_r0_7 = M2C_FIELD(arg0, void ***, 0xC0);
    if (temp_r0_7 != NULL) {
        M2C_FIELD(*temp_r0_7, M2C_UNK(**)(), 4)(temp_r0_7);
    }
    temp_r0_8 = M2C_FIELD(arg0, void ***, 0xC4);
    if (temp_r0_8 != NULL) {
        M2C_FIELD(*temp_r0_8, M2C_UNK(**)(), 4)(temp_r0_8);
    }
    temp_r0_9 = M2C_FIELD(arg0, void ***, 0xC8);
    if (temp_r0_9 != NULL) {
        M2C_FIELD(*temp_r0_9, M2C_UNK(**)(), 4)(temp_r0_9);
    }
    temp_r0_10 = M2C_FIELD(arg0, void ***, 0xCC);
    if (temp_r0_10 != NULL) {
        M2C_FIELD(*temp_r0_10, M2C_UNK(**)(), 4)(temp_r0_10);
    }
    temp_r0_11 = M2C_FIELD(arg0, void ***, 0xD0);
    if (temp_r0_11 != NULL) {
        M2C_FIELD(*temp_r0_11, M2C_UNK(**)(), 4)(temp_r0_11);
    }
    temp_r0_12 = M2C_FIELD(arg0, void ***, 0xD4);
    if (temp_r0_12 != NULL) {
        M2C_FIELD(*temp_r0_12, M2C_UNK(**)(), 4)(temp_r0_12);
    }
    func_02002744(arg0);
    *(u16 *) 0x04000304 |= 0x8000;
    func_0203232c(arg0);
    return arg0;
}
