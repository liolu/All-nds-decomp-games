/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a74(void *);                      /* extern */
M2C_UNK func_02007ab0(void *);                      /* extern */
M2C_UNK func_02010438(M2C_UNK);                     /* extern */
s32 func_02022274();                                /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
M2C_UNK func_0202cd90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202cdb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0207b068(s32);                             /* extern */

void func_02006c08(void *arg0) {
    s32 var_r0;

    func_0202cdb8(2, 0, 1);
    func_02007a74(arg0);
    func_02007ab0(arg0);
    func_02010438(1);
    func_02024698(1);
    var_r0 = func_0207b068(0x4DC);
    if (var_r0 != 0) {
        var_r0 = func_02022274();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)    = 0xA;
    func_02024698(0);
    func_02010438(0);
    func_0202cd90(2, 1, 1);
}
