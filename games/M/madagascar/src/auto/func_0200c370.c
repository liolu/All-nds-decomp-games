/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002744(void *);                      /* extern */
M2C_UNK func_0202c2b8(s32);                         /* extern */
M2C_UNK func_0204a774(void *);                      /* extern */
M2C_UNK func_0207b000();                            /* extern */
M2C_UNK func_0207b040(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd818;

void *func_0200c370(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd818;
    if (M2C_FIELD(arg0, s32 *, 0x260) != 0) {
        func_0204a774(arg0 + 4);
        func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x260));
        M2C_FIELD(arg0, s32 *, 0x260) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x27C) != 0) {
        func_0207b000();
    }
    func_02002744(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    func_0207b040(arg0);
    return arg0;
}
