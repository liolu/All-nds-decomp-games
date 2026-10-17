/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001f74(void *);                      /* extern */
M2C_UNK func_02003c54(void *);                      /* extern */
M2C_UNK func_02005818(void *);                      /* extern */
M2C_UNK func_0202c2b8(s32);                         /* extern */
M2C_UNK func_0202cf74();                            /* extern */
M2C_UNK func_0202d110(s32);                         /* extern */
extern M2C_UNK data_020bfbe4;

void *func_020280c0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfbe4;
    func_02001f74(arg0 + 0x18);
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        func_0202cf74();
        func_0202c2b8(M2C_FIELD(arg0, s32 *, 0x4C));
    }
    func_0202d110(M2C_FIELD(arg0, s32 *, 0x14));
    func_02003c54(arg0 + 0x18);
    func_02005818(arg0);
    return arg0;
}
