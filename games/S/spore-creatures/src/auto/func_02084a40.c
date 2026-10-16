#include "engine.h"
#include "m2c.h"

void func_02084be4(void);
void func_02084c1c(void);
void func_020850a0(void);
void func_02085840(void);
void func_02084264(void);
void func_020b7f60(void);
void func_020bcbb0(M2C_UNK);
void func_020bcb98(M2C_UNK);

extern M2C_UNK data_020e2e40;
extern M2C_UNK data_020e2e50;
extern M2C_UNK data_020e2e5c;

void func_02084a40(void) {
    if (M2C_FIELD(&data_020e2e40, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(&data_020e2e40, s32 *, 4) = 1;
    func_020b7f60();
    M2C_FIELD(&data_020e2e40, void (**)(), 0x1C) = func_02084be4;
    M2C_FIELD(&data_020e2e40, s32 *, 0x20)       = 0;
    M2C_FIELD(&data_020e2e40, void (**)(), 0x10) = func_02084c1c;
    M2C_FIELD(&data_020e2e40, s32 *, 0x14)       = 0;
    func_020bcb98((s32) &data_020e2e5c);
    func_020bcbb0((s32) &data_020e2e50);
    func_02085840();
    func_02084264();
    func_020850a0();
    M2C_FIELD(&data_020e2e40, s8 *, 0)    = -1;
    M2C_FIELD(&data_020e2e40, s32 *, 0xC) = 1;
}
