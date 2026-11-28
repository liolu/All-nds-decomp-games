#include "m2c.h"

void *func_0203bc74();                              /* extern */
void *func_0203bccc();                              /* extern */
void *func_0203bd24();                              /* extern */
void *func_0203bd7c();                              /* extern */
void *func_0203bdd4();                              /* extern */
void *func_0203be2c();                              /* extern */
void *func_0203be84();                              /* extern */

void func_02038504(void) {
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;

    temp_r0   = func_0203bc74();
    var_r1    = M2C_FIELD(temp_r0, void **, 0x1C);
    temp_r0_2 = temp_r0 + 0x18;
    if (var_r1 != temp_r0_2) {
        do {
            var_r1 = M2C_FIELD(var_r1, void **, 4);
        } while (var_r1 != temp_r0_2);
    }
    temp_r0_3 = func_0203bdd4();
    var_r1_2  = M2C_FIELD(temp_r0_3, void **, 0x1C);
    temp_r0_4 = temp_r0_3 + 0x18;
    if (var_r1_2 != temp_r0_4) {
        do {
            var_r1_2 = M2C_FIELD(var_r1_2, void **, 4);
        } while (var_r1_2 != temp_r0_4);
    }
    temp_r0_5 = func_0203bd7c();
    var_r1_3  = M2C_FIELD(temp_r0_5, void **, 0x1C);
    temp_r0_6 = temp_r0_5 + 0x18;
    if (var_r1_3 != temp_r0_6) {
        do {
            var_r1_3 = M2C_FIELD(var_r1_3, void **, 4);
        } while (var_r1_3 != temp_r0_6);
    }
    temp_r0_7 = func_0203bccc();
    var_r1_4  = M2C_FIELD(temp_r0_7, void **, 0x1C);
    temp_r0_8 = temp_r0_7 + 0x18;
    if (var_r1_4 != temp_r0_8) {
        do {
            var_r1_4 = M2C_FIELD(var_r1_4, void **, 4);
        } while (var_r1_4 != temp_r0_8);
    }
    temp_r0_9  = func_0203be2c();
    var_r1_5   = M2C_FIELD(temp_r0_9, void **, 0x1C);
    temp_r0_10 = temp_r0_9 + 0x18;
    if (var_r1_5 != temp_r0_10) {
        do {
            var_r1_5 = M2C_FIELD(var_r1_5, void **, 4);
        } while (var_r1_5 != temp_r0_10);
    }
    temp_r0_11 = func_0203bd24();
    var_r1_6   = M2C_FIELD(temp_r0_11, void **, 0x1C);
    temp_r0_12 = temp_r0_11 + 0x18;
    if (var_r1_6 != temp_r0_12) {
        do {
            var_r1_6 = M2C_FIELD(var_r1_6, void **, 4);
        } while (var_r1_6 != temp_r0_12);
    }
    temp_r0_13 = func_0203be84();
    var_r1_7   = M2C_FIELD(temp_r0_13, void **, 0x1C);
    temp_r0_14 = temp_r0_13 + 0x18;
    if (var_r1_7 == temp_r0_14) {
        return;
    }
    do {
        var_r1_7 = M2C_FIELD(var_r1_7, void **, 4);
    } while (var_r1_7 != temp_r0_14);
}
