/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_0200dff8(void *arg0, u32 arg1, s32 arg2);
void *func_0200df8c(void *arg0, u32 arg1, s32 arg2);

void *func_0200deb4(u8 *param_1, u32 param_2, s32 param_3) {
    u8 *heap;

    heap = param_1 + 0x24;
    if (param_2 == 0) {
        param_2 = 1;
    }
    param_2 = (param_2 + 3) & ~3;
    if (param_3 >= 0) {
        return func_0200dff8(heap, param_2, param_3);
    }
    return func_0200df8c(heap, param_2, -param_3);
}
