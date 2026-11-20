/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020718b8 from projets/nintendogs-dachshund/src/donor/func_020718b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
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
extern Unk_022a8a10 data_0206aaf8;
extern BOOL func_02044dcc(SoundFader *fader);
extern void func_02044de4(SoundFader *fader);
extern int func_02044e04(SoundFader *fader);
extern void func_0204b0e8(int arg0, int volume, int arg2);
extern void func_02042384(void);
void func_02042480(void) {
    Unk_022a8a10 *state = &data_0206aaf8;
    SoundFader *fader;
    int volume;

    if (state->running == 0) {
        return;
    }
    if (state->unk_04 != 0) {
        return;
    }
    fader = &state->fader;
    func_02044de4(fader);
    if (state->closeWhenFaded != 0 && func_02044dcc(fader)) {
        func_02042384();
        return;
    }
    volume = func_02044e04(fader) >> 8;
    if (volume != state->appliedVolume) {
        func_0204b0e8(state->unk_20, volume, 0);
        state->appliedVolume = volume;
    }
}
