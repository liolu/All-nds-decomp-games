/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02015dbc(M2C_UNK);
void func_02020ad0(M2C_UNK);

extern s32 data_020dff64;
extern s32 data_020ec0c8;
extern s32 data_020ec0cc;
extern s32 data_020ec0d0;

void func_02017864(void) {
    if (data_020dff64 != -1) {
        func_02020ad0(data_020dff64);
    }
    func_02015dbc(data_020ec0d0);
    data_020ec0d0 = 0;
    data_020ec0cc = 0;
    data_020ec0c8 = 0;
}
