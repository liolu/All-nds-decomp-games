/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02058088();                            /* extern */
extern s32 data_021172cc;

void func_0203d288(s32 arg0) {
    if (data_021172cc == arg0) {
        return;
    }
    func_02058088();
    data_021172cc = arg0;
}
