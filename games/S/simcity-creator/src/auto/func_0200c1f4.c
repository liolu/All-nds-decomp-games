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
extern int func_0200bed0(void);
extern void func_0200c5dc(u32 command);
extern PXIContext data_020d2cac;
extern PMData16 data_020d2cf0[];
u32 func_0200c1f4(u16 channel, u16 *buffer, PMCallback callback, void *callbackArgument) {
    if (func_0200bed0() == 0) {
        return 1;
    }

    data_020d2cac.callback         = callback;
    data_020d2cac.callbackArgument = callbackArgument;
    data_020d2cf0[channel].flag    = 0;
    data_020d2cf0[channel].buffer  = buffer;
    func_0200c5dc((channel & 0xff) | 0x03006500);
    return 0;
}
