#include "m2c.h"

M2C_UNK func_020ae794(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02085820(s32);                         /* extern */
extern M2C_UNK data_020e6ca8;

void func_0208a434(void *arg0) {
    func_02085820(M2C_FIELD(arg0, s32 *, 0x40));
    func_020ae794(&data_020e6ca8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
