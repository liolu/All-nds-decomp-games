#include "m2c.h"

M2C_UNK func_0201c9ec(s32, s32, void *, M2C_UNK);   /* extern */
s32 func_0201cb50(void *);                          /* extern */
s8 func_020b9068();                                 /* extern */

void func_0201d090(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x34A2) = func_020b9068();
    func_0201c9ec(func_0201cb50(arg0 + 0x1C), 0x347C, arg0 + 0x34A2, 1);
}
