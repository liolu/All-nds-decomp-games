/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02056ec0(M2C_UNK);
void func_02059a68(M2C_UNK);

extern s32 data_020ff090;
extern s32 data_0211af7c;
extern s32 data_0211af88;
extern s32 data_0211af8c;
extern s32 data_0211af90;

void func_0205953c(void) {
    if (data_020ff090 != -1) {
        func_02059a68(data_020ff090);
    }
    func_02056ec0(data_0211af88);
    data_0211af90 = 0;
    data_0211af8c = 0;
    data_0211af7c = 0;
    data_0211af88 = 0;
}
