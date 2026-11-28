/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020156f8(M2C_UNK);
void func_02020ad0(M2C_UNK);

extern s32 data_020dff64;
extern s32 data_020ec0bc;

void func_02017644(void) {
    if (data_020dff64 != -1) {
        func_02020ad0(data_020dff64);
    }
    func_020156f8(data_020ec0bc);
    data_020ec0bc = 0;
}
