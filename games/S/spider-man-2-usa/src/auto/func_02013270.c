/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200a4b8(s32, s32, M2C_UNK *);             /* extern */
M2C_UNK func_02013d4c();                            /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_0204afb0();                            /* extern */
M2C_UNK func_0204b2f4();                            /* extern */
M2C_UNK func_0204b3a8();                            /* extern */
M2C_UNK func_0204b44c();                            /* extern */
M2C_UNK func_0204b500();                            /* extern */
extern M2C_UNK data_02076790;
extern M2C_UNK data_02076bf0;

void func_02013270(void *arg0, s32 arg1) {
    s32 var_r0;

    func_02013d4c();
    if (arg1 != 0) {
        func_0204afb0();
        func_0204b500();
        func_0204b44c();
        var_r0 = func_0203a6cc(0x6C);
        if (var_r0 != 0) {
            var_r0 = func_0200a4b8(var_r0, M2C_FIELD(&data_02076bf0, s32 *, 4), &data_02076790);
        }
        M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
        return;
    }
    func_0204afb0();
    func_0204b3a8();
    func_0204b2f4();
}
