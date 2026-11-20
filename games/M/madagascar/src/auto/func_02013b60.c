/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002760(void *);                      /* extern */
M2C_UNK func_0202bb14(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202bdd4(s32, M2C_UNK *);              /* extern */
void *func_0202be38();                              /* extern */
M2C_UNK func_0202be48();                            /* extern */
s32 func_0202cb08();                                /* extern */
M2C_UNK func_0206470c(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bddd4;
extern void *data_020d0224;
extern M2C_UNK func_02013c80;
extern M2C_UNK func_02013c9c;

void *func_02013b60(void *arg0, s32 *arg1, M2C_UNK (*arg2)(void *), s32 arg3, M2C_UNK (*arg4)(void *), s32 arg5, s32 arg6,
                    s32 arg7, s32 arg8) {
    s32 temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0)              = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0)              = &data_020bddd4;
    M2C_FIELD(arg0, s32 *, 0x10)                = 0;
    M2C_FIELD(arg0, s8 *, 0x194)                = 0;
    M2C_FIELD(arg0, s32 *, 0x198)               = 0;
    M2C_FIELD(arg0, s8 *, 0x19C)                = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0)               = arg8;
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1A4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1A8)               = arg3;
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1AC) = arg4;
    M2C_FIELD(arg0, s32 *, 0x1B0)               = arg5;
    M2C_FIELD(arg0, s32 *, 0x1B4)               = arg6;
    M2C_FIELD(arg0, s32 *, 0x1B8)               = arg7;
    func_0202be48();
    M2C_FIELD(arg0, s32 *, 4) = func_0202cb08();
    func_0202bdd4(M2C_FIELD(arg0, s32 *, 4), &func_02013c9c);
    func_0202bb14(func_0202be38(), 1);
    temp_r0 = *arg1;
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 8)   = 1;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else if (temp_r0 == 1) {
        M2C_FIELD(arg0, s32 *, 8)   = 2;
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
    func_02002760(arg0);
    data_020d0224                                 = arg0;
    M2C_FIELD(func_0202be38(), M2C_UNK **, 0x570) = &func_02013c80;
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1AC)(arg0 + 0x90);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x1A4)(arg0 + 0x8C);
    func_0206470c(arg0 + 0x114, 0, 0x40);
    return arg0;
}
