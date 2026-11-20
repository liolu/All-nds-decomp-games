/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9de8();                            /* extern */
extern M2C_UNK data_02124120;
extern M2C_UNK data_0215d634;

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void *func_02036374(void *arg0, s32 arg1, void *arg2) {
    func_01ff9de8();
    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_02124120;
    *(M2C_S8 *) ((s8 *) arg0 + 756) = *(M2C_S8 *) ((s8 *) arg2 + 0);

    M2C_FIELD(arg0, s32 *, 0x2FC) = (s32) M2C_FIELD(&data_0215d634, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x300) = (s32) M2C_FIELD(&data_0215d634, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x304) = (s32) M2C_FIELD(&data_0215d634, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x308) = (s32) M2C_FIELD(&data_0215d634, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x30C) = 0;
    M2C_FIELD(arg0, s32 *, 0x310) = arg1;
    return arg0;
}
