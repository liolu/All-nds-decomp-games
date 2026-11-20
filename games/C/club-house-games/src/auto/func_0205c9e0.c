/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 *func_0205bcd0();
void func_0205bcb4(s32, u8 *);
u8 *func_0205c504(s32, s32, M2C_UNK *, s32, s32);
void func_0205f920(u8 *, s32);
void func_01ff90f0(u8 *, u8 *, s32);
void func_01ff905c(u8 *, s32, s32);
s32 func_0205bcf8(s32, void *, s32, s32);
s32 func_0205bf8c();
extern M2C_UNK func_0205c8bc;
extern M2C_UNK data_02263e84;

u8 *func_0205c9e0(s32 arg0, s32 arg1, s32 arg2) {
    u8 *var_r6;
    s32 temp_r5;
    s32 temp_r4;
    s32 var_r3;
    s32 rd;
    u8 *temp_r0;
    var_r6 = func_0205bcd0();
    if (var_r6 == NULL) {
        if (func_0205bcf8(arg0, &data_02263e84, 0x3C, 0) != 0x3C) {
            return NULL;
        }
        temp_r4 = M2C_FIELD(&data_02263e84, s32 *, 0x38) * 4;
        temp_r5 = (temp_r4 * 2) + 0x3C;
        if (arg1 == 0) {
            return NULL;
        }
        if (arg2 == 0) {
            var_r3 = 0;
        } else {
            var_r3 = func_0205bf8c();
        }
        var_r6 = func_0205c504(arg1, temp_r5 + 0x20, &func_0205c8bc, var_r3, arg0);
        if (var_r6 == NULL) {
            return NULL;
        }
        rd = func_0205bcf8(arg0, var_r6, temp_r4 + 0x3C, 0);
        if (rd != temp_r4 + 0x3C) {
            return NULL;
        }
        temp_r0 = var_r6 + 0x3C;
        func_01ff90f0(temp_r0, temp_r0 + (M2C_FIELD(var_r6, s32 *, 0x38) * 4), temp_r4);
        func_01ff905c(var_r6 + 0x3C, 0, temp_r4);
        func_0205f920(var_r6, temp_r5);
        if (arg2 != 0) {
            func_0205bcb4(arg0, var_r6);
        }
    }
    return var_r6;
}
