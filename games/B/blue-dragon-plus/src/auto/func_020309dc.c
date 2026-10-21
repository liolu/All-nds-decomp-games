#include "engine.h"
#include "m2c.h"

void func_02030918(M2C_UNK);
void func_02030a40(M2C_UNK);
void func_02030ac4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0215cb90;
extern M2C_UNK data_0215d420;

void func_020309dc(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02030a40(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x168)(arg0);
    func_02030ac4((s32) &data_0215d420, arg0);
    if (M2C_FIELD(&data_0215cb90, s32 *, 4) != 0) {
        func_02030ac4(M2C_FIELD(&data_0215cb90, s32 *, 4) + 0x4E0, arg0);
    }
    func_02030918(arg0);
}
