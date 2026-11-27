/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARD_SpiWaitReadRange from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/card/card_spi_wait.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
extern s32 func_020d1548(u16 lockID);
extern s32 func_020d1580(u16 lockID);
extern void func_020dc9b4(u16 lock_id);
extern void func_020dc9a4(u16 lock_id);
extern void func_020dc9b4(u16 lock_id);
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
extern CardSpiTransfer data_021e40ac;
extern u8 data_021e40bc[];
extern u16 data_02110fdc;
extern void func_020ddc90(void);
extern u8 func_020ddd44(CardSpiTransfer *transfer);
extern void func_020dddf0(CardSpiTransfer *transfer);
extern int func_020dde94(u8 *buffer);
extern CardSpiWait data_021e40a8;
u8 func_020ddd44(CardSpiTransfer *transfer);
void func_020dddf0(CardSpiTransfer *transfer);
static inline void CardSpiSetTransfer(const u8 *input, u8 *output) {
    data_021e40a8.input  = input;
    data_021e40a8.output = output;
}
#pragma push
#pragma optimization_level 2
int func_020dde94(u8 *buffer) {
    int size;
    int i;

    CardSpiSetTransfer(data_021e40bc, buffer);
    data_021e40bc[0] = 1;
    buffer[0]        = 0;
    func_020dc9a4(data_02110fdc);
    func_020d1548(data_02110fdc);
    while ((*(REGType16v *) (0x04000000 + 0x1A0)) & 0x80) {
    }
    (*(REGType16v *) (0x04000000 + 0x1A0)) = 0xA042;
    func_020ddd44(&data_021e40ac);
    func_020ddc90();
    func_020dddf0(&data_021e40ac);
    func_020ddc90();
    size = buffer[0];
    if ((u32) size > 185) {
        size = 0;
    }
    CardSpiSetTransfer(((void *) 0), buffer);
    i         = 0;
    buffer[0] = 0;
    if (size != 0) {
        for (; i < size; i++) {
            if (i == size - 1) {
                (*(REGType16v *) (0x04000000 + 0x1A0)) = 0xA002;
            }
            func_020dddf0(&data_021e40ac);
        }
    } else {
        (*(REGType16v *) (0x04000000 + 0x1A0)) = 0xA002;
        func_020dddf0(&data_021e40ac);
    }
    for (i = 0; i < size; i++) {
        buffer[i] ^= 0xAA;
    }
    while ((*(REGType16v *) (0x04000000 + 0x1A0)) & 0x80) {
    }
    func_020d1580(data_02110fdc);
    func_020dc9b4(data_02110fdc);
    return size;
}
