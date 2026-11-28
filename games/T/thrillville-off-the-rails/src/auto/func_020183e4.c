/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020158cc(M2C_UNK);
void func_02020ad0(M2C_UNK);

extern s32 data_020dff64;
extern s32 data_020ec0e8;
extern s32 data_020ec0d8;

void func_020183e4(void) {
    if (data_020dff64 != -1) {
        func_02020ad0(data_020dff64);
    }
    func_020158cc(data_020ec0d8);
    data_020ec0d8 = 0;
    data_020ec0e8 = 0;
}
