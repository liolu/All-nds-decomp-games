/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010b2c(void *, void *);              /* extern */
M2C_UNK func_02010be4(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
M2C_UNK func_02014200(s32, M2C_UNK);                /* extern */
M2C_UNK func_02014208(s32, M2C_UNK);                /* extern */
void *func_0201e150(void *);                        /* extern */
extern M2C_UNK data_020fedb4;

void *func_0204b578(void *arg0, void *arg1) {
    void *var_r1;

    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fedb4;
    M2C_FIELD(arg0, void **, 0xC)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s8 *, 0x14)    = 1;
    func_02010be4(arg0 + 0x20, 0, 0, 0);
    func_02010be4(arg0 + 0x30, 0, 0, 0);
    func_02010be4(arg0 + 0x40, 0, 0, 0);
    func_02010be4(arg0 + 0x50, 0, -0x3C000, 0);
    M2C_FIELD(arg0, s32 *, 0x60) = 0x14000;
    M2C_FIELD(arg0, s32 *, 0x64) = 0x1E000;
    M2C_FIELD(arg0, s8 *, 0x68)  = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    func_02010b2c(arg0 + 0x20, func_0201e150(arg1));
    func_02010b2c(arg0 + 0x30, arg0 + 0x20);
    func_02010b2c(arg0 + 0x40, arg0 + 0x20);
    if (arg1 != NULL) {
        var_r1 = arg0;
        if (arg0 != NULL) {
            var_r1 = arg0 + 4;
        }
        M2C_FIELD(arg1, s32 *, 4)   = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
        M2C_FIELD(var_r1, s32 *, 4) = (s32) (M2C_FIELD(var_r1, s32 *, 4) + 1);
    }
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0x70) = func_02013d0c();
    func_02014208(M2C_FIELD(arg0, s32 *, 0x70), 1);
    func_02014200(M2C_FIELD(arg0, s32 *, 0x70), 1);
    return arg0;
}
