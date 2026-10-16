#include "engine.h"
#include "m2c.h"

void func_02006e04(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020d4d58;
extern M2C_UNK data_020d4e58;
extern M2C_UNK data_020d5258;
extern M2C_UNK data_020d5298;
extern M2C_UNK data_020d5398;
extern M2C_UNK data_020d5798;
extern M2C_UNK data_020d57d8;
extern M2C_UNK data_020d58d8;
extern M2C_UNK data_020d5cd8;

void func_02029e94(void) {
    func_02006e04(0xC0, (s32) &data_020d4e58, 0x400);
    func_02006e04(0xC0, (s32) &data_020d5398, 0x400);
    func_02006e04(0xC0, (s32) &data_020d58d8, 0x400);
    func_02006e04(0xFFFF, (s32) &data_020d4d58, 0x100);
    func_02006e04(0xFFFF, (s32) &data_020d5298, 0x100);
    func_02006e04(0xFFFF, (s32) &data_020d57d8, 0x100);
    func_02006e04(0xFFFF, (s32) &data_020d5258, 0x40);
    func_02006e04(0xFFFF, (s32) &data_020d5798, 0x40);
    func_02006e04(0xFFFF, (s32) &data_020d5cd8, 0x40);
}
