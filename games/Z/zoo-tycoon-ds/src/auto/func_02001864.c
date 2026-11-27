/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02063864();                            /* extern */
M2C_UNK func_02064104(M2C_UNK *);                   /* extern */
M2C_UNK func_02064e8c(M2C_UNK *, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_02064fbc(s32);                         /* extern */
s32 func_0206517c(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_0206560c(s32);                         /* extern */
M2C_UNK func_02066528(M2C_UNK *);                   /* extern */
M2C_UNK func_02066648(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0207ef20;
extern s32 data_020fe258;
extern M2C_UNK data_020fe25c;
extern M2C_UNK data_020fe260;
extern M2C_UNK data_020fe264;
extern M2C_UNK data_020fe26c;
extern M2C_UNK data_020fe270;
extern M2C_UNK data_020fe2f8;

void func_02001864(void) {
    s32 temp_r0;

    func_02063864();
    temp_r0       = func_0206517c(&data_020fe2f8, 0x80000);
    data_020fe258 = temp_r0;
    func_02064e8c(&data_020fe270, &data_0207ef20, temp_r0, 0);
    func_0206560c(data_020fe258);
    func_02066648(0xA, data_020fe258);
    func_02064104(&data_020fe26c);
    func_02064104(&data_020fe260);
    func_02064104(&data_020fe25c);
    func_02066528(&data_020fe264);
    func_02064fbc(data_020fe258);
}
