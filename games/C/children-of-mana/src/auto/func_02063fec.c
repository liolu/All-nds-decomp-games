/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern void func_02063fec(void);
extern UnkSndAlarm data_0211e2e0[8];

/* func_0207ae54 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_alarm.c (license: none), reused by
 * tools/donor_match.py */
void func_02063fec(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        data_0211e2e0[i].func = 0;
        data_0211e2e0[i].arg  = 0;
        data_0211e2e0[i].id   = 0;
    }
}
