#include "engine.h"
#include "m2c.h"

void func_0202bf58(M2C_UNK);
void func_0202d0e0(M2C_UNK);
void func_0202d0f0(void);
void func_0202d104(M2C_UNK);
M2C_UNK func_0202d114(void);

extern M2C_UNK data_020d5d18;

void func_0202c378(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(M2C_FIELD(&data_020d5d18, void **, 8), s32 *, 0x80) != 0) {
        temp_r4 = func_0202d114();
        func_0202d0e0(1);
        func_0202d104(M2C_FIELD(M2C_FIELD(&data_020d5d18, void **, 8), s32 *, 0x80));
        func_0202bf58(arg0);
        func_0202d0e0(0);
        func_0202d104(temp_r4);
        func_0202d0f0();
        return;
    }
    func_0202bf58(arg0);
}
