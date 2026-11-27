/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205781c();                                /* extern */
M2C_UNK func_02059cd0(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_0205a174(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020ff090;

void func_02058b60(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_0205781c();
    if ((data_020ff090 != -1) && (arg2 > 0x30U)) {
        func_02059cd0(data_020ff090, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0205a174(arg0, temp_ip + arg1, arg2);
}
