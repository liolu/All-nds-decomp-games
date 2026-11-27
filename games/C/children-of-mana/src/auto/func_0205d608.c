/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205cbe0();                            /* extern */
s32 func_0205cdc4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0205cdec(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_0211b3f0;
extern M2C_UNK data_0211b3f4;
extern M2C_UNK func_0205d698;

void func_0205d608(void) {
    if (data_0211b3f0 != 0) {
        return;
    }
    data_0211b3f0 = 1;
    func_0205cbe0();
    M2C_FIELD(&data_0211b3f4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_0211b3f4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0211b3f4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_0211b3f4, s32 *, 0)    = 0;
    M2C_FIELD(&data_0211b3f4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0211b3f4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_0211b3f4, s16 *, 0x34) = 0;
    do {

    } while (func_0205cdc4(6, 1) == 0);
    func_0205cdec(6, &func_0205d698);
}
