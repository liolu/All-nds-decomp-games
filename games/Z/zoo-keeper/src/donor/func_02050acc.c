/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020515f8 from projets/children-of-mana/src/auto/func_020515f8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef struct {
    unsigned char pad[0x18];
    unsigned int src;
    unsigned int dst;
    unsigned int size;
} CardXferState;
extern CardXferState data_0206dbc0;
extern void func_02050de0(unsigned int a, unsigned int b);
extern int func_02050f04(char *self);
int func_02050acc(char *self) {
    CardXferState *g = &data_0206dbc0;
    unsigned int *buf;
    unsigned int *altBuf            = (unsigned int *) (self + 0x20);
    volatile unsigned int *romctrl  = (volatile unsigned int *) 0x40001A4;
    volatile unsigned int *fifoData = (volatile unsigned int *) 0x4100010;
    unsigned int mask               = (unsigned int) -0x200;

    for (;;) {
        unsigned int src     = g->src;
        unsigned int aligned = src & mask;
        unsigned int i;
        unsigned int status;
        unsigned int cmd;

        if (aligned == src && (g->dst & 3) == 0 && g->size >= 0x200) {
            buf = (unsigned int *) g->dst;
        } else {
            buf                          = altBuf;
            *(unsigned int *) (self + 8) = aligned;
        }

        func_02050de0((aligned >> 8) | 0xb7000000, aligned << 0x18);

        cmd      = *(unsigned int *) (self + 4);
        i        = 0;
        *romctrl = cmd;
        do {
            status = *romctrl;
            if (status & 0x800000) {
                unsigned int val = *fifoData;
                if (i < 0x200) {
                    buf[i] = val;
                    i++;
                }
            }
        } while (status & 0x80000000);

        if (buf == (unsigned int *) *(volatile unsigned int *) &data_0206dbc0.dst) {
            data_0206dbc0.src += 0x200;
            data_0206dbc0.dst += 0x200;
            data_0206dbc0.size -= 0x200;
            if (data_0206dbc0.size == 0) {
                return data_0206dbc0.size;
            }
        } else {
            int rc = func_02050f04(self);
            if (rc == 0) {
                return rc;
            }
        }
    }
}
