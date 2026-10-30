#include "m2c.h"

M2C_UNK func_020014fc(void *, M2C_UNK);             /* extern */
s32 func_020024f8();                                /* extern */
M2C_UNK func_02002a00(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02002eec(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020031b0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020034b0(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_0200675c();                            /* extern */
M2C_UNK func_02006e64(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_020c59f4;
extern M2C_UNK data_020c59f8;
extern M2C_UNK data_020c5a0c;
extern M2C_UNK data_020c5eac;

void func_020b4c54(s32 arg0) {
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0x1F00) | 0x100);
    M2C_FIELD((void *) 0x04000000, u16 *, 0x304)  = (u16) (M2C_FIELD((void *) 0x04000000, u16 *, 0x304) | 0x8000);
    func_020014fc((void *) 0x04000000 + 0x6C, -0x10);
    func_02002a00(0x04001050, 0x3F, 0);
    M2C_FIELD((void *) 0x04001008, u16 *, 0) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 0) & 0x43) | 0x1C00);
    M2C_FIELD((void *) 0x04001008, u16 *, 0) = (u16) (M2C_FIELD((void *) 0x04001008, u16 *, 0) & ~3);
    M2C_FIELD((void *) 0x04001008, u16 *, 2) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 2) & ~3) | 1);
    M2C_FIELD((void *) 0x04001008, u16 *, 4) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 4) & ~3) | 2);
    M2C_FIELD((void *) 0x04001008, u16 *, 6) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 6) & ~3) | 3);
    M2C_FIELD((void *) 0x04001008, s32 *, 8) = 0;
    func_02006e64(0, func_020024f8(), 0x600);
    func_02002eec(&data_020c5a0c, 0, 0x20);
    func_020034b0(&data_020c5eac, 0, 0x18E0);
    func_020031b0(*((M2C_UNK *) ((s8 *) &data_020c59f4 + (arg0 * 8))), 0x240,
                  *((M2C_UNK *) ((s8 *) &data_020c59f8 + (arg0 * 8))));
    func_0200675c();
}
