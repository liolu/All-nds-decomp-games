/* func_02004210: Ghidra draft (types translated, rarely compiles as is, never matches by itself: a reading of
   the code to start from, next to m2c's) */
#include "m2c.h"

int *func_02004210(int *param_1, u32 param_2)

{
    u32 *puVar1;
    int iVar2;
    int iVar3;

    *param_1                     = 0;
    param_1[1]                   = 0;
    *(u16 *) (param_1 + 2)       = 0;
    *(u8 *) ((int) param_1 + 10) = 0;
    puVar1                       = (u32 *) func_020015c8(param_2);
    if (puVar1 != (u32 *) 0x0) {
        *(short *) (param_1 + 2) = (short) *puVar1;
        *param_1                 = (int) puVar1;
        param_1[1]               = (int) (puVar1 + 1);
        iVar2                    = 0;
        if (0 < *(short *) (param_1 + 2)) {
            do {
                iVar3             = iVar2 + 1;
                puVar1[iVar2 + 1] = puVar1[iVar2 + 1] + (int) puVar1;
                iVar2             = iVar3;
            } while (iVar3 < *(short *) (param_1 + 2));
        }
        *(u8 *) ((int) param_1 + 10) = 1;
    }
    return param_1;
}
