#include "m2c.h"

extern s32 *data_0215c0cc;

void func_0202ab20(s32 *arg0) {
    if (data_0215c0cc == NULL) {
        *arg0         = 0;
        data_0215c0cc = arg0;
    }
}
