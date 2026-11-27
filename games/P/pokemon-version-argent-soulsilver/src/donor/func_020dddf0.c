/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARDi_SpiWaitReadByte from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/card/card_spi_wait.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
typedef u64 OSTick;
extern OSTick func_020d34b0(void);
typedef struct CardSpiTransfer {
    u32 active;
    const u8 *input;
    u8 *output;
    u32 unk_0C;
} CardSpiTransfer;
typedef struct CardSpiWait {
    u8 dummyWait;
    u8 writeWait;
    u8 readWait;
    u8 unk_03;
    u32 active;
    const u8 *input;
    u8 *output;
    u32 unk_10;
} CardSpiWait;
extern void func_020dddf0(CardSpiTransfer *transfer);
extern CardSpiWait data_021e40a8;
void func_020dddf0(CardSpiTransfer *transfer) {
    u64 start = func_020d34b0();

    while (((func_020d34b0() - start) * 64000 / 33514) < data_021e40a8.readWait) {
    }
    (*(REGType16v *) (0x04000000 + 0x1A2)) = 0;
    while ((*(REGType16v *) (0x04000000 + 0x1A0)) & 0x80) {
    }
    *transfer->output = (*(REGType16v *) (0x04000000 + 0x1A2));
    transfer->output++;
}
