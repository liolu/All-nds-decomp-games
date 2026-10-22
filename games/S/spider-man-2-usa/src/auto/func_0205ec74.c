/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02058338();                            /* extern */
s32 func_0205851c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02058544(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_021640ac;
extern M2C_UNK data_021640b0;
extern M2C_UNK func_0205ed04;

void func_0205ec74(void) {
    if (data_021640ac != 0) {
        return;
    }
    data_021640ac = 1;
    func_02058338();
    M2C_FIELD(&data_021640b0, s16 *, 0x32) = 0;
    M2C_FIELD(&data_021640b0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_021640b0, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_021640b0, s32 *, 0)    = 0;
    M2C_FIELD(&data_021640b0, s32 *, 0x10) = 0;
    M2C_FIELD(&data_021640b0, s16 *, 0x30) = 0;
    M2C_FIELD(&data_021640b0, s16 *, 0x34) = 0;
    do {

    } while (func_0205851c(6, 1) == 0);
    func_02058544(6, &func_0205ed04);
}
