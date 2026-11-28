#include "engine.h"
#include "m2c.h"

void func_0207e39c(void);
void func_0207e3d4(void);
void func_0207eb18(void);
void func_0207f334(void);
void func_0207db58(void);
void func_02025aec(void);
void func_020273a4(M2C_UNK);
void func_020273bc(M2C_UNK);

extern M2C_UNK data_020f7cc0;
extern M2C_UNK data_020f7cd0;
extern M2C_UNK data_020f7cdc;

void func_0207e204(void) {
    if (M2C_FIELD(&data_020f7cc0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(&data_020f7cc0, s32 *, 4) = 1;
    func_02025aec();
    M2C_FIELD(&data_020f7cc0, void (**)(), 0x1C) = func_0207e39c;
    M2C_FIELD(&data_020f7cc0, s32 *, 0x20)       = 0;
    M2C_FIELD(&data_020f7cc0, void (**)(), 0x10) = func_0207e3d4;
    M2C_FIELD(&data_020f7cc0, s32 *, 0x14)       = 0;
    func_020273bc((s32) &data_020f7cdc);
    func_020273a4((s32) &data_020f7cd0);
    func_0207f334();
    func_0207db58();
    func_0207eb18();
    M2C_FIELD(&data_020f7cc0, s8 *, 0)    = -1;
    M2C_FIELD(&data_020f7cc0, s32 *, 0xC) = 1;
}
