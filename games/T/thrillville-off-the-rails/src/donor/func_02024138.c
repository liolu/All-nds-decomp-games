/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FUN_037fa96c from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa96c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
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
extern int func_02024138(OSVAlarm *alarm, s32 currentVCount, s32 currentVFrame);
int func_02024138(OSVAlarm *alarm, s32 currentVFrame, s32 currentVCount) {
    s32 delayVFrame;
    s32 delayVCount;

    delayVFrame = currentVFrame - (s32) alarm->frame;
    delayVCount = currentVCount - (s32) alarm->fire;

    if (delayVFrame < 0 || (delayVFrame == 0 && delayVCount < 0)) {
        return 0;
    }

    if (delayVCount < 0) {
        delayVCount += (192 + 71);
    }

    return (delayVCount <= alarm->delay) ? 1 : 2;
}
