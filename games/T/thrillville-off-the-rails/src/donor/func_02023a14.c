/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_SetTick from https://github.com/ntrtwl/NitroSDK libraries/os/src/os_tick.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef u16 REGType16;
typedef vu32 REGType32v;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02024624(void);
extern OSIntrMode func_02024638(OSIntrMode state);
typedef enum {
    OS_TIMER_PRESCALER_1    = (0UL << 0),
    OS_TIMER_PRESCALER_64   = (1UL << 0),
    OS_TIMER_PRESCALER_256  = (2UL << 0),
    OS_TIMER_PRESCALER_1024 = (3UL << 0)
} OSTimerPrescaler;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
static inline void OS_SetTimerCount(OSTimer id, u16 count) {
    ((void) 0);
    *((REGType16 *) ((u32) (0x04000000 + 0x100) + id * 4)) = count;
}
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    ((void) 0);
    *((REGType16 *) ((u32) (0x04000000 + 0x102) + id * 4)) = control;
}
typedef u64 OSTick;
extern void func_02023a14(OSTick count);
extern vu64 data_020ec69c;
extern BOOL data_020ec698;
void func_02023a14(OSTick count) {
    OSIntrMode prev;

    ((void) 0);
    prev = func_02024624();

    (*(REGType32v *) (0x04000000 + 0x214)) = (1UL << 3);

    data_020ec698 = 1;
    data_020ec69c = (u64) (count >> 16);

    OS_SetTimerControl(OS_TIMER_0, 0);
    OS_SetTimerCount((OSTimer) OS_TIMER_0, (u16) (count & 0xffff));
    OS_SetTimerControl(OS_TIMER_0, (u16) (0x0080 | 0x0040 | OS_TIMER_PRESCALER_64));

    (void) func_02024638(prev);
}
