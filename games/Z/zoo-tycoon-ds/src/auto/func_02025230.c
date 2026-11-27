/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200557c(void *, void *, M2C_UNK *);   /* extern */
M2C_UNK func_0200560c(void *);                      /* extern */
M2C_UNK func_02005644();                            /* extern */
extern M2C_UNK data_020a4164;
extern M2C_UNK data_020a4180;
extern M2C_UNK data_020a41a4;
extern M2C_UNK data_020a41c8;
extern M2C_UNK data_020a41e4;
extern M2C_UNK data_020a4200;

void func_02025230(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xB0) = 0;
    M2C_FIELD(arg0, s8 *, 0xB2)  = 0;
    func_02005644(arg0);
    func_0200557c(arg0, arg0 + 8, &data_020a4164);
    func_0200557c(arg0, arg0 + 0x38, &data_020a41a4);
    func_0200557c(arg0, arg0 + 0x60, &data_020a41e4);
    func_0200557c(arg0, arg0 + 0x20, &data_020a4180);
    func_0200557c(arg0, arg0 + 0x4C, &data_020a41c8);
    func_0200557c(arg0, arg0 + 0x88, &data_020a4200);
    func_0200560c(arg0);
    M2C_FIELD(arg0, s16 *, 0x10) = -0x1000;
    *(s16 *) 0x04000050          = 0xFF;
    *(s16 *) 0x04000054          = 0x10;
    M2C_FIELD(arg0, s16 *, 0x28) = -0x1000;
    *(s16 *) 0x04001050          = 0xFF;
    *(s16 *) 0x04001054          = 0x10;
    M2C_FIELD(arg0, s16 *, 0x40) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x54) = 0x1000;
    M2C_FIELD(arg0, s8 *, 0xB3)  = 0;
    M2C_FIELD(arg0, s8 *, 0xBB)  = 0;
    M2C_FIELD(arg0, s8 *, 0xB7)  = 0;
    M2C_FIELD(arg0, s8 *, 0xB8)  = 0;
    M2C_FIELD(arg0, s8 *, 0xB9)  = 0;
    M2C_FIELD(arg0, s8 *, 0xBA)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0x3F;
}
