/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a74();                            /* extern */
M2C_UNK func_02007ab0(void *);                      /* extern */
M2C_UNK func_02010438(M2C_UNK);                     /* extern */
s32 func_0202396c(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_02024698(M2C_UNK);                     /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_02085538;

void func_02006e8c(void *arg0) {
    s32 var_r0;

    func_02007a74();
    func_02007ab0(arg0);
    func_02010438(1);
    func_02024698(1);
    var_r0 = func_0207b068(0x98);
    if (var_r0 != 0) {
        var_r0 = func_0202396c(var_r0, &data_02085538);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)    = 6;
    func_02024698(0);
    func_02010438(0);
}
