#include "m2c.h"

extern s32 data_020ea698;

void func_02075294(s32 arg0) {
    data_020ea698 &= ~(1 << arg0);
}
