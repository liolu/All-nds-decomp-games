#include "m2c.h"

M2C_UNK func_02021924(void *);                      /* extern */
M2C_UNK func_020934bc(s32);                         /* extern */
M2C_UNK func_020a5930(void *);                      /* extern */
M2C_UNK func_020a60a0();                            /* extern */
extern M2C_UNK data_020de628;

void *func_020218c8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de628;
    func_020a60a0();
    func_02021924(arg0);
    func_020934bc(M2C_FIELD(arg0, s32 *, 0x20));
    func_020934bc(M2C_FIELD(arg0, s32 *, 0x14));
    func_020a5930(arg0 + 8);
    return arg0;
}
