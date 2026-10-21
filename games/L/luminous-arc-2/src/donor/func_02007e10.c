/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_SetupChannelNoise from https://github.com/ntrtwl/NitroSDK libraries/snd/src/snd_interface.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef enum {
    SND_CHANNEL_DATASHIFT_NONE,
    SND_CHANNEL_DATASHIFT_1BIT,
    SND_CHANNEL_DATASHIFT_2BIT,
    SND_CHANNEL_DATASHIFT_4BIT
} SNDChannelDataShift;
extern void func_02007e10(int chNo, int volume, SNDChannelDataShift shift, int timer, int pan);
typedef enum SNDCommandID {
    SND_COMMAND_START_SEQ,
    SND_COMMAND_STOP_SEQ,
    SND_COMMAND_PREPARE_SEQ,
    SND_COMMAND_START_PREPARED_SEQ,
    SND_COMMAND_PAUSE_SEQ,
    SND_COMMAND_SKIP_SEQ,
    SND_COMMAND_PLAYER_PARAM,
    SND_COMMAND_TRACK_PARAM,
    SND_COMMAND_MUTE_TRACK,
    SND_COMMAND_ALLOCATABLE_CHANNEL,
    SND_COMMAND_PLAYER_LOCAL_VAR,
    SND_COMMAND_PLAYER_GLOBAL_VAR,
    SND_COMMAND_START_TIMER,
    SND_COMMAND_STOP_TIMER,
    SND_COMMAND_SETUP_CHANNEL_PCM,
    SND_COMMAND_SETUP_CHANNEL_PSG,
    SND_COMMAND_SETUP_CHANNEL_NOISE,
    SND_COMMAND_SETUP_CAPTURE,
    SND_COMMAND_SETUP_ALARM,
    SND_COMMAND_CHANNEL_TIMER,
    SND_COMMAND_CHANNEL_VOLUME,
    SND_COMMAND_CHANNEL_PAN,
    SND_COMMAND_SURROUND_DECAY,
    SND_COMMAND_MASTER_VOLUME,
    SND_COMMAND_MASTER_PAN,
    SND_COMMAND_OUTPUT_SELECTOR,
    SND_COMMAND_LOCK_CHANNEL,
    SND_COMMAND_UNLOCK_CHANNEL,
    SND_COMMAND_STOP_UNLOCKED_CHANNEL,
    SND_COMMAND_SHARED_WORK,
    SND_COMMAND_INVALIDATE_SEQ,
    SND_COMMAND_INVALIDATE_BANK,
    SND_COMMAND_INVALIDATE_WAVE,
    SND_COMMAND_READ_DRIVER_INFO
} SNDCommandID;
extern void func_02007efc(SNDCommandID command, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
void func_02007e10(int chNo, int volume, SNDChannelDataShift shift, int timer, int pan) {
    func_02007efc((SND_COMMAND_SETUP_CHANNEL_NOISE), (u32) (chNo), (u32) (shift << 8 | volume), (u32) (timer << 8 | pan),
                  (u32) (0));
}
void func_02007efc(SNDCommandID id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
