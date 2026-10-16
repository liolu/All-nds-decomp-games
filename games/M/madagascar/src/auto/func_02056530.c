/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02053d24();                            /* extern */
M2C_UNK func_02060dc0();                            /* extern */

void func_02056530(void) {
    func_02060dc0();
    func_02053d24();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
