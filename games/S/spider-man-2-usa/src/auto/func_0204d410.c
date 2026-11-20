/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203a6d8(); /* extern */
extern M2C_UNK data_021264b8;
extern M2C_UNK data_021264cc;

void func_0204d410(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        func_0203a6d8(arg0, &data_021264b8, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), arg2);
        return;
    }
    func_0203a6d8(arg0, &data_021264cc, M2C_FIELD(arg1, s32 *, 0), arg2);
}
