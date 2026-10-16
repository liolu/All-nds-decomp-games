#include "engine.h"
#include "m2c.h"

void func_02006e94(M2C_UNK, M2C_UNK);
void func_020133a8(void);
void func_020176e4(void);
void func_0201a69c(void);

void func_02006e0c(void) {
    if (((s32) (*(u16 *) 0x02FFFFA8 & 0x8000) >> 0xF) != 0) {
        func_0201a69c();
    }
    func_02006e94(1, 1);
    func_020133a8();
    func_020176e4();
}
