/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_GfdDefaultAllocTexVram from https://github.com/Project-Holon/aletheia src/game/arm9/nns_gfd_vram_manager.c (license:
 * none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct NNSGfdTexVramSlot {
    u32 cur;
    u32 end;
    u32 enable;
    u32 modeFlag;
    u16 kind;
    u16 pad_12;
    u32 base;
} NNSGfdTexVramSlot;
extern u32 func_020b5b20(u32 size, u32 which);
extern NNSGfdTexVramSlot data_02110970[5];
extern NNSGfdTexVramSlot *data_02110954[7];
extern NNSGfdTexVramSlot *data_0211095c[5];
u32 func_020b5b20(u32 size, u32 which) {
    u32 addr;
    u32 ok;
    u32 n;
    NNSGfdTexVramSlot *b;
    NNSGfdTexVramSlot *a;
    int i;

    if (size == 0) {
        n = 0x10;
    } else {
        n = (size + 0xf) & ~0xfu;
    }
    if (n >= 0x7fff0u) {
        return 0;
    }

    if (which != 0) {
        for (i = 0; i < 2; i++) {
            a = data_02110954[i];
            if (a->enable == 0) {
                continue;
            }
            if (((u32) ((int *) (a))[1] - (u32) ((int *) (a))[0]) < n) {
                continue;
            }
            switch (a->kind) {
                case 0:
                    b = &data_02110970[1];
                    break;
                case 3:
                    b = &data_02110970[2];
                    break;
                default:
                    b = 0;
                    break;
            }
            if (b->enable == 0) {
                continue;
            }
            if (((u32) ((int *) (b))[1] - (u32) ((int *) (b))[0]) < (n >> 1)) {
                continue;
            }
            ok     = 1;
            addr   = a->cur;
            a->cur = addr + n;
            b->cur += n >> 1;
            addr += a->base;
            goto done;
        }
        ok = 0;
    } else {
        for (i = 0; i < 5; i++) {
            NNSGfdTexVramSlot *c = data_0211095c[i];
            if (c->enable == 0) {
                continue;
            }
            if (((u32) ((int *) (c))[1] - (u32) ((int *) (c))[0]) < n) {
                continue;
            }
            ok = 1;
            c->end -= n;
            addr = c->end + c->base;
            goto done;
        }
        ok = 0;
    }
done:
    if (ok == 0) {
        return 0;
    }
    return ((n >> 4) << 16) | ((addr << 13) >> 16) | (which << 31);
}
