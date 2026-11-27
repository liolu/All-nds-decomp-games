/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _ZN15GameMonsterData14cleanupTextureEi(M2C_UNK, M2C_UNK); /* extern */
M2C_UNK _ZN15GameMonsterData24cleanupDSSACharacterDataEi(); /* extern */
M2C_UNK _ZN17MyroomStatusScene8SetReadyEv(M2C_UNK, M2C_UNK); /* extern */

void _ZN15GameMonsterData7cleanupEi(M2C_UNK arg0, M2C_UNK arg1) {
    _ZN15GameMonsterData24cleanupDSSACharacterDataEi();
    _ZN15GameMonsterData14cleanupTextureEi(arg0, arg1);
    _ZN17MyroomStatusScene8SetReadyEv(arg0, arg1);
}
