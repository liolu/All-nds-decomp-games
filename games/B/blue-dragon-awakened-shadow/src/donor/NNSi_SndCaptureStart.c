/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_SndCaptureStart from https://github.com/RonyxDumb/mkds src/arm9/0212c9d4_func_0212c9d4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern void DC_FlushRange(const void *startAddr, u32 nBytes);
typedef void (*SNDAlarmHandler)(void *);
typedef enum SNDChannelOut {
    SND_CHANNEL_OUT_MIXER,
    SND_CHANNEL_OUT_BYPASS
} SNDChannelOut;
typedef enum SNDOutput {
    SND_OUTPUT_MIXER,
    SND_OUTPUT_CHANNEL1,
    SND_OUTPUT_CHANNEL3,
    SND_OUTPUT_CHANNEL1_3
} SNDOutput;
typedef enum {
    SND_CAPTURE_0,
    SND_CAPTURE_1
} SNDCapture;
typedef enum {
    SND_CAPTURE_FORMAT_PCM16,
    SND_CAPTURE_FORMAT_PCM8
} SNDCaptureFormat;
typedef enum {
    SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_CHANNEL,
    SND_CAPTURE_IN_MIXER_L  = SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_MIXER_R  = SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_CHANNEL0 = SND_CAPTURE_IN_CHANNEL,
    SND_CAPTURE_IN_CHANNEL2 = SND_CAPTURE_IN_CHANNEL
} SNDCaptureIn;
typedef enum {
    SND_CAPTURE_OUT_NORMAL,
    SND_CAPTURE_OUT_CHANNEL_MIX,
    SND_CAPTURE_OUT_CHANNEL0_MIX = SND_CAPTURE_OUT_CHANNEL_MIX,
    SND_CAPTURE_OUT_CHANNEL2_MIX = SND_CAPTURE_OUT_CHANNEL_MIX
} SNDCaptureOut;
typedef enum {
    SND_WAVE_FORMAT_PCM8,
    SND_WAVE_FORMAT_PCM16,
    SND_WAVE_FORMAT_ADPCM,
    SND_WAVE_FORMAT_PSG,
    SND_WAVE_FORMAT_NOISE = SND_WAVE_FORMAT_PSG
} SNDWaveFormat;
typedef enum {
    SND_CHANNEL_LOOP_MANUAL,
    SND_CHANNEL_LOOP_REPEAT,
    SND_CHANNEL_LOOP_1SHOT
} SNDChannelLoop;
typedef enum {
    SND_CHANNEL_DATASHIFT_NONE,
    SND_CHANNEL_DATASHIFT_1BIT,
    SND_CHANNEL_DATASHIFT_2BIT,
    SND_CHANNEL_DATASHIFT_4BIT
} SNDChannelDataShift;
extern void SND_StartTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void SND_SetupChannelPcm(int chNo, SNDWaveFormat format, const void *dataAddr, SNDChannelLoop loop, int loopStart,
                                int dataLen, int volume, SNDChannelDataShift shift, int timer, int pan);
extern void SND_SetupCapture(SNDCapture capture, SNDCaptureFormat format, void *buffer_p, u32 length, BOOL loopFlag,
                             SNDCaptureIn in, SNDCaptureOut out);
extern void SND_SetupAlarm(int alarmNo, u32 tick, u32 period, SNDAlarmHandler handler, void *arg);
extern void SND_SetOutputSelector(SNDOutput left, SNDOutput right, SNDChannelOut channel1, SNDChannelOut channel3);
typedef enum {
    NNS_SND_CAPTURE_FORMAT_PCM16,
    NNS_SND_CAPTURE_FORMAT_PCM8
} NNSSndCaptureFormat;
typedef enum {
    NNS_SND_CAPTURE_TYPE_REVERB,
    NNS_SND_CAPTURE_TYPE_EFFECT,
    NNS_SND_CAPTURE_TYPE_SAMPLING
} NNSSndCaptureType;
typedef void (*NNSSndCaptureCallback)(void *bufferL, void *bufferR, u32 len, NNSSndCaptureFormat format, void *arg);
extern BOOL NNSi_SndCaptureStart(NNSSndCaptureType type, void *buffer0, void *buffer1, u32 bufLen, NNSSndCaptureFormat format,
                                 SNDCaptureIn input, SNDCaptureOut output, BOOL loopFlag, int sampleRate, int volume, int pan0,
                                 int pan1, int interval, NNSSndCaptureCallback callback, void *arg);
extern BOOL NNS_SndLockChannel(u32 chBitFlag);
extern BOOL NNS_SndLockCapture(u32 capBitFlag);
extern void NNS_SndUnlockCapture(u32 capBitFlag);
extern int NNS_SndAllocAlarm(void);
extern void NNS_SndFreeAlarm(int alarmNo);
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
extern void NNSi_SndFaderInit(NNSSndFader *fader);
extern void NNSi_SndFaderSet(NNSSndFader *fader, int target, int frame);
typedef struct CaptureParam {
    BOOL activeFlag;
    NNSSndCaptureType type;
    NNSSndCaptureFormat format;
    void *bufferL;
    void *bufferR;
    u32 bufLen;
    u32 blockSize;
    int curBuffer;
    u32 chBitMask;
    u32 playChBitMask;
    u32 capBitMask;
    int alarmNo;
    int interval;
    NNSSndCaptureCallback callback;
    void *callbackArg;
    NNSSndFader fader;
    BOOL fadeOutFlag;
    int volume;
} CaptureParam;
extern CaptureParam sCapParam;
extern void AlarmCallback(void *arg);
BOOL NNSi_SndCaptureStart(NNSSndCaptureType type, void *buffer0, void *buffer1, u32 bufLen, NNSSndCaptureFormat format,
                          SNDCaptureIn input, SNDCaptureOut output, BOOL loopFlag, int sampleRate, int volume, int pan0,
                          int pan1, int interval, NNSSndCaptureCallback callback, void *arg) {
    SNDWaveFormat wave_format;
    SNDCaptureFormat capture_format;
    u32 chBitMask     = 0;
    u32 playChBitMask = 0;
    u32 capBitMask    = 0;
    int alarmNo       = -1;
    unsigned int samples;
    int timer;
    u32 alarmTimer;
    u32 alarmOffset;
    BOOL is8bit;
    CaptureParam *cap = &sCapParam;

    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    DC_FlushRange(buffer0, bufLen);
    DC_FlushRange(buffer1, bufLen);

    is8bit = format == NNS_SND_CAPTURE_FORMAT_PCM8 ? 1 : 0;

    timer = (33513982 / 2) / sampleRate;
    ((void) 0);

    if (callback != ((void *) 0)) {
        ((void) 0);

        samples = bufLen;
        if (!is8bit) {
            samples >>= 1;
        }
        ((void) 0);

        timer      = ((timer + 16) & ~0x1f);
        alarmTimer = (timer >> 5) * (samples / interval);

        alarmOffset = 32;
        if (!is8bit) {
            alarmOffset >>= 1;
        }
        alarmOffset *= (timer >> 5);
    }

    wave_format    = is8bit ? SND_WAVE_FORMAT_PCM8 : SND_WAVE_FORMAT_PCM16;
    capture_format = is8bit ? SND_CAPTURE_FORMAT_PCM8 : SND_CAPTURE_FORMAT_PCM16;

    chBitMask |= (1 << 1) | (1 << 3);
    capBitMask |= (1 << SND_CAPTURE_0) | (1 << SND_CAPTURE_1);

    if (type != NNS_SND_CAPTURE_TYPE_SAMPLING) {
        playChBitMask = chBitMask;
    }

    if (callback != ((void *) 0)) {
        alarmNo = NNS_SndAllocAlarm();
        if (alarmNo < 0) {
            return 0;
        }
    }
    if (!NNS_SndLockCapture(capBitMask)) {
        if (alarmNo >= 0) {
            NNS_SndFreeAlarm(alarmNo);
        }
        return 0;
    }
    if (!NNS_SndLockChannel(chBitMask)) {
        if (alarmNo >= 0) {
            NNS_SndFreeAlarm(alarmNo);
        }
        NNS_SndUnlockCapture(capBitMask);
        return 0;
    }

    SND_SetupChannelPcm(1, wave_format, buffer0, loopFlag ? SND_CHANNEL_LOOP_REPEAT : SND_CHANNEL_LOOP_1SHOT, 0,
                        (int) (bufLen >> 2), volume, SND_CHANNEL_DATASHIFT_NONE, timer, pan0);
    SND_SetupCapture(SND_CAPTURE_0, capture_format, buffer0, bufLen >> 2, loopFlag, input, output);
    SND_SetupChannelPcm(3, wave_format, buffer1, loopFlag ? SND_CHANNEL_LOOP_REPEAT : SND_CHANNEL_LOOP_1SHOT, 0,
                        (int) (bufLen >> 2), volume, SND_CHANNEL_DATASHIFT_NONE, timer, pan1);
    SND_SetupCapture(SND_CAPTURE_1, capture_format, buffer1, bufLen >> 2, loopFlag, input, output);

    if (alarmNo >= 0) {
        SND_SetupAlarm(alarmNo, alarmTimer + alarmOffset, alarmTimer, AlarmCallback, cap);
    }

    if (type == NNS_SND_CAPTURE_TYPE_EFFECT) {
        SND_SetOutputSelector(SND_OUTPUT_CHANNEL1, SND_OUTPUT_CHANNEL3, SND_CHANNEL_OUT_BYPASS, SND_CHANNEL_OUT_BYPASS);
    }

    SND_StartTimer(playChBitMask, capBitMask, alarmNo >= 0 ? (u32) (1 << alarmNo) : 0, 0);

    cap->activeFlag = 1;
    cap->type       = type;

    cap->chBitMask     = chBitMask;
    cap->playChBitMask = playChBitMask;
    cap->capBitMask    = capBitMask;
    cap->alarmNo       = alarmNo;

    cap->format    = format;
    cap->bufferL   = buffer0;
    cap->bufferR   = buffer1;
    cap->bufLen    = bufLen;
    cap->blockSize = bufLen / interval;

    cap->curBuffer = 0;

    cap->interval    = interval;
    cap->callback    = callback;
    cap->callbackArg = arg;

    cap->volume = volume;

    NNSi_SndFaderInit(&cap->fader);
    NNSi_SndFaderSet(&cap->fader, volume << 8, 1);

    cap->fadeOutFlag = 0;

    return 1;
}
void AlarmCallback(void *arg);
