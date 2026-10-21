#include "engine.h"
#include "m2c.h"

void func_02006460(void);
M2C_UNK func_020064d8(void);
void func_020066fc(void);
M2C_UNK func_0200677c(void);
void func_0200678c(M2C_UNK);
M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);
void func_02093dc4(void);
void func_0209544c(void);

extern s32 data_02170cc0;

s32 func_02092e60(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02006be0();
    if (data_02170cc0 != 0) {
        func_02006bf4(temp_r0);
        return 1;
    }
    if (arg0 == 0) {
        func_02006bf4(temp_r0);
        return 1;
    }
    if (arg0 & 0x1F) {
        func_02006bf4(temp_r0);
        return 1;
    }
    if ((u32) arg1 < 0x2300U) {
        func_02006bf4(temp_r0);
        return 6;
    }
    data_02170cc0                           = arg0;
    M2C_FIELD(arg0, s32 *, 0x2260)          = 1;
    M2C_FIELD(data_02170cc0, s16 *, 0x2280) = 0;
    M2C_FIELD(data_02170cc0, s16 *, 0x2268) = 0;
    M2C_FIELD(data_02170cc0, s8 *, 0x226A)  = 0;
    M2C_FIELD(data_02170cc0, s8 *, 0x226B)  = 0;
    M2C_FIELD(data_02170cc0, s16 *, 0x2282) = 0;
    M2C_FIELD(data_02170cc0, s16 *, 0x22F8) = 0;
    func_02093dc4();
    func_0209544c();
    if (func_020064d8() == 0) {
        func_02006460();
    }
    if (func_0200677c() == 0) {
        func_020066fc();
    }
    func_0200678c(data_02170cc0 + 0x22CC);
    func_02006bf4(temp_r0);
    return 0;
}
