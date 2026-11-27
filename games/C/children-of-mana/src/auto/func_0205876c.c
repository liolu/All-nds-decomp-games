/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020570c4(M2C_UNK);
void func_02059a68(M2C_UNK);

extern s32 data_020ff090;
extern s32 data_0211af64;
extern s32 data_0211af68;

void func_0205876c(void) {
    if (data_020ff090 != -1) {
        func_02059a68(data_020ff090);
    }
    func_020570c4(data_0211af68);
    data_0211af68 = 0;
    data_0211af64 = 0;
}
