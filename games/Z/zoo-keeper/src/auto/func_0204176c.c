/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02041660(void *);                      /* extern */
M2C_UNK func_0204b21c(u8);                          /* extern */
M2C_UNK func_0204b204(u8, s32);                     /* extern */

void func_0204176c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0204b204(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0204b21c(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02041660(arg0);
}
