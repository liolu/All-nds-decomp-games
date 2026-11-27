/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209eefc from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/dwc_nvram.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
typedef enum {
    PXI_FIFO_TAG_EX = 0,
    PXI_FIFO_TAG_USER_0,
    PXI_FIFO_TAG_USER_1,
    PXI_FIFO_TAG_SYSTEM,
    PXI_FIFO_TAG_NVRAM,
    PXI_FIFO_TAG_RTC,
    PXI_FIFO_TAG_TOUCHPANEL,
    PXI_FIFO_TAG_SOUND,
    PXI_FIFO_TAG_PM,
    PXI_FIFO_TAG_MIC,
    PXI_FIFO_TAG_WM,
    PXI_FIFO_TAG_FS,
    PXI_FIFO_TAG_OS,
    PXI_FIFO_TAG_CTRDG,
    PXI_FIFO_TAG_CARD,
    PXI_FIFO_TAG_WVR,
    PXI_FIFO_TAG_CTRDG_Ex,
    PXI_MAX_FIFO_TAG = 32
} PXIFifoTag;
typedef struct DwcBmNvramState {
    volatile u16 error;
    u16 pad;
    volatile s32 ready;
    u32 backupAddress;
} DwcBmNvramState;
extern DwcBmNvramState data_021d43e8;
extern u16 func_0209eefc(PXIFifoTag tag, u32 data, BOOL err);
u16 func_0209eefc(PXIFifoTag tag, u32 data, BOOL err) {
    data_021d43e8.error = data & 0xFF;
    data_021d43e8.ready = 1;
    if (err) {
        data_021d43e8.error = 0xFF;
    }
    return data_021d43e8.error;
}
