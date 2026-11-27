/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SoundOutput_Close from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_output_close.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct SoundFader {
    s32 start;
    s32 target;
    s32 elapsed;
    s32 frames;
} SoundFader;
typedef void *OSMessage;
typedef struct OSMessageQueue {
    u16 queueSend;
    u16 queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
typedef struct Unk_022a8a10 {
    int running;
    int unk_04;
    u8 pad_08[4];
    void *bufferL;
    void *bufferR;
    u32 bufferSize;
    int unk_18;
    int unk_1c;
    int unk_20;
    int unk_24;
    int alarm;
    u8 pad_2c[0xc];
    SoundFader fader;
    int closeWhenFaded;
    int appliedVolume;
} Unk_022a8a10;
extern Unk_022a8a10 data_021837c0;
extern OSMessageQueue data_021837ac;
extern void func_0206b8d4(int arg0, int arg1, u32 alarmMask, int arg3);
extern int func_0206bc98(void);
extern void func_0206bcd8(int arg0);
extern void func_0206bd68(int arg0);
extern int func_0206a0e4(void *arg0, int arg1, int arg2);
extern void func_02063938(int arg0);
extern void func_02063954(u32 channelMask);
extern void func_02063918(int alarm);
extern void func_0206b7bc(int arg0, int arg1, int arg2, int arg3);
void func_02064724(void) {
    Unk_022a8a10 *state = &data_021837c0;
    int hasAlarm;

    if (state->running == 0) {
        return;
    }
    hasAlarm = state->alarm >= 0;
    func_0206b8d4(state->unk_20, state->unk_24, hasAlarm ? 1 << state->alarm : 0, 0);
    if (hasAlarm) {
        int saved = func_0206bc98();
        func_0206bd68(1);
        func_0206bcd8(saved);
        while (func_0206a0e4(&data_021837ac, 0, 0) != 0) {
        }
    }
    if (state->unk_24 != 0) {
        func_02063938(state->unk_24);
    }
    if (state->unk_1c != 0) {
        func_02063954(state->unk_1c);
    }
    if (hasAlarm) {
        func_02063918(state->alarm);
    }
    if (state->unk_04 == 1) {
        func_0206b7bc(0, 0, 0, 0);
    }
    state->running = 0;
}
