/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207a260(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02075294(s32);                         /* extern */
extern M2C_UNK data_020eb0bc;

void func_02075f80(void *arg0) {
    func_02075294(M2C_FIELD(arg0, s32 *, 0x40));
    func_0207a260(&data_020eb0bc, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
