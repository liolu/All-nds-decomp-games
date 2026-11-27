/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARD_SpiWaitInit from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/card/card_spi_wait_init.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern s32 func_020d15c4(void);
extern u16 data_02110fdc;
extern void func_020ddcf4(void);
typedef struct CardSpiWaitHead {
    u8 dummyWait;
    u8 writeWait;
    u8 readWait;
    u8 unk_03;
    u32 active;
} CardSpiWaitHead;
extern CardSpiWaitHead data_021e40a8;
#pragma force_active on
void func_020ddcf4(void) {
    data_021e40a8.dummyWait = data_021e40a8.writeWait = data_021e40a8.readWait = 50;
    data_021e40a8.active                                                       = 1;
    if (data_02110fdc == 0xFFFD) {
        data_02110fdc = func_020d15c4();
    }
}
