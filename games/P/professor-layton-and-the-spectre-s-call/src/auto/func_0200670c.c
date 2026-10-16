#include "engine.h"
#include "m2c.h"

M2C_UNK func_020066a4(void);
void func_0200676c(void);
void func_02015504(M2C_UNK);
M2C_UNK func_02016b78(void);

extern s32 data_020349d0;

void func_0200670c(s32 arg0) {
    if (!(arg0 & func_020066a4())) {
        return;
    }
    func_0200676c();
    if (func_020066a4() & 0x20) {
        return;
    }
    do {
        if ((data_020349d0 != 0) && (func_02016b78() != 0)) {
            func_02015504(1);
        }
    } while (!(func_020066a4() & 0x20));
}
