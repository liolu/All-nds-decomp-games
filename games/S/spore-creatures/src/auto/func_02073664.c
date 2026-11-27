#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */

void func_02073664(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void *temp_r4;
    void *var_r5;
    void *var_r7;
    void *var_r7_2;

    if (M2C_FIELD(arg0, s32 *, 0x164) != 0) {
        var_r5 = M2C_FIELD(arg0, void **, 0x168);
    } else {
        var_r5 = M2C_FIELD(arg0, void **, 0x16C);
    }
    if (var_r5 != M2C_FIELD(arg0, void **, 0x16C)) {
        do {
            temp_r4 = M2C_FIELD(var_r5, void **, 0);
            if (temp_r4 != NULL) {
                if (M2C_FIELD(temp_r4, s32 *, 0xF0) != 0) {
                    var_r7 = M2C_FIELD(temp_r4, void **, 0xF4);
                } else {
                    var_r7 = M2C_FIELD(temp_r4, void **, 0xF8);
                }
                if (var_r7 != M2C_FIELD(temp_r4, void **, 0xF8)) {
                    do {
                        temp_r0 = M2C_FIELD(var_r7, void ***, 0);
                        if (temp_r0 != NULL) {
                            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
                        }
                        var_r7 = M2C_FIELD(var_r7, void **, 4);
                    } while (var_r7 != M2C_FIELD(temp_r4, void **, 0xF8));
                }
                if (M2C_FIELD(temp_r4, s32 *, 0xF0) != 0) {
                    M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xF8), void **, 8), void **, 4) =
                        (void *) M2C_FIELD(temp_r4, void **, 0xFC);
                    M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xF8), s32 *, 8) = 0;
                    M2C_FIELD(temp_r4, void **, 0xFC)                      = (void *) M2C_FIELD(temp_r4, void **, 0xF4);
                    M2C_FIELD(temp_r4, s32 *, 0xF0)                        = 0;
                    M2C_FIELD(temp_r4, void **, 0xF4)                      = NULL;
                }
                if (M2C_FIELD(temp_r4, s32 *, 0x84) != 0) {
                    var_r7_2 = M2C_FIELD(temp_r4, void **, 0x88);
                } else {
                    var_r7_2 = M2C_FIELD(temp_r4, void **, 0x8C);
                }
                if (var_r7_2 != M2C_FIELD(temp_r4, void **, 0x8C)) {
                    do {
                        temp_r0_2 = M2C_FIELD(var_r7_2, void ***, 0);
                        if (temp_r0_2 != NULL) {
                            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
                        }
                        var_r7_2 = M2C_FIELD(var_r7_2, void **, 4);
                    } while (var_r7_2 != M2C_FIELD(temp_r4, void **, 0x8C));
                }
                if (M2C_FIELD(temp_r4, s32 *, 0x84) != 0) {
                    M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x8C), void **, 8), void **, 4) =
                        (void *) M2C_FIELD(temp_r4, void **, 0x90);
                    M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x8C), s32 *, 8) = 0;
                    M2C_FIELD(temp_r4, void **, 0x90)                      = (void *) M2C_FIELD(temp_r4, void **, 0x88);
                    M2C_FIELD(temp_r4, s32 *, 0x84)                        = 0;
                    M2C_FIELD(temp_r4, void **, 0x88)                      = NULL;
                }
                func_020934a8(temp_r4);
            }
            var_r5 = M2C_FIELD(var_r5, void **, 4);
        } while (var_r5 != M2C_FIELD(arg0, void **, 0x16C));
    }
    if (M2C_FIELD(arg0, s32 *, 0x164) == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x16C), void **, 8), void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x170);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x16C), s32 *, 8)                          = 0;
    M2C_FIELD(arg0, void **, 0x170)                                               = (void *) M2C_FIELD(arg0, void **, 0x168);
    M2C_FIELD(arg0, s32 *, 0x164)                                                 = 0;
    M2C_FIELD(arg0, void **, 0x168)                                               = NULL;
}
