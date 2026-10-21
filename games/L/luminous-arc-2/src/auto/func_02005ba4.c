#include "m2c.h"

s32 func_02005d3c(M2C_UNK);                         /* extern */
s32 func_02005e20(M2C_UNK);                         /* extern */
M2C_UNK func_02005ec8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02005edc(M2C_UNK, s32);                /* extern */
extern s32 data_02147b5c;

void func_02005ba4(void) {
    if (data_02147b5c != 0) {
        return;
    }
    data_02147b5c = 1;
    func_02005ec8(0, func_02005d3c(0));
    func_02005edc(0, func_02005e20(0));
    func_02005edc(2, 0);
    func_02005ec8(2, 0);
    func_02005ec8(3, func_02005d3c(3));
    func_02005edc(3, func_02005e20(3));
    func_02005ec8(4, func_02005d3c(4));
    func_02005edc(4, func_02005e20(4));
    func_02005ec8(5, func_02005d3c(5));
    func_02005edc(5, func_02005e20(5));
    func_02005ec8(6, func_02005d3c(6));
    func_02005edc(6, func_02005e20(6));
}
