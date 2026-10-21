#include "engine.h"
#include "m2c.h"

void func_02022120(M2C_UNK);
void func_02023388(M2C_UNK);
void func_02023398(void);
void func_020233ac(M2C_UNK);
M2C_UNK func_020233bc(void);

extern M2C_UNK data_0215549c;

void func_020228f8(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(M2C_FIELD(&data_0215549c, void **, 8), s32 *, 0x80) != 0) {
        temp_r4 = func_020233bc();
        func_02023388(1);
        func_020233ac(M2C_FIELD(M2C_FIELD(&data_0215549c, void **, 8), s32 *, 0x80));
        func_02022120(arg0);
        func_02023388(0);
        func_020233ac(temp_r4);
        func_02023398();
        return;
    }
    func_02022120(arg0);
}
