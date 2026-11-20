#include "m2c.h"

M2C_UNK func_02058930(s32);                         /* extern */
M2C_UNK func_0205919c();                            /* extern */
s32 func_0207f640();                                /* extern */
M2C_UNK func_0207f664();                            /* extern */
M2C_UNK func_0207f990();                            /* extern */
M2C_UNK func_02083a28();                            /* extern */
M2C_UNK func_02090f0c(M2C_UNK *);                   /* extern */
M2C_UNK func_02090f2c(M2C_UNK *);                   /* extern */
M2C_UNK func_02090f4c(M2C_UNK *);                   /* extern */
M2C_UNK func_020a4b24(void *);                      /* extern */
extern M2C_UNK data_0217296c;
extern M2C_UNK func_020a4f58;
extern M2C_UNK func_020a4f5c;
extern M2C_UNK func_020a5088;

void func_020a4ba0(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r0;

    if (arg0 != 0) {
        temp_r0 = M2C_FIELD(arg2, u8 *, 0x77B);
        if ((((u32) temp_r0 < 0x27U) || ((u32) temp_r0 > 0x30U)) && (temp_r0 != 0x23)) {
            func_020a4b24(arg2);
            M2C_FIELD(arg2, u8 *, 0x77B) = 0x27U;
            return;
        }
        func_02083a28();
        return;
    }
    func_0205919c();
    if (func_0207f640() != 0) {
        func_0205919c();
        func_0207f664();
        func_0205919c();
        func_0207f990();
        M2C_FIELD(&data_0217296c, s32 *, 0xE80) = 1;
    }
    func_02058930(0xFFFE);
    M2C_FIELD(arg2, u8 *, 0x77B) = 0x26U;
    func_02090f0c(&func_020a4f58);
    func_02090f2c(&func_020a4f5c);
    func_02090f4c(&func_020a5088);
}
