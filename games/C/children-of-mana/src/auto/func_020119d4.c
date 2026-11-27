/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02011ec4(M2C_UNK, M2C_UNK);
void func_02011f04(M2C_UNK);

extern u16 data_020facac;
extern s32 data_021153a8;

void func_020119d4(void) {
    u16 temp_r1;

    temp_r1       = ((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF;
    data_020facac = temp_r1;
    if (data_021153a8 == 0) {
        return;
    }
    func_02011ec4(data_021153a8, (s32) temp_r1);
    func_02011f04(data_021153a8);
}
