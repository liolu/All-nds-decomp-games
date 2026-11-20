/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0205fcb4(M2C_UNK);
void func_02063fe0(M2C_UNK);

extern s32 data_020ced50;
extern s32 data_020db72c;
extern s32 data_020db738;
extern s32 data_020db73c;
extern s32 data_020db740;

void func_020618e0(void) {
    if (data_020ced50 != -1) {
        func_02063fe0(data_020ced50);
    }
    func_0205fcb4(data_020db738);
    data_020db740 = 0;
    data_020db73c = 0;
    data_020db72c = 0;
    data_020db738 = 0;
}
