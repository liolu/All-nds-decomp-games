#include "m2c.h"

extern M2C_UNK data_0214987c;
extern M2C_UNK data_02149894;

M2C_UNK func_02006be0();
void func_02006bf4(s32 arg0);
s32 func_0200a53c(void *arc);
void func_0200a5d8(void *arc);

u32 func_0200ae54(u32 dma) {
    s32 saved;
    s32 old;
    s32 suspended;

    saved                                 = func_02006be0();
    old                                   = M2C_FIELD(&data_0214987c, s32 *, 0x4);
    suspended                             = func_0200a53c(&data_02149894);
    M2C_FIELD(&data_0214987c, s32 *, 0x4) = dma;
    if (suspended != 0) {
        func_0200a5d8(&data_02149894);
    }
    func_02006bf4(saved);
    return old;
}
