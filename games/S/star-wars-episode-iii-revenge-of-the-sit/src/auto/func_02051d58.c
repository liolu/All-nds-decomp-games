/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern u8 data_020b3404;

void func_02051d58(void) {
    data_020b3404 += 1;
    if (data_020b3404 == 0) {
        data_020b3404 += 1;
    }
}
