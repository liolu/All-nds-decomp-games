
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern void func_020d5c40(void);
extern UnkSndAlarm data_021e3560[8];

/* func_0207ae54 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_alarm.c (license: none), reused by
 * tools/donor_match.py */
void func_020d5c40(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        data_021e3560[i].func = 0;
        data_021e3560[i].arg  = 0;
        data_021e3560[i].id   = 0;
    }
}
