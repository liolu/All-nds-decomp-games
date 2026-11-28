/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_SetPeriodicVAlarm from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa96c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
typedef int BOOL;
extern void func_020248dc();
typedef u32 OSIntrMode;
extern OSIntrMode func_02024624(void);
extern OSIntrMode func_02024638(OSIntrMode state);
extern void func_020248dc(void);
typedef void (*OSVAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSVAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_020243d4(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg);
extern s32 GX_GetVCount(void);
static inline s32 GX_GetVCount() {
    return (*(REGType16v *) (0x04000000 + 0x006));
}
extern const u16(*ctrdgi_fl_maxtime);
extern void func_02024504(OSVAlarm *alarm);
extern s32 func_020240ec(s32 vcount);
void func_02024504(OSVAlarm *alarm);
void func_020243d4(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg) {
    OSIntrMode enabled = func_02024624();
    s32 currentVCount;
    s32 currentVFrame;

    ((void) 0);
    ((void) 0);
    ((void) 0)

        ;
    if (!alarm || alarm->handler) {

        func_020248dc();
    }

    currentVCount = GX_GetVCount();
    currentVFrame = func_020240ec(currentVCount);

    alarm->period = 1;

    alarm->fire  = count;
    alarm->frame = (u32) ((count > currentVCount) ? currentVFrame : (currentVFrame + 1));

    alarm->delay = delay;

    alarm->handler = handler;
    alarm->arg     = arg;

    alarm->canceled = 0;

    func_02024504(alarm);
    (void) func_02024638(enabled);
}
s32 func_020240ec(s32 vcount);
