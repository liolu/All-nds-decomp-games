#include "m2c.h"

M2C_UNK func_0200a714(M2C_UNK *);                   /* extern */
s32 func_0200a9f4(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_0200aa3c(M2C_UNK *);                   /* extern */
M2C_UNK func_0200ab48(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200ab58(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_020f09fc;
extern M2C_UNK data_020f0a1c;
extern M2C_UNK data_020f0a3c;

void func_020420e4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    u8 sp0[72];

    switch (arg0) {                                 /* irregular */
        case 0:
            func_0200a714(sp0);
            if (func_0200a9f4(sp0, &data_020f09fc) == 0) {
                return;
            }
            func_0200ab58(sp0, arg1 * 0x84, 0);
            func_0200ab48(sp0, arg2, 0x84);
            func_0200aa3c(sp0);
            return;
        case 1:
            func_0200a714(sp0);
            if (func_0200a9f4(sp0, &data_020f0a1c) == 0) {
                return;
            }
            func_0200ab58(sp0, arg1 * 0x84, 0);
            func_0200ab48(sp0, arg2, 0x84);
            func_0200aa3c(sp0);
            return;
        case 5:
            func_0200a714(sp0);
            if (func_0200a9f4(sp0, &data_020f0a3c) == 0) {
                return;
            }
            func_0200ab58(sp0, arg1 * 0x84, 0);
            func_0200ab48(sp0, arg2, 0x84);
            func_0200aa3c(sp0);
            return;
    }
}
