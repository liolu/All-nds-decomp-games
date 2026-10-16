/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02063468 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02063468.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(void *arg);
extern void func_02064738(OSAlarm *alarm);
extern void func_02064874(OSAlarm *alarm, OSTick fire_tick, OSAlarmHandler handler, void *arg);
extern int func_02064a3c(void);
extern void func_02064a50(int mask);
extern void func_0206329c(void *arg);
extern void func_02063510(void *arg);
extern void **data_0208e5c8[];
void func_02063468(u32 arg0) {
    char alarm[0x2c];
    void *thread;
    int mask;

    func_02064738((OSAlarm *) alarm);
    thread                              = data_0208e5c8[2][0];
    mask                                = func_02064a3c();
    *(void **) ((char *) thread + 0xb0) = alarm;
    func_02064874((OSAlarm *) alarm, (u64) arg0 * 0x82eaULL >> 6, func_02063510, &thread);
    while (thread != 0) {
        func_0206329c(0);
    }
    func_02064a50(mask);
}
