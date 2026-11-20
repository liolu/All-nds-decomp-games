/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205c8c4 from projets/children-of-mana/src/auto/func_0205c8c4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
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
extern void func_0205b1ec(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_020593dc(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_0217b07c;
extern u16 data_0217b070;
extern s32 data_0217b078;
extern s32 data_0217b074;
void func_0205b1ec(void) {
    if (!data_0217b070) {
        data_0217b070 = 1;

        data_0217b07c.head = ((void *) 0);
        data_0217b07c.tail = ((void *) 0);

        (void) func_020593dc((1UL << 2));

        data_0217b078 = 0;
        data_0217b074 = 0;
    }
}
