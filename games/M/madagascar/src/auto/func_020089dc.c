/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744();                            /* extern */
M2C_UNK func_02010438(M2C_UNK);                     /* extern */
M2C_UNK func_0201f640();                            /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
M2C_UNK func_02027a20();                            /* extern */
M2C_UNK func_0202c2b8(s32);                         /* extern */
M2C_UNK func_0202d918(void *);                      /* extern */
M2C_UNK func_0202f014(void *);                      /* extern */
M2C_UNK func_02037dc0();                            /* extern */
M2C_UNK func_02039d9c();                            /* extern */
M2C_UNK func_020464a8();                            /* extern */
M2C_UNK func_02046ce4(void *);                      /* extern */
M2C_UNK func_020482e8();                            /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bd3f8;

void *func_020089dc(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void *temp_r5;
    void *temp_r5_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd3f8;
    func_02002744();
    temp_r0 = M2C_FIELD(arg0, void ***, 0xCC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0xD0);
    if (temp_r5 != NULL) {
        func_02046ce4(temp_r5);
        func_0207b040(temp_r5);
    }
    func_0202c2b8(M2C_FIELD(arg0, s32 *, 0xD4));
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x104);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_02039d9c();
    func_020464a8();
    func_02037dc0();
    func_0201f640();
    func_02027a20();
    func_020482e8();
    temp_r5_2 = M2C_FIELD(arg0, void **, 0xD8);
    if (temp_r5_2 != NULL) {
        func_0202f014(temp_r5_2);
        func_0207b040(temp_r5_2);
    }
    func_02010438(0);
    func_02024698(0);
    *(u16 *) 0x04000304 |= 0x8000;
    func_0202d918(arg0);
    func_0207b040(arg0);
    return arg0;
}
