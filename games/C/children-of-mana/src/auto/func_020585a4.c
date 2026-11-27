/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02056b6c(M2C_UNK);
void func_02059a68(M2C_UNK);

extern s32 data_020ff090;
extern s32 data_0211af78;

void func_020585a4(void) {
    if (data_020ff090 != -1) {
        func_02059a68(data_020ff090);
    }
    func_02056b6c(data_0211af78);
    data_0211af78 = 0;
}
