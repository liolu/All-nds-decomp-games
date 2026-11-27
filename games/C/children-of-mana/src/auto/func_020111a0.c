/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void **data_021152dc;

void **func_020111a0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_FIELD(*data_021152dc, M2C_UNK(**)(void **, M2C_UNK), 0x44)(data_021152dc, arg0);
    M2C_FIELD(*data_021152dc, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x84)(data_021152dc, arg1, arg2, 0);
    return data_021152dc;
}
