/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02015b00(M2C_UNK);
void func_02020ad0(M2C_UNK);

extern s32 data_020dff64;
extern s32 data_020ec0dc;
extern s32 data_020ec0ec;
extern s32 data_020ec0f0;
extern s32 data_020ec0f4;

void func_020186fc(void) {
    if (data_020dff64 != -1) {
        func_02020ad0(data_020dff64);
    }
    func_02015b00(data_020ec0ec);
    data_020ec0f4 = 0;
    data_020ec0f0 = 0;
    data_020ec0dc = 0;
    data_020ec0ec = 0;
}
