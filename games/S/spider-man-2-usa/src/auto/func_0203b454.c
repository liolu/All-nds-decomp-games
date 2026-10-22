/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02059f70(s32);                         /* extern */
extern s32 data_0215f068;
extern s32 data_0215f06c;

void func_0203b454(void) {
    func_02059f70(data_0215f06c);
    data_0215f06c = 0;
    func_02059f70(data_0215f068);
    data_0215f068 = 0;
}
