/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02056bf8(M2C_UNK);
void func_02059a68(M2C_UNK);

extern s32 data_020ff090;
extern s32 data_0211af60;

void func_02058688(void) {
    if (data_020ff090 != -1) {
        func_02059a68(data_020ff090);
    }
    func_02056bf8(data_0211af60);
    data_0211af60 = 0;
}
