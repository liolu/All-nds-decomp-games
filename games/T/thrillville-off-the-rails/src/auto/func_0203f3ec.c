#include "m2c.h"

M2C_UNK func_020325f4(M2C_UNK *);                   /* extern */
M2C_UNK func_0203261c(M2C_UNK *);                   /* extern */
M2C_UNK func_02032690(M2C_UNK *, M2C_UNK *);        /* extern */
s8 func_0203f52c(void *, M2C_UNK *, M2C_UNK *, void *); /* extern */
M2C_UNK func_0203fe40(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_02061234();                                /* extern */
M2C_UNK func_02061a24(s32, void *);                 /* extern */
s32 func_020742ec(M2C_UNK);                         /* extern */
extern M2C_UNK data_020e0496;
extern M2C_UNK data_020e04a0;
extern M2C_UNK data_020e04a7;
extern M2C_UNK data_020e04ae;
extern s32 data_020f01bc;

s32 func_0203f3ec(void *arg0) {
    u8 sp24[12];
    u8 sp18[12];
    u8 spC[12];
    u8 sp0[12];
    s32 var_r0;
    s8 temp_r5;

    func_0203261c(sp24);
    func_0203fe40(sp24, 0, 0, &data_020e0496);
    func_02032690(sp18, sp24);
    temp_r5 = func_0203f52c(arg0, sp18, &data_020e04a0, arg0 + 0x30);
    func_020325f4(sp18);
    if (temp_r5 != 0) {
        M2C_FIELD(arg0, s8 *, 0x40) = 0;
        func_02032690(spC, sp24);
        M2C_FIELD(arg0, s8 *, 0x41) = func_0203f52c(arg0, spC, &data_020e04a7, arg0 + 0x38);
        func_020325f4(spC);
        func_02032690(sp0, sp24);
        M2C_FIELD(arg0, s8 *, 0x42) = func_0203f52c(arg0, sp0, &data_020e04ae, arg0 + 0x3C);
        func_020325f4(sp0);
        if (M2C_FIELD(arg0, u8 *, 0x51) != 0) {
            if (data_020f01bc == 0) {
                var_r0 = func_020742ec(0x30);
                if (var_r0 != 0) {
                    var_r0 = func_02061234();
                }
                data_020f01bc = var_r0;
            }
            func_02061a24(data_020f01bc, arg0);
        }
        func_020325f4(sp24);
        return 1;
    }
    func_020325f4(sp24);
    return 0;
}
