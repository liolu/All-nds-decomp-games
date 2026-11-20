#include "m2c.h"

M2C_UNK func_02030590();            /* extern */
extern M2C_UNK data_020c571c;

void func_020ae8bc(void *arg0, u32 arg1) {
    if (arg1 > 3U) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) * ((M2C_UNK *) ((s8 *) &data_020c571c + (arg1 * 4)));
    func_02030590(arg0 + 0xA4, 0xFFFF);
    func_02030590(arg0 + 0xA8, 0xFFFF, M2C_FIELD(arg0, s32 *, 0xBC));
}
