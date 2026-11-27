#include "m2c.h"

s32 func_020b1330(s32, s32);                     /* extern */
extern s16 data_020d82b0[];

s16 func_0209d600(s32 a, s32 b) {
    s32 n;
    s32 d;
    s32 base;
    s32 flag;

    if (a > 0) {
        if (b > 0) {
            if (b > a) {
                n    = a;
                d    = b;
                base = 0;
                flag = 1;
            } else if (b < a) {
                n    = b;
                d    = a;
                base = 0x4000;
                flag = 0;
            } else {
                return 0x2000;
            }
        } else {
            if (b < 0) {
                b = -b;
                if (b < a) {
                    n    = b;
                    d    = a;
                    base = 0x4000;
                    flag = 1;
                } else if (b > a) {
                    n    = a;
                    d    = b;
                    base = 0x8000;
                    flag = 0;
                } else {
                    return 0x6000;
                }
            } else {
                return 0x4000;
            }
        }
    } else {
        if (a < 0) {
            a = -a;
            if (b < 0) {
                b = -b;
                if (b > a) {
                    n    = a;
                    d    = b;
                    base = -0x8000;
                    flag = 1;
                } else if (b < a) {
                    n    = b;
                    d    = a;
                    base = -0x4000;
                    flag = 0;
                } else {
                    return -0x6000;
                }
            } else {
                if (b > 0) {
                    if (b < a) {
                        n    = b;
                        d    = a;
                        base = -0x4000;
                        flag = 1;
                    } else if (b > a) {
                        n    = a;
                        d    = b;
                        base = 0;
                        flag = 0;
                    } else {
                        return -0x2000;
                    }
                } else {
                    return -0x4000;
                }
            }
        } else {
            if (b >= 0) {
                return 0;
            }
            return -0x8000;
        }
    }

    if (d == 0) {
        return 0;
    }
    if (flag != 0) {
        return base + data_020d82b0[func_020b1330(n, d) >> 3];
    }
    return base - data_020d82b0[func_020b1330(n, d) >> 3];
}
