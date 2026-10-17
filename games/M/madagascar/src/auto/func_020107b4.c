/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02002720(M2C_UNK);
s32 func_02010450(void *);
void func_020242d4(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02024654(void);

extern M2C_UNK data_02087b44;

void func_020107b4(s32 arg0) {
    if (func_02010450((void *) arg0) == 0) {
        return;
    }
    func_020242d4(func_02024654(), (s32) &data_02087b44, 0);
    func_02002720(func_02010450((void *) arg0));
}
