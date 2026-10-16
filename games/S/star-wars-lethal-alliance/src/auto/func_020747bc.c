/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern u8 data_020e9804;

void func_020747bc(void) {
    data_020e9804 += 1;
    if (data_020e9804 == 0) {
        data_020e9804 += 1;
    }
}
