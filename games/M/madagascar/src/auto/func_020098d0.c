/* compiler: 1.2/sp2p3 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_02000e60(s32, M2C_UNK);                /* extern */
M2C_UNK func_02000e90(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02009700(void *);                      /* extern */
M2C_UNK func_02024034();                            /* extern */
M2C_UNK func_020242d4(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02024348(void *, s32, M2C_UNK);        /* extern */
void *func_02024654();                              /* extern */
s32 func_020326ac(void *);                          /* extern */
s32 func_020326d4(void *);                          /* extern */
s32 func_020326fc(void *);                          /* extern */
s32 func_02032724(void *);                          /* extern */
M2C_UNK func_02046fd4(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02047020(void *, M2C_UNK *);           /* extern */
s32 func_0204706c(void *);                          /* extern */
M2C_UNK func_02047074(void *, s32);                 /* extern */
extern M2C_UNK data_0207f770;
extern M2C_UNK data_0207f794;
extern M2C_UNK data_0207f7bc;
extern s32 data_020bd46c;
extern s32 data_020bd47c;
extern M2C_UNK data_020d00a8;

void func_020098d0(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r0;

    if ((((u32) (M2C_FIELD(&data_020d00a8, u8 *, 0x11) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(&data_020d00a8, u8 *, 0x11) << 0x1F) >> 0x1F) != 0)) {
        func_02009700(arg0);
    }
    if (func_02032724(arg0) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x1F4) != 0) {
            temp_r5 = data_020bd46c;
            if (temp_r5 != 0) {
                func_020242d4(func_02024654(), temp_r5, 0);
            }
            func_02047020(arg0, &data_0207f794);
            func_02046fd4(arg0, &data_0207f7bc);
            M2C_FIELD(arg0, s8 *, 0x1F5) = 0;
            M2C_FIELD(arg0, u8 *, 0x1F4) = 0U;
        } else {
            var_r0 = M2C_FIELD(arg0, s32 *, 0x184);
            if (var_r0 < 0) {
                var_r0 = 0 - var_r0;
            }
            if (var_r0 > 0x100) {
                if ((data_020bd47c != 0) && (M2C_FIELD(func_02024654(), u8 *, 0x3C) == 0)) {
                    func_02024348(func_02024654(), data_020bd47c, 0);
                }
            } else {
                func_02024654();
                func_02024034();
            }
        }
    } else if (M2C_FIELD(arg0, u8 *, 0x1F4) == 0) {
        func_02024654();
        func_02024034();
        M2C_FIELD(arg0, u8 *, 0x1F4) = 1U;
    }
    if (func_020326fc(arg0) != 0) {
        func_02000e60(M2C_FIELD(arg0, s32 *, 0x1BC) + 0x1C, 0);
    }
    if ((M2C_FIELD(arg0, s32 *, 0x184) == 0) && (M2C_FIELD(arg0, s32 *, 0x188) == 0) &&
        ((func_020326d4(arg0) != 0) || (func_020326ac(arg0) != 0))) {
        func_02024654();
        func_02024034();
        func_02000e90(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, &data_0207f770);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x184);
    func_02047074(arg0, func_0204706c(arg0) - temp_r5_2);
}
