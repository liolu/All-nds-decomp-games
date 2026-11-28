/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02021194(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_020ec10c;

void func_0201ae34(s32 arg0) {
    s32 temp_r4;

    temp_r4                            = ~(1 << arg0);
    M2C_FIELD(data_020ec10c, u16 *, 2) = (u16) (M2C_FIELD(data_020ec10c, u16 *, 2) & temp_r4);
    M2C_FIELD(data_020ec10c, u16 *, 4) = (u16) (M2C_FIELD(data_020ec10c, u16 *, 4) & temp_r4);
    func_02021194(0, (arg0 * 0x590) + (s32) (data_020ec10c + 0x10), 0x590);
}
