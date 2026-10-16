/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020407f0(M2C_UNK);
void func_02044e1c(M2C_UNK);

extern s32 data_020ad394;
extern s32 data_020afe44;
extern s32 data_020afe48;
extern s32 data_020afe4c;
extern s32 data_020afe50;

void func_02041b08(void) {
    if (data_020ad394 != -1) {
        func_02044e1c(data_020ad394);
    }
    func_020407f0(data_020afe48);
    data_020afe50 = 0;
    data_020afe4c = 0;
    data_020afe44 = 0;
    data_020afe48 = 0;
}
