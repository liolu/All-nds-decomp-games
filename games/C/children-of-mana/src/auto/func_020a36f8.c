/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209feac(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209fed0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020a0214(s32);                         /* extern */
s32 func_020a03fc(M2C_UNK, M2C_UNK);                /* extern */

void func_020a36f8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = func_020a03fc(0x29, 1);
    func_020a0214(M2C_FIELD(arg0, s32 *, 0x18));
    func_0209fed0(M2C_FIELD(arg0, s32 *, 0x18), 0xD0, 0x22);
    func_0209feac(M2C_FIELD(arg0, s32 *, 0x18), 1);
}
