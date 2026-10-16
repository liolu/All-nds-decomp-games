#include "engine.h"
#include "m2c.h"

void func_02015d54(void);
void func_02015d60(M2C_UNK, M2C_UNK);

void func_02005d30(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) arg1 >= (u32) arg2) {
        func_02015d54();
        return;
    }
    func_02015d60(arg0, arg1);
}
