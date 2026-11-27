/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d268 from https://github.com/tylzars/bakubrawlers libs/nds/src/pm/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern void (*data_020e5e4c)(void);
extern int func_0200f818(void (*cb)(u32, u32 *), u32 *res);
extern int PM_ForceToPowerOff(void);
extern void func_0200f25c(void);
extern void func_0200f29c(void);
void func_0200f25c(void);
void func_0200f29c(void);
void func_0200f348(u32 v, u32 *p);
int func_0200f818(void (*cb)(u32, u32 *), u32 *arg);
int PM_ForceToPowerOff(void) {
    u32 r;
    int ret = func_0200f818(func_0200f348, &r);
    if (ret != 0) {
        return ret;
    }
    data_020e5e4c = func_0200f29c;
    data_020e5e4c();
    data_020e5e4c = func_0200f25c;
    return r;
}
