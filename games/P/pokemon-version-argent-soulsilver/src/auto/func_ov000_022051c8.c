#include "m2c.h"

extern u8 data_ov000_02218d38[];
extern u8 data_ov000_02218dd4[];
extern u8 data_ov000_02218c38[];
extern u8 data_ov000_02218d3c[];
extern u8 data_ov000_02218d40[];
extern u8 data_ov000_02218d44[];
extern u8 data_ov000_02218c78[];
extern u8 data_ov000_02218c20[];
extern u8 data_ov000_02218c90[];
extern u8 data_ov000_02218c98[];
extern u8 data_ov000_02218ca0[];
extern u8 data_ov000_02218ca8[];
extern u8 data_ov000_02218cb0[];
extern u8 data_ov000_02218cb8[];
extern u8 data_ov000_02218cc0[];
extern u8 data_ov000_02218d24[];
extern u8 data_ov000_02218d48[];
extern u8 data_ov000_02218d58[];
extern u8 data_ov000_02218d68[];
extern u8 data_ov000_02218d74[];
extern u8 data_ov000_02218d80[];
extern u8 data_ov000_02218d90[];
extern u8 data_ov000_02218da0[];
extern u8 data_ov000_02218db0[];
extern u8 data_ov000_02218dc4[];

void func_020e7f30(u8 *, u8 *, s32);
s32 func_ov000_02205148(void *, u8 *, u8 *);
s32 func_ov000_02205188(void *, u8 *, u8 *);
void func_ov000_0220a8b0(void *, u8 *);

s32 func_ov000_022051c8(void *o, s32 id, s32 val) {
    u8 buf[16];
    s32 r;
    switch (id) {
        case 1800:
            if (val < 0) {
                func_ov000_0220a8b0(o, data_ov000_02218d24);
                return 2;
            }
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218c38, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1803:
            switch (val) {
                case 0x500:
                    r = func_ov000_02205148(o, data_ov000_02218c78, data_ov000_02218d3c);
                    if (r != 0) {
                        return r;
                    }
                    break;
                case 0x501:
                    r = func_ov000_02205148(o, data_ov000_02218c78, data_ov000_02218d40);
                    if (r != 0) {
                        return r;
                    }
                    break;
                case 0x502:
                    r = func_ov000_02205148(o, data_ov000_02218c78, data_ov000_02218d44);
                    if (r != 0) {
                        return r;
                    }
                    break;
                default:
                    func_ov000_0220a8b0(o, data_ov000_02218d48);
                    return 2;
            }
            break;
        case 1798:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218c20, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1804:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205188(o, data_ov000_02218d58, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1805:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205188(o, data_ov000_02218d68, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1806:
            func_020e7f30(buf, data_ov000_02218d38, val / 16);
            r = func_ov000_02205188(o, data_ov000_02218d74, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1808:
            func_020e7f30(buf, data_ov000_02218d38, val / 4);
            r = func_ov000_02205188(o, data_ov000_02218d80, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1810:
            func_020e7f30(buf, data_ov000_02218d38, val / 4);
            r = func_ov000_02205188(o, data_ov000_02218d90, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1811:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205188(o, data_ov000_02218da0, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1812:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205188(o, data_ov000_02218db0, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1813:
            if (val != 0) {
                val = 1;
            }
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205188(o, data_ov000_02218dc4, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1816:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218c90, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1817:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218c98, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1818:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218ca0, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1819:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218ca8, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1820:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218cb0, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1821:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218cb8, buf);
            if (r != 0) {
                return r;
            }
            break;
        case 1822:
            func_020e7f30(buf, data_ov000_02218d38, val);
            r = func_ov000_02205148(o, data_ov000_02218cc0, buf);
            if (r != 0) {
                return r;
            }
            break;
        default:
            func_ov000_0220a8b0(o, data_ov000_02218dd4);
            return 2;
    }
    return 0;
}
