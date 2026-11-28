/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern u8 data_020ee38c;

void func_0202a6e8(void) {
    data_020ee38c += 1;
    if (data_020ee38c == 0) {
        data_020ee38c += 1;
    }
}
