/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020242d4(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02024654(void);
void func_020246e8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02047074(s32, s32);

extern s32 data_020bd478;
extern M2C_UNK data_020bd4dc;
extern M2C_UNK data_020bd4fc;

void func_02009c6c(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    if (M2C_FIELD(arg0, s32 *, 0x1E8) == 4) {
        temp_r4 = data_020bd478;
        if (temp_r4 != 0) {
            func_020242d4(func_02024654(), temp_r4, 0);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), *((M2C_UNK *) ((s8 *) &data_020bd4fc + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4))),
                  0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 8;
    func_02047074(arg0, 0);
    temp_r4_2 = *((M2C_UNK *) ((s8 *) &data_020bd4dc + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4)));
    if (temp_r4_2 == 0) {
        return;
    }
    func_020242d4(func_02024654(), temp_r4_2, 0);
}
