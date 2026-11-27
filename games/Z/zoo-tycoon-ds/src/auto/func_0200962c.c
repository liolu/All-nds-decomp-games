/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020a4734;
extern u8 data_0217ff68;
extern void *data_0217ff6c;
extern M2C_UNK data_0217ff7c;

void func_0200962c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;
    void *temp_lr;

    if ((u32) data_0217ff68 >= 0xFAU) {
        return;
    }
    temp_ip = data_0217ff68 * 0x14;
    data_0217ff68 += 1;
    temp_lr                                          = (M2C_UNK *) ((s8 *) &data_0217ff7c + temp_ip);
    M2C_FIELD(temp_lr, s32 *, 8)                     = arg2;
    M2C_FIELD(temp_lr, s32 *, 4)                     = arg1;
    *((M2C_UNK *) ((s8 *) &data_0217ff7c + temp_ip)) = arg0;
    M2C_FIELD(temp_lr, s32 *, 0xC)                   = (s32) * ((M2C_UNK *) ((s8 *) &data_020a4734 + (arg3 * 4)));
    M2C_FIELD(temp_lr, void **, 0x10)                = (void *) data_0217ff6c;
    data_0217ff6c                                    = temp_lr;
}
