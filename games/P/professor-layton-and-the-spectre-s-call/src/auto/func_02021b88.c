#include "m2c.h"

M2C_UNK func_02021bb0();                            /* extern */
extern M2C_UNK (*data_02038044)();

void func_02021b88(s32 arg0, s32 arg1, s32 arg2) {
    if (data_02038044 != NULL) {
        data_02038044(arg0, arg1, arg2);
        return;
    }
    func_02021bb0(arg0, arg1, arg2);
}
