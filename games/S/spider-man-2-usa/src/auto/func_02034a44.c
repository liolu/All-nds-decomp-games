/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020163dc(M2C_UNK);                     /* extern */
M2C_UNK func_0203333c(void **, s32, s32);           /* extern */
M2C_UNK func_020334d4(void **);                     /* extern */
M2C_UNK func_02033664(s32, M2C_UNK);                /* extern */
M2C_UNK func_02034910(void *);                      /* extern */
extern void **data_0215d690;

void func_02034a44(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x24) == 0) {
        return;
    }
    func_020163dc(1);
    func_02033664(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x24), 0);
    func_020163dc(0);
    func_0203333c(data_0215d690, M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, s32 *, 0x54));
    func_020334d4(data_0215d690);
    func_02034910(arg0);
    M2C_FIELD(*data_0215d690, M2C_UNK(**)(), 8)(data_0215d690);
}
