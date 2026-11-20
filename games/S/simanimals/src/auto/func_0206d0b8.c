#include "m2c.h"

extern s32 sCaptureLock;

extern s32 sAlarmLock;

extern s32 data_0209161c;

M2C_UNK func_020658ec(s32, M2C_UNK);

void func_0206d0b8(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020658ec(arg0, 0);
    data_0209161c &= ~arg0;
}
