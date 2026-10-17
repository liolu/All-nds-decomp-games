/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202cc88(void);
void func_0202cccc(void);
s32 func_0202ced0(s32);
void func_0202e45c(void);

void func_0202cdf4(s32 arg0) {
    if (func_0202ced0(arg0) == 0) {
        return;
    }
    do {
        func_0202cccc();
        func_0202e45c();
        func_0202cc88();
    } while (func_0202ced0(arg0) != 0);
}
