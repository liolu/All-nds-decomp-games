#include "engine.h"
#include "m2c.h"

void func_02004bf0(M2C_UNK, M2C_UNK);
void func_02004c4c(void);
void func_02004da4(M2C_UNK);
void func_020048b4(void);
void func_02004ef8(M2C_UNK, M2C_UNK);
void func_02004fe0(void);
void func_02005014(void);
void func_02005050(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020066e0(void);
void func_020066f4(M2C_UNK);
extern M2C_UNK data_020d0c40;

void func_02004d04(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r2;

    temp_r4 = func_020066e0();
    if (arg0 == M2C_FIELD(&data_020d0c40, s32 *, 0x28)) {
        func_02004bf0(arg0, arg1);
    }
    func_02004da4(arg0);
    var_r2 = M2C_FIELD(&data_020d0c40, s32 *, 0x1C);
    if (var_r2 == 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x94) - 4;
    }
    func_02005050(arg0, (s32) func_02004c4c, var_r2);
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02004fe0();
    func_02004ef8(arg0, arg2);
    func_02005014();
    func_020048b4();
    func_020066f4(temp_r4);
}
