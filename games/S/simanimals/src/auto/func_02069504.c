#include "engine.h"
#include "m2c.h"

M2C_UNK func_020692d4(void);
void func_020699a8(M2C_UNK);
void func_02069c14(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0209064c;

s32 func_02069504(s32 arg0, s32 arg1) {
    if (func_020692d4() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0209064c, volatile s32 *, 4) = 0;
    func_020699a8(0x03006000);
    do {

    } while (M2C_FIELD(&data_0209064c, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_0209064c, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_0209064c, volatile s32 *, 8) = 0;
    func_02069c14(0, 2, 0, 1);
    func_020699a8((u8) arg0 | 0x02006100);
    func_020699a8(0x01010000 | (u16) arg1);
    return 0;
}
