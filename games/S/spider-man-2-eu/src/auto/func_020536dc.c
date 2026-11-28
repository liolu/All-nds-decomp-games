/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02050a88(s32, s32, s32, s32, void *, s32, s32);
extern s32 data_02163d58;
extern void func_02053728(void);

s32 func_020536dc(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02050a88(data_02163d58, arg2, arg1, arg3, (void *) func_02053728, arg0, 1);
    return 6;
}
