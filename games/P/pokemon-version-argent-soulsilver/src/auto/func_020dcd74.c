/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200ea14 from https://github.com/tylzars/bakubrawlers libs/nds/src/card/card_common.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef volatile unsigned int vu32;
typedef struct CardArg {
    u32 result;
    u32 id;
    u32 f08, f0c, f10, f14;
    u32 f18, f1c, f20, f24, f28, f2c;
    u32 f30, f34, f38, f3c, f40, f44, f48, f4c, f50;
    u8 f54;
    u8 pad55[3];
    u32 f58;
    u32 f5c;
} CardArg;
typedef struct {
    u8 b[0xc0];
} CardThread;
typedef struct {
    u32 a, b;
} CardQueue;
typedef struct CardCommon {
    CardArg *arg;
    u32 f04;
    vu32 owner;
    vu32 lockCount;
    CardQueue lockQueue;
    u32 lockTarget;
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    u32 cmd;
    u32 retry;
    u32 mode;
    void (*callback)(void *);
    void *cbArg;
    void (*task)(struct CardCommon *);
    CardThread thread;
    void *curThread;
    u32 priority;
    CardQueue queue;
    vu32 f114;
    u32 f118, f11c;
    u8 buf[0x200];
} CardCommon;
extern u32 _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(u32);
extern void func_020d1ecc(void *queue);
extern void func_020d1f34(void *thread);
extern void func_02000b9c(const void *);
extern void func_020d4a50(const void *src, void *dst, u32 n);
extern void _Z24InvalidateDataCacheRangePKvj(void *p, u32 n);
extern void func_020d2894(void *p, u32 n);
extern void _Z16DrainWriteBufferv(void);
extern u8 data_021e3840[];
extern void func_020dcd74(CardCommon *c);
extern u32 func_020dd04c(void);
extern int func_020dd950(CardCommon *c, u32 cmd, int tries);
void func_020dcd74(CardCommon *c) {
    u32 mode;
    u32 chunk;
    u32 buf;
    u32 cmd;
    u32 len;
    u32 retry;
    u32 e;
    void *cbarg;
    void (*fn)(void *);
    cmd   = c->cmd;
    mode  = c->mode;
    retry = c->retry;
    chunk = 0x100;
    func_02000b9c((void *) 0x2000c70);
    if (cmd == 0xb) {
        chunk = func_020dd04c();
    } else if (cmd == 0xf) {
        chunk = ((CardCommon *) data_021e3840)->arg->f20;
    }
    buf = (u32) c->buf;
    do {
        len = c->len;
        if (chunk < len) {
            len = chunk;
        }
        c->arg->f14 = len;
        if (c->f114 & 0x40) {
            c->f114 &= ~0x40;
            c->arg->result = 7;
            break;
        }
        switch (mode) {
            case 0:
                _Z24InvalidateDataCacheRangePKvj((void *) buf, len);
                c->arg->f0c = c->src;
                c->arg->f10 = buf;
                break;
            case 1:
            case 2:
                func_020d4a50((void *) c->src, (void *) buf, len);
                func_020d2894((void *) buf, len);
                _Z16DrainWriteBufferv();
                c->arg->f0c = buf;
                c->arg->f10 = c->dst;
                break;
            case 3:
                c->arg->f0c = c->src;
                c->arg->f10 = c->dst;
                break;
        }
        if (!func_020dd950(c, cmd, retry)) {
            break;
        }
        if (mode == 2) {
            if (!func_020dd950(c, 9, 1)) {
                break;
            }
        } else if (mode == 0) {
            func_020d4a50((void *) buf, (void *) c->dst, len);
        }
        c->src += len;
        c->dst += len;
        c->len -= len;
    } while (c->len != 0);
    fn    = c->callback;
    cbarg = c->cbArg;
    e     = _Z20DisableIRQInterruptsv();
    c->f114 &= ~0x4c;
    func_020d1ecc(&c->queue);
    if (c->f114 & 0x10) {
        func_020d1f34(&c->thread);
    }
    _Z20SetIRQInterruptStatei(e);
    if (fn) {
        fn(cbarg);
    }
}
u32 func_020dd04c(void);
int func_020dd950(CardCommon *c, u32 cmd, int tries);
