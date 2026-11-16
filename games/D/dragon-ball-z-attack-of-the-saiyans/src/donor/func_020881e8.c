/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_ForceToPowerOff from projets/blue-dragon-awakened-shadow/src/donor/PM_ForceToPowerOff.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
extern void (*data_0209f77c)(void);
extern int func_02088194(void (*cb)(u32, u32 *), u32 *res);
extern int func_020881e8(void);
extern void func_02087bd8(void);
extern void func_02087c18(void);
extern void func_02087bd8(void);
extern void func_02087c18(void);
extern void func_02087cc4(u32 v, u32 *p);
extern int func_02088194(void (*cb)(u32, u32 *), u32 *arg);
int func_020881e8(void) {
    u32 r;
    int ret = func_02088194(func_02087cc4, &r);
    if (ret != 0) {
        return ret;
    }
    data_0209f77c = func_02087c18;
    data_0209f77c();
    data_0209f77c = func_02087bd8;
    return r;
}
