/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201b970(M2C_UNK, M2C_UNK);
void func_0201ea38(M2C_UNK);
void func_02045548(M2C_UNK);

void func_02048af4(s32 arg0) {
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;

    func_02045548(arg0);
    func_0201b970(arg0, arg0 + 0x2D0);
    func_0201b970(arg0, arg0 + 0x2AC);
    func_0201b970(arg0, arg0 + 0x2F0);
    temp_r2 = M2C_FIELD(arg0, void **, 0x2EC);
    if (temp_r2 != NULL) {
        var_r3 = arg0;
        if (arg0 != 0) {
            var_r3 = arg0 + 4;
        }
        M2C_FIELD(temp_r2, s32 *, 4)    = (s32) (M2C_FIELD(temp_r2, s32 *, 4) - 1);
        M2C_FIELD(var_r3, s32 *, 4)     = (s32) (M2C_FIELD(var_r3, s32 *, 4) - 1);
        M2C_FIELD(arg0, void **, 0x2EC) = NULL;
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 0x2BC);
    if (temp_r2_2 != NULL) {
        var_r3_2 = arg0;
        if (arg0 != 0) {
            var_r3_2 = arg0 + 4;
        }
        M2C_FIELD(temp_r2_2, s32 *, 4)  = (s32) (M2C_FIELD(temp_r2_2, s32 *, 4) - 1);
        M2C_FIELD(var_r3_2, s32 *, 4)   = (s32) (M2C_FIELD(var_r3_2, s32 *, 4) - 1);
        M2C_FIELD(arg0, void **, 0x2BC) = NULL;
    }
    temp_r2_3 = M2C_FIELD(arg0, void **, 0x2C0);
    if (temp_r2_3 != NULL) {
        var_r3_3 = arg0;
        if (arg0 != 0) {
            var_r3_3 = arg0 + 4;
        }
        M2C_FIELD(temp_r2_3, s32 *, 4)  = (s32) (M2C_FIELD(temp_r2_3, s32 *, 4) - 1);
        M2C_FIELD(var_r3_3, s32 *, 4)   = (s32) (M2C_FIELD(var_r3_3, s32 *, 4) - 1);
        M2C_FIELD(arg0, void **, 0x2C0) = NULL;
    }
    func_0201ea38(arg0);
}
