#include "engine.h"
#include "m2c.h"

void func_0207fc34(void);
void func_020815bc(M2C_UNK);

extern M2C_UNK data_0211c670;
extern M2C_UNK data_0211c680;
extern M2C_UNK data_0211c69c;
extern M2C_UNK data_0211c6bc;
extern M2C_UNK data_02170294;

void func_02082288(void) {
    M2C_UNK (*temp_r4)(M2C_UNK *, s32, M2C_UNK);
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_02170294, void **, 0), M2C_UNK(**)(M2C_UNK *, s32, M2C_UNK), 0x110C);
    if (M2C_FIELD(&data_02170294, s32 *, 0x14) != 0) {
        func_020815bc(M2C_FIELD(&data_02170294, s32 *, 0x14));
        temp_r4(&data_0211c670, M2C_FIELD(&data_02170294, s32 *, 0x14), 0);
        M2C_FIELD(&data_02170294, s32 *, 0x14) = 0;
    }
    func_0207fc34();
    if (M2C_FIELD(&data_02170294, void **, 0) == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(&data_02170294, void **, 0), s32 *, 0x1114);
    if (temp_r1 != 0) {
        temp_r4(&data_0211c680, temp_r1, 0);
        M2C_FIELD(M2C_FIELD(&data_02170294, void **, 0), s32 *, 0x1114) = 0;
    }
    temp_r1_2 = M2C_FIELD(M2C_FIELD(&data_02170294, void **, 0), s32 *, 0x1118);
    if (temp_r1_2 != 0) {
        temp_r4(&data_0211c69c, temp_r1_2, 0);
        M2C_FIELD(M2C_FIELD(&data_02170294, void **, 0), s32 *, 0x1118) = 0;
    }
    temp_r4(&data_0211c6bc, (s32) M2C_FIELD(&data_02170294, void **, 0), 0);
    M2C_FIELD(&data_02170294, void **, 0) = NULL;
}
