/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02054d7c(M2C_UNK);
void func_02057cf0(M2C_UNK);

extern s32 data_02157c3c;
extern s32 data_0216125c;
extern s32 data_02161268;
extern s32 data_0216126c;
extern s32 data_02161270;

void func_02056088(void) {
    if (data_02157c3c != -1) {
        func_02057cf0(data_02157c3c);
    }
    func_02054d7c(data_02161268);
    data_02161270 = 0;
    data_0216126c = 0;
    data_0216125c = 0;
    data_02161268 = 0;
}
