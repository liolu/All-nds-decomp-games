/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0205cd78(M2C_UNK);

extern M2C_UNK data_02163b68;

void func_0205ce30(void) {
    if (M2C_FIELD(&data_02163b68, s32 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(&data_02163b68, s32 *, 4) != 1) {
        return;
    }
    func_0205cd78((s32) &data_02163b68);
}
