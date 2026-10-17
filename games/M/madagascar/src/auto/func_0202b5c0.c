/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202943c(void *, M2C_UNK);             /* extern */
s32 func_0206bd08(M2C_UNK *);                       /* extern */
extern M2C_UNK func_0202b638;

void func_0202b5c0(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = func_0206bd08(&func_0202b638);
        if (M2C_FIELD(arg0, s32 *, 0xC) == 2) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
        M2C_FIELD(arg0, s32 *, 4)     = 0;
        func_0202943c(arg0, 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x5CC) = 3;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    func_0202943c(arg0, 2);
}
