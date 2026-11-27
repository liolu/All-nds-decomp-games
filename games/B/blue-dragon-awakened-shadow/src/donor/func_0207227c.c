/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02066d44 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02066d44.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct obj_02066d44 obj_02066d44_t;
struct obj_02066d44 {
    char _0[0xa8];
    void (*cb)(unsigned int addr, unsigned short port, int arg);
    char _ac[0x58];
    unsigned int addr;
    unsigned short port;
    char _10a[0x2];
    int arg;
};
extern char data_020fcae0[];
extern void STD_TSScanf(int a0, int a1, ...);
static inline unsigned int Swap32_02066d44(unsigned int x) {
    return ((x >> 24) & 0xff) | ((x >> 8) & 0xff00) | ((x << 8) & 0xff0000) | ((x << 24) & 0xff000000);
}
void func_0207227c(obj_02066d44_t *o, char *s) {
    unsigned int addr;
    unsigned int port;
    unsigned short p;

    STD_TSScanf((int) s, (int) data_020fcae0, &addr, &port);
    p    = port;
    addr = Swap32_02066d44(addr);
    if (addr == 0 || p == 0) {
        return;
    }
    if (o->addr == addr && o->port == p) {
        return;
    }
    o->addr = addr;
    o->port = p;
    o->cb(addr, p, o->arg);
}
