/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* isBackupDone from https://github.com/ReGame-Labs/dwds_decomp src/engine/save/card_backup.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef unsigned int u32;
extern s32 (*data_021366b8[])(void);
extern s32 (*data_02136694[])(void);
struct CardBackup {
    s32 state;
    s32 result;
    s32 unk8;
    u8 unkC[4];
    s32 lockId;
    s32 (*request)(s32 offset, s32 buffer, s32 size);
    u8 unk18[4];
    s32 buffer;
    s32 stride;
    u8 unk24[0x10];
    u32 chunkCount;
    s32 unk38;
    u32 chunk;
    s32 unk40;
    s32 unk44;
    s32 offset;
    s32 unk4C;
    s32 unk50;
};
extern struct CardBackup data_0223f220;
extern s32 func_02041880(void);
s32 func_02041880(void) {
    if (data_0223f220.state == 2) {
        return 1;
    }
    return 0;
}
