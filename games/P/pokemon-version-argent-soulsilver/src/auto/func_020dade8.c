/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_Init from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PM_Init.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_020d6548(void);
extern int func_020d66a0(int fifoNo, int kind);
extern void func_020d6654(int fifoNo, void (*cb)(int, unsigned int));
extern void func_020d2600(void *mutex);
extern void func_020dae8c(int fifoNo, unsigned int data);
extern struct {
    unsigned short initialized;
    char _2[0xe];
    int field_10;
    char _14[0x8];
    int field_1c;
    int field_20;
} data_021e372c;
extern unsigned short data_021e3770[5][4];
extern int data_021e3758;
void func_020dade8(void) {
    int i;

    if (data_021e372c.initialized != 0) {
        return;
    }

    data_021e372c.initialized = 1;
    data_021e372c.field_1c    = 0;
    data_021e372c.field_20    = 0;
    func_020d6548();
    while (!func_020d66a0(8, 1)) {
    }
    func_020d6654(8, func_020dae8c);
    for (i = 0; i < 5; i++) {
        data_021e3770[i][0] = 0;
    }
    func_020d2600(&data_021e3758);
    data_021e372c.field_10 = *(int *) 0x027ffc3c;
}
