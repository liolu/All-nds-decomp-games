#include "m2c.h"

M2C_UNK func_0200c940();                     /* extern */
M2C_UNK func_0203491c();                         /* extern */
M2C_UNK func_02034934();                         /* extern */
M2C_UNK func_02044dc0();                         /* extern */
M2C_UNK func_020538fc();                            /* extern */
M2C_UNK func_02090adc();                     /* extern */
M2C_UNK func_020953a4();                     /* extern */
M2C_UNK func_020a4f38();                            /* extern */
M2C_UNK func_020b3cf0();                         /* extern */
M2C_UNK func_020b442c();                         /* extern */
M2C_UNK func_ov015_02171944();               /* extern */

void func_0203c258(void *arg0, M2C_UNK arg1) {
    s32 temp_r6;
    s32 temp_r6_2;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    if (M2C_FIELD(arg0, void ***, 0xDC) != NULL) {
        func_020a4f38();
        temp_r0 = M2C_FIELD(arg0, void ***, 0xDC);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0xDC) = NULL;
    }
    func_02034934(M2C_FIELD(arg0, s32 *, 0x8164));
    func_02034934(M2C_FIELD(arg0, s32 *, 0x8168));
    func_02034934(M2C_FIELD(arg0, s32 *, 0x816C));
    func_02090adc(M2C_FIELD(arg0, void ***, 0xC8));
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xC8);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_020953a4(M2C_FIELD(arg0, void ***, 0xCC));
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0xCC);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    func_020b442c(M2C_FIELD(arg0, s32 *, 0xD0));
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r6 != 0) {
        func_020b3cf0(temp_r6);
        func_0203491c(temp_r6);
    }
    func_020b442c(M2C_FIELD(arg0, s32 *, 0xD4));
    temp_r6_2 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_r6_2 != 0) {
        func_020b3cf0(temp_r6_2);
        func_0203491c(temp_r6_2);
    }
    M2C_FIELD(arg0, s32 *, 0x2C)               = 0;
    M2C_FIELD((void *) 0x04001000, s32 *, 0)   = (s32) ((M2C_FIELD((void *) 0x04001000, s32 *, 0) & ~0x1F00) | 0x1F00);
    *(s32 *) 0x04000000                        = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1F00;
    M2C_FIELD((void *) 0x04001000, u16 *, 0xE) = (u16) (M2C_FIELD((void *) 0x04001000, u16 *, 0xE) & ~3);
    M2C_FIELD((void *) 0x04001000, u16 *, 8)   = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 8) & ~3) | 1);
    M2C_FIELD((void *) 0x04001000, u16 *, 0xA) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0xA) & ~3) | 2);
    M2C_FIELD((void *) 0x04001000, u16 *, 0xC) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0xC) & ~3) | 3);
    func_02044dc0(M2C_FIELD(arg0, s32 *, 0xE0));
    if (M2C_FIELD(arg0, s32 *, 0xE0) != 0) {
        func_0203491c();
    }
    func_ov015_02171944(arg1);
    func_020538fc();
    func_0200c940(1);
}
