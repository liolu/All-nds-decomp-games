#include "engine.h"
#include "m2c.h"

void func_02006598(M2C_UNK, M2C_UNK);

void func_02006618(s32 arg0) {
    func_02006598(0xB7, arg0);
    *(s32 *) 0x040001A4 = (*(s32 *) 0x02FFFAE0 & ~0x07000000) | 0xA1000000;
}
