/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PXI_InitFifo from projets/blue-dragon-awakened-shadow/src/donor/PXI_InitFifo.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_020066e0(void);
extern u32 func_020066f4(u32 state);
extern void func_02004308(u32 mask);
extern void func_02004164(u32 mask, void *handler);
extern u32 func_020042a8(u32 mask);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_0200838c(void);
extern void func_02008584(void);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern u16 data_020d2b44;
extern PxiCallback data_020d2b48[32];
void func_0200838c(void) {
    u32 enabled = func_020066e0();
    s32 i;

    if (!data_020d2b44) {
        data_020d2b44                  = 1;
        GetPxiSystemWork()->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            data_020d2b48[i] = 0;
        }
        (*(vu16 *) 0x04000184) = 0xc408;
        func_02004308(0x40000);
        func_02004164(0x40000, func_02008584);
        func_020042a8(0x40000);

        for (i = 0;; i++) {
            s32 timeout;
            s32 sync               = (*(vu16 *) 0x04000180) & 0xf;
            (*(vu16 *) 0x04000180) = sync << 8;
            if (sync == 0 && i > 4) {
                break;
            }
            timeout = 1000;
            while (((*(vu16 *) 0x04000180) & 0xf) == sync) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
                timeout--;
            }
        }
    }
    func_020066f4(enabled);
}
extern void func_02008584(void);
