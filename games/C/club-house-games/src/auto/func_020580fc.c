/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_02058334(u32 arg0, s32 arg1, s32 arg2);
void func_02058278(u32 arg0, s32 arg1, s32 arg2);

void func_020580fc(u32 param_1, s32 param_2, s32 param_3) {
    if (param_2 == 0) {
        param_2 = 1;
    }
    param_2 = (param_2 + 3) & ~3;
    if (param_3 >= 0) {
        func_02058334(param_1, param_2, param_3);
        return;
    }
    func_02058278(param_1, param_2, -param_3);
}
