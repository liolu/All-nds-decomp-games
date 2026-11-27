/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020501cc from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_020501cc.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
extern void *func_02059234(void);
extern int func_0204e4b4(void);
extern void *func_0204e510(int i);
extern void *func_0204e588(int i);
extern int func_020581e0(int code);
extern int func_02055f1c(int a0);
extern void func_02052cec(int a0, int a1);
extern void func_020562dc(int state);
typedef struct {
    char pad[0x40];
    int field_40;
} Obj020624cc;
extern void func_0206d4d4(Obj020624cc *self, int val);
extern char *gt2AddressToString(unsigned int addr, int port, char *buf);
extern int gt2Connect(void *obj, void *out, char *addr, char *text, int a, int timeout, void *arg, int flag);
extern int OS_SNPrintf(char *buf, unsigned int len, const char *fmt, ...);
extern char data_020fa790[];
typedef struct {
    char pad[0x14];
    volatile unsigned char index;
    char pad2[0x1fb];
    unsigned int ips[32];
    unsigned short ports[32];
} Context;
void func_020529c4(Obj020624cc *obj, int action) {
    char buf[12];
    void *base;
    void *a;
    void *b;
    void *c;
    char *addr;
    int result;
    int slot;
    void *entry;
    void *ptr;
    void *d;
    unsigned int ip;
    int port;
    int ix, iy;
    if (!func_02059234()) {
        return;
    }
    if ((*(int *) ((char *) (func_02059234()) + (0x1a0))) != 7 && (*(int *) ((char *) (func_02059234()) + (0x1a0))) != 12) {
        return;
    }
    if (action != 0) {
        if (action == 5) {
            return;
        } else if (action == 6) {
            base = func_02059234();
            (*(unsigned char *) ((char *) (base) + (0xc)))++;
            if ((*(unsigned char *) ((char *) (func_02059234()) + (0xc))) > 5) {
                (*(unsigned char *) ((char *) (func_02059234()) + (0xc))) = 0;
                base                                                      = func_02059234();
                func_02055f1c(
                    (*(int *) ((char *) ((char *) base + (*(unsigned char *) ((char *) (func_02059234()) + (0x14))) * 4) +
                               (0xf4))));
                return;
            }
            OS_SNPrintf(buf, 12, data_020fa790, (*(int *) ((char *) (func_02059234()) + (0x200))));
            base   = func_02059234();
            a      = func_02059234();
            b      = func_02059234();
            c      = func_02059234();
            d      = func_02059234();
            addr   = gt2AddressToString((*(int *) ((char *) ((char *) a + ((Context *) b)->index * 4) + (0x210))),
                                        (*(unsigned short *) ((char *) ((char *) c + ((Context *) d)->index * 2) + (0x290))), 0);
            result = gt2Connect(*(void **) (*(void **) ((char *) (base) + (4))), 0, addr, buf, -1, 5000,
                                (*(void **) ((char *) (func_02059234()) + (8))), 0);
            if (result == 1) {
                func_020581e0(result);
                return;
            }
            if (result == 0) {
                return;
            }
            base = func_02059234();
            if (func_02055f1c(
                    (*(int *) ((char *) ((char *) base + (*(unsigned char *) ((char *) (func_02059234()) + (0x14))) * 4) +
                               (0xf4)))) == 0) {
                return;
            }
        } else {
            base = func_02059234();
            if (func_02055f1c(
                    (*(int *) ((char *) ((char *) base + ((*(unsigned char *) ((char *) (func_02059234()) + (0xd))) + 1) * 4) +
                               (0xf4)))) == 0) {
                return;
            }
        }
    } else {
        slot = func_0204e4b4();
        if (slot == -1) {
            func_02052cec(6, 0xfffeabc4);
            return;
        }
        ptr                   = func_0204e510(slot);
        entry                 = func_0204e588(slot);
        *(Obj020624cc **) ptr = obj;
        base                  = func_02059234();
        (*(unsigned char *) ((char *) (base) + (0xd)))++;
        (*(unsigned char *) ((char *) (entry) + (0)))  = slot;
        (*(unsigned short *) ((char *) (entry) + (2))) = 0;
        (*(int *) ((char *) (entry) + (4)))            = 0;
        base                                           = func_02059234();
        (*(unsigned char *) ((char *) (entry) + (1)))  = (*(
            unsigned char *) ((char *) ((char *) base + (*(unsigned char *) ((char *) (func_02059234()) + (0xd)))) + (0x2d0)));
        func_0206d4d4(obj, (int) entry);
        if ((*(int *) ((char *) (func_02059234()) + (0x1a0))) == 12) {
            func_020562dc(0);
            return;
        }
        func_020562dc(1);
    }
}
