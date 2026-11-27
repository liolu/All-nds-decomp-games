/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d5c8();                            /* extern */
M2C_UNK func_0209e680(void *);                      /* extern */
extern M2C_UNK data_02104a08;

void *func_0209ed94(void *arg0, s32 arg1, s32 arg2) {
    func_0209d5c8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02104a08;
    M2C_FIELD(arg0, s32 *, 0x190)  = 0;
    M2C_FIELD(arg0, s32 *, 0x194)  = 0;
    M2C_FIELD(arg0, s32 *, 0x198)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x19C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1C4)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8)  = 8;
    M2C_FIELD(arg0, s8 *, 0x1CC)   = 0;
    M2C_FIELD(arg0, s8 *, 0x1CD)   = 0;
    func_0209e680(arg0);
    M2C_FIELD(arg0, s8 *, 0x18C) = 0;
    return arg0;
}
