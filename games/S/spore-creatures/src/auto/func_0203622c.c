#include "m2c.h"

M2C_UNK func_02002294(void *);                      /* extern */
M2C_UNK func_02055a64(s32, M2C_UNK);                /* extern */
M2C_UNK func_02058c2c();                            /* extern */
M2C_UNK func_0209d7b8(void *);                      /* extern */
extern M2C_UNK data_020debac;

void *func_0203622c(void *arg0, M2C_UNK arg1) {
    func_02058c2c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020debac;
    func_02055a64(arg0 + 0x34, arg1);
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s16 *, 0x90) = 0;
    M2C_FIELD(arg0, s16 *, 0x92) = 0;
    M2C_FIELD(arg0, s16 *, 0x94) = 0;
    func_0209d7b8(arg0 + 0x98);
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    func_02002294(arg0 + 0xC8);
    return arg0;
}
