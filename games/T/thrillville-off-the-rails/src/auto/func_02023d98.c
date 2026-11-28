/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02024050(M2C_UNK);
M2C_UNK func_02024624(void);
void func_02024638(M2C_UNK);

extern M2C_UNK data_020ec6a8;

void func_02023d98(s32 arg0) {
    s32 temp_r0;
    void *temp_r0_2;
    void *temp_r1;

    temp_r0 = func_02024624();
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        func_02024638(temp_r0);
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r0_2 == NULL) {
        M2C_FIELD(&data_020ec6a8, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x14);
    } else {
        M2C_FIELD(temp_r0_2, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x14);
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0x18) = temp_r0_2;
    } else {
        M2C_FIELD(&data_020ec6a8, void **, 0) = temp_r0_2;
        if (temp_r0_2 != NULL) {
            func_02024050((s32) temp_r0_2);
        }
    }
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_02024638(temp_r0);
}
