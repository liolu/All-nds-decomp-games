#include "m2c.h"

M2C_UNK func_0202ade4(void *);                      /* extern */

void func_020314e8(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return;
    }
    if ((arg1 & 2) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
        func_0202ade4(arg0 + 4);
    }
    if ((arg1 & 1) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
        func_0202ade4(arg0 + 4);
    }
    if ((arg1 & 4) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        func_0202ade4(arg0 + 0xC);
    }
    if ((arg1 & 8) && (M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        func_0202ade4(arg0 + 0x10);
    }
    if ((arg1 & 0x10) && (M2C_FIELD(arg0, s32 *, 0) != 0)) {
        func_0202ade4(arg0);
    }
    if ((arg1 & 0x20) && (M2C_FIELD(arg0, s32 *, 8) != 0)) {
        func_0202ade4(arg0 + 8);
    }
    if ((arg1 & 0x40) && (M2C_FIELD(arg0, s32 *, 0x68) != 0)) {
        func_0202ade4(arg0 + 0x68);
    }
    if ((arg1 & 0x80) && (M2C_FIELD(arg0, s32 *, 0x6C) != 0)) {
        func_0202ade4(arg0 + 0x6C);
    }
}
