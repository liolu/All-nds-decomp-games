/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020246e8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02047248(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204729c(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020be01c;

void func_02014d8c(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), *((M2C_UNK *) ((s8 *) &data_020be01c + (M2C_FIELD(arg0, s32 *, 0x1E4) * 4))),
                  0);
    func_0204729c(arg0, (M2C_FIELD(arg0, s32 *, 0x1E4) * 0x18) + (arg0 + 0x1F0),
                  (s32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C4), u8 *, 0x34));
    func_02047248(arg0, (M2C_FIELD(arg0, s32 *, 0x1E4) * 0x18) + (arg0 + 0x1FC), 0);
}
