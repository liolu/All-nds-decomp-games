#include "engine.h"
#include "m2c.h"

void func_020613dc(M2C_UNK);
void func_02064e34(M2C_UNK);

extern s32 data_0208de88;
extern s32 data_0208e548;

void func_02062410(void) {
    if (data_0208de88 != -1) {
        func_02064e34(data_0208de88);
    }
    func_020613dc(data_0208e548);
    data_0208e548 = 0;
}
