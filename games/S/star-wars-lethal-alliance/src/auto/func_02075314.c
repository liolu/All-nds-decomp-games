/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_020ea694;

s32 func_02075314(s32 arg0) {
    if (arg0 & data_020ea694) {
        return 0;
    }
    data_020ea694 |= arg0;
    return 1;
}
