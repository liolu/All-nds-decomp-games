/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_02010438(M2C_UNK);                     /* extern */
M2C_UNK func_02019c38();                            /* extern */
M2C_UNK func_0201a5a8(void *);                      /* extern */
M2C_UNK func_0202c278(s32);                         /* extern */
M2C_UNK func_0202c2b8(s32);                         /* extern */
M2C_UNK func_0202d918(void *);                      /* extern */
M2C_UNK func_0203a128(void *);                      /* extern */
M2C_UNK func_02046ce4(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern s32 data_020be724;
extern s32 data_020be728;
extern s32 data_020be72c;
extern s32 data_020be738;
extern s32 data_020be73c;
extern s32 data_020be744;
extern M2C_UNK data_020be934;

void *func_0201b6c8(void *arg0) {
    s32 temp_r5;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;
    void **temp_r0_6;
    void **temp_r0_7;
    void **temp_r0_8;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020be934;
    func_02002744();
    func_0202c278(data_020be744);
    func_0202c278(data_020be738);
    func_0202c278(data_020be73c);
    func_0202c278(data_020be728);
    func_0202c278(data_020be72c);
    func_0202c278(data_020be724);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1C8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x1C0);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x140);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x13C);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    temp_r0_5 = M2C_FIELD(arg0, void ***, 0x138);
    if (temp_r0_5 != NULL) {
        M2C_FIELD(*temp_r0_5, M2C_UNK(**)(), 4)(temp_r0_5);
    }
    temp_r0_6 = M2C_FIELD(arg0, void ***, 0x134);
    if (temp_r0_6 != NULL) {
        M2C_FIELD(*temp_r0_6, M2C_UNK(**)(), 4)(temp_r0_6);
    }
    func_0201a5a8(arg0);
    func_02019c38();
    temp_r0_7 = M2C_FIELD(arg0, void ***, 0x188);
    if (temp_r0_7 != NULL) {
        M2C_FIELD(*temp_r0_7, M2C_UNK(**)(), 4)(temp_r0_7);
    }
    temp_r0_8 = M2C_FIELD(arg0, void ***, 0x178);
    if (temp_r0_8 != NULL) {
        M2C_FIELD(*temp_r0_8, M2C_UNK(**)(), 4)(temp_r0_8);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x17C);
    if (temp_r5 != 0) {
        func_02046ce4(temp_r5);
        func_0207b040(temp_r5);
    }
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x180));
    func_02010438(0);
    func_0203a128(arg0 + 0xF4);
    func_0203a128(arg0 + 0xD4);
    func_0202d918(arg0);
    return arg0;
}
