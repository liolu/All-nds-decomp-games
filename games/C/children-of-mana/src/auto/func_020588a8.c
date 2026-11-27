/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0205717c(M2C_UNK);
void func_02059a68(M2C_UNK);

extern s32 data_020ff090;
extern s32 data_0211af6c;
extern s32 data_0211af70;
extern s32 data_0211af74;

void func_020588a8(void) {
    if (data_020ff090 != -1) {
        func_02059a68(data_020ff090);
    }
    func_0205717c(data_0211af74);
    data_0211af74 = 0;
    data_0211af70 = 0;
    data_0211af6c = 0;
}
