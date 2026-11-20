/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01fff5f0(void);
void func_020c5b4c(M2C_UNK);
M2C_UNK func_020c5c00(M2C_UNK);
M2C_UNK func_020c5d7c(void);
void func_020c80ec(void);
void func_020c8180(M2C_UNK);
void func_020c8470(M2C_UNK);
void func_020cf5ac(M2C_UNK);

void func_020c8100(s32 arg0) {
    if (*(u16 *) 0x027FFC40 == 2) {
        func_020c80ec();
    }
    func_020cf5ac((s32) (u16) func_020c5d7c());
    func_020c8470(0);
    func_020c8470(1);
    func_020c8470(2);
    func_020c8470(3);
    func_020c5c00(0x40000);
    func_020c5b4c(-1);
    *(s32 *) 0x027FFC20 = arg0;
    func_020c8180(0x10);
    func_01fff5f0();
}
