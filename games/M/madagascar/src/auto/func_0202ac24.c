/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202943c(void *, M2C_UNK);             /* extern */
s32 func_0206bb04(M2C_UNK *, s32, M2C_UNK);         /* extern */
extern M2C_UNK func_0202a4ec;

void func_0202ac24(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) =
            func_0206bb04(&func_0202a4ec, (M2C_FIELD(arg0, s32 *, 0x4A4) * 0xC0) + (s32) (arg0 + 0x24), 0);
        if (M2C_FIELD(arg0, s32 *, 0xC) == 2) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
        M2C_FIELD(arg0, s32 *, 4)     = 0;
        func_0202943c(arg0, 5);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    func_0202943c(arg0, 5);
}
