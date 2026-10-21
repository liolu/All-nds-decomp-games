#include "m2c.h"

M2C_UNK func_02039904(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_02082490;
extern s32 data_02082494;
extern s32 data_02082498;

void func_020270ac(void *arg0, s32 arg1) {
    func_02039904(0, arg0, 0x6C);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_02082498;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_02082494;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) data_02082490;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
}
