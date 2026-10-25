/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_0205aaa4(void *player);
void func_0205ddec(void *fader, s32 arg1, s32 arg2);
void func_0205a8f4(void *player, s32 arg1);

void func_0205ac68(u8 *param_1, s32 param_2) {
    if (param_1 == NULL) {
        return;
    }
    if (param_1[0x2C] == 0) {
        return;
    }
    if (param_2 == 0) {
        func_0205aaa4(param_1);
        return;
    }
    func_0205ddec(param_1 + 0x1C, 0, param_2);
    func_0205a8f4(param_1, 0);
    param_1[0x2C] = 2;
}
