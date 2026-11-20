/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071464 from projets/nintendogs-dachshund/src/donor/func_02071464.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
extern Unk_022a8a10 data_0217a6ac;
extern OSMessageQueue data_0217a698;
extern void func_0205beb8(int arg0, int arg1, u32 alarmMask, int arg3);
extern int func_0205c1d0(void);
extern void func_0205c1fc(int arg0);
extern void func_0205c28c(int arg0);
extern int func_0205a290(void *arg0, int arg1, int arg2);
extern void func_02054d3c(int arg0);
extern void func_02054d7c(u32 channelMask);
extern void func_02054cd8(int alarm);
extern void func_0205bc8c(int arg0, int arg1, int arg2, int arg3);
void func_02055a68(void) {
    Unk_022a8a10 *state = &data_0217a6ac;
    int hasAlarm;

    if (state->running == 0) {
        return;
    }
    hasAlarm = state->alarm >= 0;
    func_0205beb8(state->unk_20, state->unk_24, hasAlarm ? 1 << state->alarm : 0, 0);
    if (hasAlarm) {
        int saved = func_0205c1d0();
        func_0205c28c(1);
        func_0205c1fc(saved);
        while (func_0205a290(&data_0217a698, 0, 0) != 0) {
        }
    }
    if (state->unk_24 != 0) {
        func_02054d3c(state->unk_24);
    }
    if (state->unk_1c != 0) {
        func_02054d7c(state->unk_1c);
    }
    if (hasAlarm) {
        func_02054cd8(state->alarm);
    }
    if (state->unk_04 == 1) {
        func_0205bc8c(0, 0, 0, 0);
    }
    state->running = 0;
}
