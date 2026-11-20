/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202c2b8(s32);                         /* extern */
M2C_UNK func_02046ce4(void *);                      /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bec6c;

void *func_0201f6d8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void *temp_r5;
    void *temp_r5_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bec6c;
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x54));
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x58));
    temp_r5 = M2C_FIELD(arg0, void **, 0x5C);
    if (temp_r5 != NULL) {
        func_02046ce4(temp_r5);
        func_0207b040(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, void **, 0x60);
    if (temp_r5_2 != NULL) {
        func_02046ce4(temp_r5_2);
        func_0207b040(temp_r5_2);
    }
    M2C_FIELD(arg0, void **, 0x5C) = NULL;
    M2C_FIELD(arg0, void **, 0x60) = (void *) M2C_FIELD(arg0, void **, 0x5C);
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x3C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x40);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x48);
    if (temp_r0_4 != NULL) {
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 4)(temp_r0_4);
    }
    M2C_FIELD(arg0, void ***, 0x48) = NULL;
    M2C_FIELD(arg0, void ***, 0x44) = (void **) M2C_FIELD(arg0, void ***, 0x48);
    M2C_FIELD(arg0, void ***, 0x40) = (void **) M2C_FIELD(arg0, void ***, 0x44);
    M2C_FIELD(arg0, void ***, 0x3C) = (void **) M2C_FIELD(arg0, void ***, 0x40);
    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
