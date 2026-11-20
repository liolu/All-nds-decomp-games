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
extern void func_0201e32c(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_0201c1fc(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_0203e0a4;
extern u16 data_0203e098;
extern s32 data_0203e0a0;
extern s32 data_0203e09c;
void func_0201e32c(void) {
    if (!data_0203e098) {
        data_0203e098 = 1;

        data_0203e0a4.head = ((void *) 0);
        data_0203e0a4.tail = ((void *) 0);

        (void) func_0201c1fc((1UL << 2));

        data_0203e0a0 = 0;
        data_0203e09c = 0;
    }
}
