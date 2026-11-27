#include "engine.h"
#include "m2c.h"

void func_020b9cdc(M2C_UNK);
void func_020bb1f0(M2C_UNK);
void func_020bb200(void);
void func_020bb214(M2C_UNK);
M2C_UNK func_020bb224(void);

extern M2C_UNK data_021d94f8;

void func_020ba148(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(M2C_FIELD(&data_021d94f8, void **, 8), s32 *, 0x80) != 0) {
        temp_r4 = func_020bb224();
        func_020bb1f0(1);
        func_020bb214(M2C_FIELD(M2C_FIELD(&data_021d94f8, void **, 8), s32 *, 0x80));
        func_020b9cdc(arg0);
        func_020bb1f0(0);
        func_020bb214(temp_r4);
        func_020bb200();
        return;
    }
    func_020b9cdc(arg0);
}
