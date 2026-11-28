/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022988(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
s32 func_02022a3c(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_02022e10(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_020eec38;

u16 *func_0202ae3c(void) {
    u16 *sp0;

    if (func_02022a3c(&data_020eec38, &sp0, 0) == 0) {
        return NULL;
    }
    func_02022e10(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_02022988(&data_020eec38, sp0, 1);
    return NULL;
}
