/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* IsPrivateIP from https://github.com/LagoLunatic/ooe libs/GameSpy/common/gsPlatformSocket.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
inline u32 SOC_NtoHl(u32 val) {
    return ((val >> 0x18) & 0x000000FF) | ((val >> 0x08) & 0x0000FF00) | ((val << 0x08) & 0x00FF0000) |
           ((val << 0x18) & 0xFF000000);
}
typedef struct SOInAddr IN_ADDR;
extern int IsPrivateIP(IN_ADDR *addr);
int IsPrivateIP(IN_ADDR *addr) {
    int b1;
    int b2;
    unsigned int ip;

    ip = SOC_NtoHl(addr->addr);
    b1 = (int) ((ip >> 24) & 0xFF);
    b2 = (int) ((ip >> 16) & 0xFF);

    if (b1 == 10) {
        return 1;
    }

    if ((b1 == 172) && ((b2 >= 16) && (b2 <= 31))) {
        return 1;
    }

    if ((b1 == 192) && (b2 == 168)) {
        return 1;
    }

    return 0;
}
