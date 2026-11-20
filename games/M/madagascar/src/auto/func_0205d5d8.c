/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205aed4(void *);                      /* extern */
M2C_UNK func_0205d4fc(void *);                      /* extern */
M2C_UNK func_02062ec8(M2C_UNK *);                   /* extern */
M2C_UNK func_02062f3c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020da9a4;

void func_0205d5d8(void *arg0) {
    func_02062f3c(&data_020da9a4);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x108) << 0x1E) >> 0x1F) != 0) {
        func_0205aed4(arg0);
    }
    func_0205d4fc(arg0);
    func_02062ec8(&data_020da9a4);
}
