#include "engine.h"
#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0208ac00(M2C_UNK);
void func_0208efa0(void);
void func_02090a30(M2C_UNK);
M2C_UNK func_02090a40(void);
void func_02090a50(M2C_UNK);

extern M2C_UNK data_021704fc;

void func_020889b0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *temp_r0;

    func_02090a30(arg0);
    *(s32 *) func_02090a40()                         = arg1;
    M2C_FIELD((void *) func_02090a40(), s32 *, 4)    = arg2;
    M2C_FIELD((void *) func_02090a40(), s32 *, 8)    = arg3;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x10) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x1C) = 0;
    M2C_FIELD((void *) func_02090a40(), s16 *, 0x1A) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0xE4) = 0;
    func_02090a50(0);
    M2C_FIELD((void *) func_02090a40(), s8 *, 0xF)    = 0;
    M2C_FIELD((void *) func_02090a40(), s8 *, 0x19)   = 0;
    M2C_FIELD((void *) func_02090a40(), s8 *, 0x1AF)  = 0;
    M2C_FIELD((void *) func_02090a40(), s16 *, 0x1B6) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x1DC) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x200) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x2F4) = arg4;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x2F8) = arg5;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x2FC) = arg6;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x300) = arg7;
    func_020075b0(func_02090a40() + 0x304, 0, 0x40);
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x344) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x464) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x468) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x474) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x478) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x47C) = 0;
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x480) = 0;
    temp_r0                                           = (void *) func_02090a40();
    M2C_FIELD(temp_r0, s32 *, 0x174)                  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x178)                  = 0;
    func_0208efa0();
    M2C_FIELD(&data_021704fc, s8 *, 0x1C)  = 0;
    M2C_FIELD(&data_021704fc, s8 *, 0x1D)  = 0;
    M2C_FIELD(&data_021704fc, s16 *, 0x1E) = 0;
    func_0208ac00(0);
}
