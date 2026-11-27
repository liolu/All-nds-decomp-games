/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_0211b48c;

void func_02060890(void) {
    data_0211b48c += 1;
    if (data_0211b48c == 0) {
        data_0211b48c += 1;
    }
}
