/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001340();                          /* extern */
s32 func_02001aac();                             /* extern */
M2C_UNK func_02002378();                      /* extern */
s32 func_02005c5c();                                /* extern */
M2C_UNK func_020189b0(); /* extern */
extern M2C_UNK data_020d1d30;
extern M2C_UNK data_020d21f8;

void func_02005ac4(void *arg0) {
    if (func_02005c5c() == 0) {
        return;
    }
    if (func_02001aac(arg0 + 0x20) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == M2C_FIELD(arg0, s32 *, 0x14)) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        func_020189b0(&data_020d1d30, func_02001340(arg0 + 0x20), 0, 0x10);
    } else {
        func_020189b0(&data_020d21f8, func_02001340(arg0 + 0x20), 0, 0x10);
    }
    func_02002378(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
}
