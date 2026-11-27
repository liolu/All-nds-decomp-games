/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_ReadRegisterAsync from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_ReadRegisterAsync.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef void (*PMCallback)(u32 result, void *argument);
typedef struct PMData16 {
    u16 flag;
    u16 padding;
    u16 *buffer;
} PMData16;
typedef struct PXIContext {
    unsigned char reserved_00[0x1c];
    u32 locked;
    PMCallback callback;
    void *callbackArgument;
} PXIContext;
extern int func_020dad24(void);
extern void func_020db410(u32 command);
extern PXIContext data_021e372c;
extern PMData16 data_021e3770[];
u32 func_020db048(u16 channel, u16 *buffer, PMCallback callback, void *callbackArgument) {
    if (func_020dad24() == 0) {
        return 1;
    }

    data_021e372c.callback         = callback;
    data_021e372c.callbackArgument = callbackArgument;
    data_021e3770[channel].flag    = 0;
    data_021e3770[channel].buffer  = buffer;
    func_020db410((channel & 0xff) | 0x03006500);
    return 0;
}
