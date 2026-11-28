/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern s32 data_020ec010;
extern M2C_UNK data_020ec014;

void func_02011c50(s32 arg0) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r2_2;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = func_02024624();
    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, void **, 8)  = NULL;
    M2C_FIELD(arg0, void **, 4)  = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & ~1);
    if (M2C_FIELD(&data_020ec014, s32 *, 0) == arg0) {
        M2C_FIELD(&data_020ec014, s32 *, 8) = 0;
        M2C_FIELD(&data_020ec014, s16 *, 6) = 0;
        M2C_FIELD(&data_020ec014, s32 *, 0) = (s32) data_020ec010;
        M2C_FIELD(&data_020ec014, s16 *, 4) = 0;
    }
    func_02024638(temp_r0);
}
