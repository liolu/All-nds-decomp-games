#include "m2c.h"

M2C_UNK func_0206541c(void *);                      /* extern */
M2C_UNK func_0206558c(void *);                      /* extern */
M2C_UNK func_02065788(void *);                      /* extern */
M2C_UNK func_020657ec(void *, M2C_UNK);             /* extern */
M2C_UNK func_020658a0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206664c(void *);                      /* extern */
M2C_UNK func_02066c38(void *);                      /* extern */
M2C_UNK func_0206711c(void *);                      /* extern */
M2C_UNK func_02067384(void *);                      /* extern */
M2C_UNK func_02067404(void *);                      /* extern */
M2C_UNK func_0206751c();                            /* extern */
s32 func_020b8410(s32);                             /* extern */

void func_020653a4(void *arg0, M2C_UNK arg1) {
    func_0206751c(arg0);
    func_0206558c(arg0);
    func_0206541c(arg0);
    func_02065788(arg0);
    func_020657ec(arg0, arg1);
    func_020658a0(arg0, arg1);
    func_0206664c(arg0);
    func_02066c38(arg0);
    func_0206711c(arg0);
    func_02067404(arg0);
    func_02067384(arg0);
    M2C_FIELD(arg0, s32 *, 0x434) = func_020b8410(M2C_FIELD(arg0, s32 *, 8));
}
