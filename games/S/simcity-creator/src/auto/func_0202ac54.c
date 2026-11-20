#include "engine.h"
#include "m2c.h"

void func_02002f44(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02002f9c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020038a8(void);
void func_020038f0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200395c(void);
void func_02003a5c(void);
void func_02003a74(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02003ad8(void);
void func_02003d00(void);
void func_02003d34(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02003da0(void);
void func_020055c4(M2C_UNK, M2C_UNK);
void func_0202a5f4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0202ac54(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    func_020055c4(temp_r4, temp_r5);
    switch (arg2) {                                 /* irregular */
        case 1:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_020038a8();
                func_020038f0(temp_r4, arg1, temp_r5);
                func_0200395c();
            } else {
                func_02002f44(temp_r4, arg1, temp_r5);
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_02003a5c();
                func_02003a74(temp_r4, arg1, temp_r5);
                func_02003ad8();
            } else {
                func_02002f9c(temp_r4, arg1, temp_r5);
            }
            break;
        case 0:
            func_02003d00();
            func_02003d34(temp_r4, arg1, temp_r5);
            func_02003da0();
            break;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_0202a5f4(arg3, arg2, arg1);
}
