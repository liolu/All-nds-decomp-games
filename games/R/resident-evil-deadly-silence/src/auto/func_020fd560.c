/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0212cad8 from https://github.com/ai-tdd-labs/mkds-decomp ai/scratch/agent_0212cad8.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef struct {
    void *initialized;
    u32 unknown_04;
    u32 unknown_08;
    void *buffer_0c;
    void *buffer_10;
    u32 buffer_size_14;
    u32 unknown_18;
    u32 unknown_1c;
    u32 unknown_20;
    u32 channel_mask_24;
    u32 capture_mask_28;
    s32 timer_bit_2c;
} SoundTimerState;
extern SoundTimerState data_02157d08;
extern void func_021060a4(u32 value, void *destination, u32 size);
extern void func_021046d4(void *ptr, u32 size);
extern void func_02106854(u32 channelMask, u32 captureMask, u32 alarmMask, u32 flags);
void func_020fd560(void) {
    SoundTimerState *state = &data_02157d08;
    volatile u32 clearValue0;
    volatile u32 clearValue1;

    if (state->initialized == 0) {
        return;
    }

    state->unknown_1c = 0;
    clearValue0       = 0;
    func_021060a4(clearValue0, state->buffer_0c, state->buffer_size_14);
    clearValue1 = 0;
    func_021060a4(clearValue1, state->buffer_10, state->buffer_size_14);
    func_021046d4(state->buffer_0c, state->buffer_size_14);
    func_021046d4(state->buffer_10, state->buffer_size_14);
    func_02106854(state->channel_mask_24, state->capture_mask_28, state->timer_bit_2c >= 0 ? 1 << state->timer_bit_2c : 0, 0);
}
