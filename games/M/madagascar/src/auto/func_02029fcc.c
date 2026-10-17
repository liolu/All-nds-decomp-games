/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202943c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020298cc(void *, s32 *);               /* extern */
M2C_UNK func_02029998(void *, s32 *);               /* extern */
M2C_UNK func_020647a0(s32, s32 *, M2C_UNK);         /* extern */

void func_02029fcc(void *arg0, s32 *arg1) {
    s32 sp0;

    func_020647a0(*arg1, &sp0, 4);
    switch (sp0) {                                  /* irregular */
        case 2:
            func_02029998(arg0, arg1);
            return;
        case 5:
            func_020298cc(arg0, arg1);
            return;
        case 6:
            if (M2C_FIELD(arg0, s32 *, 0x58C) == M2C_FIELD(arg0, s32 *, 0x584)) {
                M2C_FIELD(arg0, s32 *, 0x598) = 5;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x598) = 6;
            func_0202943c(arg0, 0xB);
            return;
    }
}
