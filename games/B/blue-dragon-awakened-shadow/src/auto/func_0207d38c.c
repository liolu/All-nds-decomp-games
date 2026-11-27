/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 OS_DisableInterrupts();                         /* extern */
M2C_UNK OS_LockMutex(M2C_UNK *);                    /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                  /* extern */
M2C_UNK OS_UnlockMutex(M2C_UNK *);                  /* extern */
s32 func_02027bb4(M2C_UNK);                         /* extern */
M2C_UNK func_020d225c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020fd400;
extern M2C_UNK data_020fd414;
extern M2C_UNK data_021102d0;
extern M2C_UNK data_02110388;

s32 func_0207d38c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;
    u32 temp_r5;

    OS_LockMutex(&data_021102d0);
    temp_r4 = OS_DisableInterrupts();
    temp_r5 = func_02027bb4(arg0) & 0xF;
    OS_UnlockMutex(&data_021102d0);
    OS_RestoreInterrupts(temp_r4);
    if (temp_r5 == 0) {
        func_020d225c(&data_020fd400, arg1);
        return 0;
    }
    if (temp_r5 <= 0xFU) {
        return *((M2C_UNK *) ((s8 *) &data_02110388 + ((temp_r5 - 1) * 4)));
    }
    func_020d225c(&data_020fd414, arg1);
    return 0;
}
