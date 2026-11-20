/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071404 from projets/nintendogs-dachshund/src/donor/func_02071404.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
extern Unk_022a8a10 data_0217a6ac;
extern void func_0205beb8(int arg0, int arg1, u32 alarmMask, int arg3);
extern int func_0205c1d0(void);
extern void func_0205c1fc(int arg0);
extern void func_0205c28c(int arg0);
void func_02055a08(void) {
    Unk_022a8a10 *state = &data_0217a6ac;
    int saved;

    if (state->running == 0) {
        return;
    }
    func_0205beb8(state->unk_20, state->unk_24, state->alarm >= 0 ? 1 << state->alarm : 0, 0);
    saved = func_0205c1d0();
    func_0205c28c(1);
    func_0205c1fc(saved);
}
