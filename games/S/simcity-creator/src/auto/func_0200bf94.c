/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_Init from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PM_Init.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_02008380(void);
extern int func_020084d8(int fifoNo, int kind);
extern void func_0200848c(int fifoNo, void (*cb)(int, unsigned int));
extern void func_02005368(void *mutex);
extern void func_0200c038(int fifoNo, unsigned int data);
extern struct {
    unsigned short initialized;
    char _2[0xe];
    int field_10;
    char _14[0x8];
    int field_1c;
    int field_20;
} data_020d2cac;
extern unsigned short data_020d2cf0[5][4];
extern int data_020d2cd8;
void func_0200bf94(void) {
    int i;

    if (data_020d2cac.initialized != 0) {
        return;
    }

    data_020d2cac.initialized = 1;
    data_020d2cac.field_1c    = 0;
    data_020d2cac.field_20    = 0;
    func_02008380();
    while (!func_020084d8(8, 1)) {
    }
    func_0200848c(8, func_0200c038);
    for (i = 0; i < 5; i++) {
        data_020d2cf0[i][0] = 0;
    }
    func_02005368(&data_020d2cd8);
    data_020d2cac.field_10 = *(int *) 0x027ffc3c;
}
