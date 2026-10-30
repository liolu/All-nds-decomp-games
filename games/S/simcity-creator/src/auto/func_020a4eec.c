#include "m2c.h"

M2C_UNK func_02002a60();                            /* extern */
M2C_UNK func_02002b94();                            /* extern */
M2C_UNK func_020a5aec(void *);                      /* extern */
M2C_UNK func_020a5b54(void *);                      /* extern */

void func_020a4eec(void *arg0, s32 arg1, s32 arg2) {
    func_02002a60();
    func_02002b94();
    func_020a5aec(arg0);
    func_020a5b54(arg0);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    *(s16 *) 0x05000400          = 0;
}
