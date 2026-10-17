/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02002760(M2C_UNK);
void func_0200c254(M2C_UNK, M2C_UNK);
M2C_UNK func_02048fc8(M2C_UNK);

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd818;

s32 func_0200c448(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd818;
    M2C_FIELD(arg0, s32 *, 0x260)  = 0;
    M2C_FIELD(arg0, s32 *, 0x264)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x268)  = arg3;
    M2C_FIELD(arg0, s32 *, 0x26C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x270)  = 0;
    M2C_FIELD(arg0, s32 *, 0x274)  = arg4;
    M2C_FIELD(arg0, u8 *, 0x278)   = arg5;
    M2C_FIELD(arg0, u8 *, 0x279)   = arg5;
    M2C_FIELD(arg0, s32 *, 0x27C)  = 0;
    func_02002760(arg0);
    M2C_FIELD(arg0, s32 *, 4) = func_02048fc8(arg0 + 0x1D4);
    if (arg1 != 0) {
        func_0200c254(arg0, arg1);
    }
    return arg0;
}
