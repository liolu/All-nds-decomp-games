/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc154(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020bc910(s32);                         /* extern */
extern M2C_UNK data_020f5934;

void func_020bd558(void *arg0) {
    func_020bc910(M2C_FIELD(arg0, s32 *, 0x40));
    func_020bc154(&data_020f5934, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
