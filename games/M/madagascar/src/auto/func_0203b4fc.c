/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020242d4(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02024654(void);
void func_020246e8(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020c39ec;
extern M2C_UNK data_020c3a0c;

void func_0203b4fc(s32 arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), *((M2C_UNK *) ((s8 *) &data_020c39ec + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4))),
                  0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    temp_r4                       = *((M2C_UNK *) ((s8 *) &data_020c3a0c + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4)));
    if (temp_r4 == 0) {
        return;
    }
    func_020242d4(func_02024654(), temp_r4, 0);
}
