#include "m2c.h"

M2C_UNK PXI_Init();                                 /* extern */
s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
extern M2C_UNK data_021039ec;
extern M2C_UNK func_0200f41c;

void PM_Init(void) {
    s32 temp_r1;

    if (M2C_FIELD(&data_021039ec, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021039ec, u16 *, 0)    = 1U;
    M2C_FIELD(&data_021039ec, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_021039ec, s32 *, 0x20) = 0;
    PXI_Init();
    if (PXI_IsCallbackReady(8, 1) == 0) {
        do {
            WaitByLoop(0x64);
        } while (PXI_IsCallbackReady(8, 1) == 0);
    }
    PXI_SetFifoRecvCallback(8, &func_0200f41c);
    temp_r1                             = *(s32 *) 0x027FFC3C;
    M2C_FIELD(&data_021039ec, s32 *, 8) = temp_r1;
    M2C_FIELD(&data_021039ec, s32 *, 4) = temp_r1;
}
