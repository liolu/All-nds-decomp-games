/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063fec from projets/children-of-mana/src/auto/func_02063fec.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern void func_0205c740(void);
extern UnkSndAlarm data_0217cb60[8];
void func_0205c740(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        data_0217cb60[i].func = 0;
        data_0217cb60[i].arg  = 0;
        data_0217cb60[i].id   = 0;
    }
}
