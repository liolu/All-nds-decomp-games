/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020189b0(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_0205f638();                                /* extern */
s32 func_0205f648();                                /* extern */
M2C_UNK func_020613c4();                            /* extern */
M2C_UNK func_02061410(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02061484();                            /* extern */
M2C_UNK func_020615e4();                            /* extern */
M2C_UNK func_02061648(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020616c8();                            /* extern */
extern M2C_UNK data_020d1d30;
extern M2C_UNK data_020d21f8;

void func_0200cbb8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x140) == 3) && (func_0205f638() == 0)) {
            func_020189b0(&data_020d1d30, M2C_FIELD(arg0, s32 *, 0x4C), 0, 0x10);
            return;
        }
        func_02061484();
        func_02061410(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x140) << 0xD, 0x200);
        func_020613c4();
        return;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x140) == 3) && (func_0205f648() == 0)) {
        func_020189b0(&data_020d21f8, M2C_FIELD(arg0, s32 *, 0x4C), 0, 0x10);
        return;
    }
    func_020616c8();
    func_02061648(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x140) << 0xD, 0x200);
    func_020615e4();
}
