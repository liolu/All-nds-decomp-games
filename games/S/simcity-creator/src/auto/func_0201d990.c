#include "m2c.h"

M2C_UNK func_0201c9ec(s32, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_0201cb50(void *);                          /* extern */
M2C_UNK func_0201f088(void *);                      /* extern */
M2C_UNK func_0201f2a8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201f320(void *);                      /* extern */
M2C_UNK func_0201f3b4(void *, M2C_UNK);             /* extern */

void func_0201d990(void *arg0, M2C_UNK arg1) {
    func_0201f2a8(arg0, 0);
    func_0201f3b4(arg0, arg1);
    func_0201f088(arg0);
    func_0201f320(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 1;
    func_0201c9ec(func_0201cb50(arg0 + 0x1C), 0, arg0 + 0x2C, 0x3480);
}
