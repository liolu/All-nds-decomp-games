/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02015d04(M2C_UNK);
void func_02020ad0(M2C_UNK);

extern s32 data_020dff64;
extern s32 data_020ec0c0;
extern s32 data_020ec0c4;

void func_02017728(void) {
    if (data_020dff64 != -1) {
        func_02020ad0(data_020dff64);
    }
    func_02015d04(data_020ec0c4);
    data_020ec0c4 = 0;
    data_020ec0c0 = 0;
}
