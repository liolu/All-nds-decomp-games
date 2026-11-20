#include "engine.h"
#include "m2c.h"

void func_02061218(M2C_UNK);
void func_02064e34(M2C_UNK);

extern s32 data_0208de88;
extern M2C_UNK data_0208e548;

void func_02062350(void) {
    if (data_0208de88 != -1) {
        func_02064e34(data_0208de88);
    }
    func_02061218(M2C_FIELD(&data_0208e548, s32 *, 8));
    M2C_FIELD(&data_0208e548, s32 *, 8) = 0;
    M2C_FIELD(&data_0208e548, s32 *, 4) = 0;
}
