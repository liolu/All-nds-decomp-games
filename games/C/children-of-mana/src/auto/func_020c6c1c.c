/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _ZN15GameMonsterData14cleanupTextureEi(s32, s32); /* extern */
M2C_UNK _ZN15GameMonsterData24cleanupDSSACharacterDataEi(s32, s32); /* extern */

void func_020c6c1c(void *arg0) {
    s32 var_r4;

    var_r4 = 1;
    do {
        _ZN15GameMonsterData24cleanupDSSACharacterDataEi(M2C_FIELD(arg0, s32 *, 0xC), var_r4);
        _ZN15GameMonsterData14cleanupTextureEi(M2C_FIELD(arg0, s32 *, 0xC), var_r4);
        var_r4 += 1;
    } while (var_r4 <= 2);
}
