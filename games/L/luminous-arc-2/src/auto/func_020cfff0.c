#include "m2c.h"

M2C_UNK func_02006f34();                            /* extern */
M2C_UNK func_0200a714(M2C_UNK *);                   /* extern */
s32 func_0200a9f4(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_0200aa3c(M2C_UNK *);                   /* extern */
M2C_UNK func_0200ab48(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0200ab58(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_0213ebd0;
extern M2C_UNK data_021850c0;

M2C_UNK *func_020cfff0(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp0[72];

    func_0200a714(sp0);
    if (func_0200a9f4(sp0, *((M2C_UNK *) ((s8 *) &data_0213ebd0 + ((arg0 - 4) * 4))) + (arg1 << 5)) == 0) {
        func_02006f34();
        return NULL;
    }
    func_0200ab58(sp0, arg2 * 0x84, 0);
    func_0200ab48(sp0, &data_021850c0, 0x84);
    func_0200aa3c(sp0);
    return &data_021850c0;
}
