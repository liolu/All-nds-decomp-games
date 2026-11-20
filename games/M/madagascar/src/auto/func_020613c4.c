/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0205f9ec(M2C_UNK);
void func_02063fe0(M2C_UNK);

extern s32 data_020ced50;
extern s32 data_020db710;

void func_020613c4(void) {
    if (data_020ced50 != -1) {
        func_02063fe0(data_020ced50);
    }
    func_0205f9ec(data_020db710);
    data_020db710 = 0;
}
