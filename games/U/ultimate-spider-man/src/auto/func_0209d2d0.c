/* compiler: 1.2/sp2p3 */
/* SoundOutput_Restart from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/game/main/sound/sound_output_restart.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct SoundFader {
    s32 start;
    s32 target;
    s32 elapsed;
    s32 frames;
} SoundFader;
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
extern Unk_022a8a10 data_021550dc;
extern void func_02094ea0(const void *start, u32 size);
extern void func_02095f50(u32 value, void *dst, u32 size);
extern void func_0209b338(int arg0, int arg1, u32 alarmMask, int arg3);
void func_0209d2d0(void) {
    Unk_022a8a10 *state = &data_021550dc;
    volatile u32 zeroL;
    volatile u32 zeroR;

    if (state->running == 0) {
        return;
    }
    state->unk_18 = 0;
    zeroL         = 0;
    func_02095f50(zeroL, state->bufferL, state->bufferSize);
    zeroR = 0;
    func_02095f50(zeroR, state->bufferR, state->bufferSize);
    func_02094ea0(state->bufferL, state->bufferSize);
    func_02094ea0(state->bufferR, state->bufferSize);
    func_0209b338(state->unk_20, state->unk_24, state->alarm >= 0 ? 1 << state->alarm : 0, 0);
}
