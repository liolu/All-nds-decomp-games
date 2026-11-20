/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202e760(M2C_UNK);
void func_0202e804(M2C_UNK);
void func_0202e84c(M2C_UNK);

void func_0202e8f0(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1E0);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_0202e84c(arg0);
            return;
        case 1:
            func_0202e804(arg0);
            return;
        case 2:
            func_0202e760(arg0);
            return;
    }
}
