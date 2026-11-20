/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcea8;
extern M2C_UNK data_020cf828;

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void func_0200342c(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcea8;
    *(M2C_S8 *) ((s8 *) arg0 + 4)  = *(M2C_S8 *) ((s8 *) arg2 + 0);

    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(&data_020cf828, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(&data_020cf828, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(&data_020cf828, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(&data_020cf828, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s8 *, 0x24)  = 0;
    M2C_FIELD(arg0, s8 *, 0x25)  = 0;
}
