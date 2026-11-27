/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_GfdAllocVram from https://github.com/Project-Holon/aletheia src/game/arm9/nns_gfd_vram_man.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned int u32;
struct Arena02146B74 {
    u32 cur;
    u32 end;
};
extern u32 func_020b5d64(u32 size, u32 flag, u32 dir);
extern struct Arena02146B74 data_021d84e4;
u32 func_020b5d64(u32 size, u32 flag, u32 dir) {
    u32 n;
    u32 off;
    u32 len;
    u32 addr = 0;
    u32 ok;
    int cur2;
    u32 top;
    u32 ln;

    if (size == 0) {
        n = 8;
    } else {
        n = (size + 7) & ~7u;
    }
    if (n >= 0x7fff8u) {
        return 0;
    }

    if (dir == 1) {
        u32 cur = data_021d84e4.cur;

        if (flag != 0) {
            off = (8 - (cur & 7)) & 7;
        } else {
            off = (16 - (cur & 0xf)) & 0xf;
        }
        len = n + off;
        if (data_021d84e4.end - cur < len) {
            goto fail1;
        }
        top = cur + len;
        if (flag != 0 && top > 0x10000u) {
            ok = 0;
            goto done;
        }
        addr              = cur + off;
        data_021d84e4.cur = data_021d84e4.cur + len;
        ok                = 1;
        goto done;
    fail1:
        ok = 0;
        goto done;
    } else {
        u32 end = data_021d84e4.end;

        if (end < n) {
            goto fail2;
        }
        if (flag != 0) {
            off = (end - n) & 7;
        } else {
            off = (end - n) & 0xf;
        }
        ln   = n + off;
        cur2 = data_021d84e4.cur;
        if (end - cur2 < ln) {
            goto fail2;
        }
        if (flag != 0 && end > 0x10000u) {
            ok = 0;
            goto done;
        }
        ok                = 1;
        data_021d84e4.end = data_021d84e4.end - ln;
        addr              = data_021d84e4.end;
        goto done;
    fail2:
        ok = 0;
        goto done;
    }

done:
    if (ok == 0) {
        return 0;
    }
    return ((n >> 3) << 16) | ((addr << 13) >> 16);
}
