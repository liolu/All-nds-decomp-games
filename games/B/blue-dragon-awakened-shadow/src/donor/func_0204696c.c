/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203ef50 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/jpn/main/func_0203ef50.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct {
    unsigned char _lo4 : 4;
    unsigned char field : 2;
    unsigned char _hi2 : 2;
} bf_d0c_t;
extern int SOC_GetHostID(void);
extern void func_02046c40(void *self);
extern unsigned long long OS_GetTick(void);
extern unsigned long long _ll_udiv(unsigned long long value, unsigned int k, int flag);
int func_0204696c(char *self) {
    if (SOC_GetHostID()) {
        func_02046c40(self);
        return (((bf_d0c_t *) (self + 0xd0c))->field == 1) ? 0xf : 0xd;
    } else {
        unsigned long long diff = OS_GetTick() - *(unsigned long long *) (self + 0xcb0);
        unsigned long long r    = _ll_udiv(diff << 6, 0x01ff6210, 0);
        if (r < 10) {
            return 0xc;
        }
        *(unsigned char *) (self + (*(unsigned char *) (self + 0xd13) << 2) + 0x444) = 1;
        return 0xb;
    }
}
