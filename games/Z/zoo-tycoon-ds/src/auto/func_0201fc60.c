/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001a70();                            /* extern */

void func_0201fc60(void) {
    func_02001a70();
    *(s16 *) 0x04000208 = 0;
    *(u16 *) 0x04000210 &= ~2;
    *(u16 *) 0x04000004 &= ~0x10;
    *(s16 *) 0x04000208 = 1;
}
