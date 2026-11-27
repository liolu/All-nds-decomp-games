/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d6554 from projets/heroes-of-mana/src/donor/func_020d6554.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 _Z20DisableIRQInterruptsv(void);
extern u32 _Z20SetIRQInterruptStatei(u32 state);
extern void _Z29AcknowledgeSpecificInterruptsj(u32 mask);
extern void _Z19SetInterruptHandlerjPKv(u32 mask, void *handler);
extern u32 _Z24EnableSpecificInterruptsj(u32 mask);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_020d6554(void);
extern void func_020d674c(void);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern u16 data_021e35c4;
extern PxiCallback data_021e35c8[32];
void func_020d6554(void) {
    u32 enabled = _Z20DisableIRQInterruptsv();
    s32 i;

    if (!data_021e35c4) {
        data_021e35c4                  = 1;
        GetPxiSystemWork()->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            data_021e35c8[i] = 0;
        }
        (*(vu16 *) 0x04000184) = 0xc408;
        _Z29AcknowledgeSpecificInterruptsj(0x40000);
        _Z19SetInterruptHandlerjPKv(0x40000, func_020d674c);
        _Z24EnableSpecificInterruptsj(0x40000);

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
    _Z20SetIRQInterruptStatei(enabled);
}
extern void func_020d674c(void);
