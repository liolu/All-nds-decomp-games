/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072d6c from projets/nintendogs-shiba-friends/src/donor/func_02072d6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct NNSiSndFader {
    int origin;
    int target;
    int position;
    int duration;
} NNSiSndFader;
typedef void (*NNSSndCaptureCallback)(void *left, void *right, u32 size, int format, void *argument);
typedef struct NNSiSndCapture {
    int active;
    int type;
    int format;
    u8 *left;
    u8 *right;
    u32 buffer_size;
    u32 block_size;
    int block;
    u32 locked_channels;
    u32 playing_channels;
    u32 capture_mask;
    int alarm;
    int block_count;
    NNSSndCaptureCallback callback;
    void *argument;
    NNSiSndFader fader;
    int stopping;
    int volume;
} NNSiSndCapture;
extern int func_02055b64(int type, void *left, void *right, u32 size, int format, u32 input, u32 output, u32 loop, int rate,
                         u32 volume, u32 left_pan, u32 right_pan, int blocks, NNSSndCaptureCallback callback, void *argument);
extern void func_02055fc4(int frames);
extern int func_0205607c(void *buffer, u32 size, int format, int rate, int volume);
extern NNSiSndCapture data_0217a6ac;
extern void func_0205a6d8(const void *address, u32 size);
extern void func_0205b834(u32 value, void *destination, u32 size);
static inline NNSiSndCapture *NNSi_SndCaptureGetWork(void) {
    return (NNSiSndCapture *) (u32) &data_0217a6ac;
}
static inline void NNSi_SndCaptureClear(void *buffer, u32 size) {
    volatile u32 zero = 0;
    func_0205b834(zero, buffer, size);
}
int func_0205607c(void *buffer, u32 size, int format, int rate, int volume) {
    func_02055fc4(0);
    if (NNSi_SndCaptureGetWork()->active) {
        return 0;
    }
    NNSi_SndCaptureClear(buffer, size);
    func_0205a6d8(buffer, size);
    return func_02055b64(0, buffer, (u8 *) buffer + (size >> 1), size >> 1, format, 0, 0, 1, rate, volume, 0, 127, 0, 0, 0);
}
extern void func_02055fc4(int frames);
