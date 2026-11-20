#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203f28c(void);
void func_0203f948(M2C_UNK);
void func_0203fbb4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0215fb2c;

s32 func_0203f4bc(s32 arg0, s32 arg1) {
    if (func_0203f28c() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0215fb2c, volatile s32 *, 4) = 0;
    func_0203f948(0x03006000);
    do {

    } while (M2C_FIELD(&data_0215fb2c, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_0215fb2c, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_0215fb2c, volatile s32 *, 8) = 0;
    func_0203fbb4(0, 2, 0, 1);
    func_0203f948((u8) arg0 | 0x02006100);
    func_0203f948(0x01010000 | (u16) arg1);
    return 0;
}
