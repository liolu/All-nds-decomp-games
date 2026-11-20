#include "m2c.h"

s32 func_02031d74();                                /* extern */
M2C_UNK func_02032350(s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

s32 func_02032608(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    func_02032350(arg1, func_02031d74(), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC),
                  M2C_FIELD(arg0, s32 *, 0x10), (s32) M2C_FIELD(arg0, s16 *, 0x14), (s32) M2C_FIELD(arg0, s16 *, 0x16));
    return 1;
}
