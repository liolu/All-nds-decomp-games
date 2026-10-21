/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200536c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_0200536c.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(void *arg);
extern void func_0200678c(OSAlarm *alarm);
extern void func_020068c8(OSAlarm *alarm, OSTick fire_tick, OSAlarmHandler handler, void *arg);
extern int func_02006be0(void);
extern void func_02006bf4(int mask);
extern void func_020050e0(void *arg);
extern void func_02005414(void *arg);
extern void **data_021478e0[];
void func_0200536c(u32 arg0) {
    char alarm[0x2c];
    void *thread;
    int mask;

    func_0200678c((OSAlarm *) alarm);
    thread                              = data_021478e0[2][0];
    mask                                = func_02006be0();
    *(void **) ((char *) thread + 0xb0) = alarm;
    func_020068c8((OSAlarm *) alarm, (u64) arg0 * 0x82eaULL >> 6, func_02005414, &thread);
    while (thread != 0) {
        func_020050e0(0);
    }
    func_02006bf4(mask);
}
