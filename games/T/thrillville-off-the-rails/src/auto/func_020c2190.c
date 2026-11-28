#include "engine.h"
#include "m2c.h"

void func_02074314(void);

extern s32 data_02103040;

void func_020c2190(void) {
    if (data_02103040 != 0) {
        func_02074314();
    }
    data_02103040 = 0;
}
