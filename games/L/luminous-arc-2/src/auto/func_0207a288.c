#include "m2c.h"

M2C_UNK func_020108c0(M2C_UNK *);                   /* extern */
s32 func_02010f68();                                /* extern */
M2C_UNK func_020cd944();                            /* extern */
u16 func_020cd9ac(s32);                             /* extern */
M2C_UNK func_020d34dc(s32);                         /* extern */
M2C_UNK func_020d38ec();                            /* extern */
extern s8 data_02151424;
extern s8 data_02151425;
extern s8 data_02151430;
extern M2C_UNK func_0207a4c0;

void func_0207a288(void *arg0) {
    func_020cd944();
    data_02151425                 = 0;
    data_02151430                 = 1;
    data_02151424                 = 1;
    M2C_FIELD(arg0, u16 *, 0x75A) = func_020cd9ac(0x2710);
    M2C_FIELD(arg0, u16 *, 0x75A) = (u16) (M2C_FIELD(arg0, u16 *, 0x75A) + func_02010f68());
    func_020d34dc(0x800361);
    func_020d38ec();
    func_020108c0(&func_0207a4c0);
    M2C_FIELD(arg0, s8 *, 0x77A) = 0;
    *(u16 *) 0x04000204 |= 0x8000;
    M2C_FIELD(arg0, u8 *, 0x779) = (u8) (M2C_FIELD(arg0, u8 *, 0x779) + 1);
}
