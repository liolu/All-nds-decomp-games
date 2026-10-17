/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a74();                            /* extern */
s32 func_0201ed94(s32, M2C_UNK *);                  /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bd220;

void func_02006af8(void *arg0, s32 arg1) {
    s32 var_r0;

    func_02007a74();
    M2C_FIELD(&data_020bd220, s32 *, 0x14) = arg1;
    var_r0                                 = func_0207b068(0x28);
    if (var_r0 != 0) {
        var_r0 = func_0201ed94(var_r0, &data_020bd220);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)    = 0xD;
}
