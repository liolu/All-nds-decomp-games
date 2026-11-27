#include "m2c.h"

s32 PXI_SendWordByFifo(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */

void CARDi_SendtoPxi(M2C_UNK arg0, M2C_UNK arg1) {
    if (PXI_SendWordByFifo(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (PXI_SendWordByFifo(0xE, arg0, 0) != 0);
}
