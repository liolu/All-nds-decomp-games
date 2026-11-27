/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK func_02077bd8();                            /* extern */

s32 func_02077c50(void) {
    func_02077bd8();
    do {

    } while (*(u16 *) 0x040002B0 & 0x8000);
    return *(s32 *) 0x040002B4;
}
