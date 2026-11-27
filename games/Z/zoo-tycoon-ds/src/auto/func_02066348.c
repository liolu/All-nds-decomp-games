/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020644dc(void *);                      /* extern */
M2C_UNK func_0206626c(void *);                      /* extern */
M2C_UNK func_0206a2e8(M2C_UNK *);                   /* extern */
M2C_UNK func_0206a35c(M2C_UNK *);                   /* extern */
M2C_UNK func_0206deb8(void *);                      /* extern */
extern M2C_UNK data_02183848;

void func_02066348(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        func_0206deb8(arg0 + 0x5C);
    }
    func_0206a35c(&data_02183848);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_020644dc(arg0);
    }
    func_0206626c(arg0);
    func_0206a2e8(&data_02183848);
}
