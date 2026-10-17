/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202ec98(s32);                         /* extern */
M2C_UNK func_02032108(void *);                      /* extern */
M2C_UNK func_0203722c();                            /* extern */
M2C_UNK func_020462f0();                            /* extern */
M2C_UNK func_020481dc();                            /* extern */
extern void **data_020d024c;

void func_02022abc(void *arg0) {
    s8 var_r0;
    s8 var_r0_2;
    s8 var_r0_3;
    s8 var_r0_4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;

    func_0202ec98(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(*data_020d024c, M2C_UNK(**)(), 8)(data_020d024c);
    func_02032108(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        temp_r1 = M2C_FIELD(arg0, void **, 0x54);
        if (temp_r1 != NULL) {
            if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), void **, 0x20), s32 *, 0x18) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            M2C_FIELD(temp_r1, s8 *, 0x24) = var_r0;
        }
        temp_r1_2 = M2C_FIELD(arg0, void **, 0x60);
        if (temp_r1_2 != NULL) {
            if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x70), void **, 0x20), s32 *, 0x18) == 0) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            M2C_FIELD(temp_r1_2, s8 *, 0x24) = var_r0_2;
        }
        temp_r1_3 = M2C_FIELD(arg0, void **, 0x58);
        if (temp_r1_3 != NULL) {
            if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), void **, 0x20), s32 *, 0x18) == 0) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 0;
            }
            M2C_FIELD(temp_r1_3, s8 *, 0x24) = var_r0_3;
        }
        temp_r1_4 = M2C_FIELD(arg0, void **, 0x5C);
        if (temp_r1_4 != NULL) {
            if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), void **, 0x20), s32 *, 0x18) == 0) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 0;
            }
            M2C_FIELD(temp_r1_4, s8 *, 0x24) = var_r0_4;
        }
    }
    func_0203722c();
    func_020462f0();
    func_020481dc();
}
