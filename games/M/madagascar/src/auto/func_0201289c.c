/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206f2a0(M2C_UNK *);                   /* extern */
M2C_UNK func_02070784();                            /* extern */
extern M2C_UNK data_020bdd8c;

void func_0201289c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 1) == 1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 1) = 1U;
    func_0206f2a0(&data_020bdd8c);
    M2C_FIELD(arg0, s8 *, 0x48) = 1;
    func_02070784();
}
