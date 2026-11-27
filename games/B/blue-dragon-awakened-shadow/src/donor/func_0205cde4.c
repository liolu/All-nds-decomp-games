/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02053774 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02053774.legacy_sp3.c (license: MIT),
 * reused by tools/donor_match.py */
typedef struct {
    int x0;
    char pad[0x4c];
    unsigned int x50;
    int x54;
} State;
extern State data_0210f19c;
extern int __GSIACResult;
extern int func_0205cd2c(signed char *name, int len, unsigned char *hdr, int *out);
extern void func_0205cbe4(void);
extern int recvfrom(int a, int b, int c, int d, unsigned char *e, int *f);
extern int closesocket(int unused0);
extern int CanReceiveOnSocket(int a0);
extern int current_time(void);
int func_0205cde4(void) {
    signed char name[0x40];
    unsigned char hdr[8];
    int size = 8;
    int flags;
    if (data_0210f19c.x0 == -1) {
        __GSIACResult = 1;
        return 1;
    }
    if (CanReceiveOnSocket(data_0210f19c.x0)) {
        int len = recvfrom(data_0210f19c.x0, (int) name, 0x40, 0, hdr, &size);
        if (func_0205cd2c(name, len, hdr, &flags) == 0) {
            closesocket(data_0210f19c.x0);
            if (flags & 1) {
                __GSIACResult = 2;
            } else if (flags & 2) {
                __GSIACResult = 3;
            } else {
                __GSIACResult = 1;
            }
            return __GSIACResult;
        }
    }
    if ((unsigned int) current_time() > data_0210f19c.x50 + 0x7d0) {
        if (data_0210f19c.x54 == 1) {
            closesocket(data_0210f19c.x0);
            __GSIACResult = 1;
            return 1;
        }
        func_0205cbe4();
        data_0210f19c.x54++;
    }
    return 0;
}
