extern void func_ov013_0222728c(int);
extern void func_ov013_02237154(int);
extern void func_ov013_022370d8(void);
extern int func_ov013_022417fc(void *);
extern int func_ov013_022416f4(int);
extern int func_ov013_022416b4(int);
extern unsigned char data_ov013_0224565a[];
extern unsigned char data_ov013_0224f58c;

void func_ov013_02236c48(void) {
    unsigned int i;
    int dummy;
    int *pd = &dummy;
    unsigned char *p;
    p = data_ov013_0224565a;
    for (i = 0; i < 7; i++) {
        if (func_ov013_022417fc(p) != 0) {
            func_ov013_0222728c(1);
            data_ov013_0224f58c = i;
            func_ov013_022370d8();
            return;
        }
        p += 8;
    }
    if (func_ov013_022416b4(1) != 0) {
        func_ov013_0222728c(1);
        return;
    }
    if (func_ov013_022416b4(2) != 0) {
        func_ov013_0222728c(0);
        return;
    }
    if (func_ov013_022416f4(0x40) != 0) {
        func_ov013_02237154(1);
        return;
    }
    if (func_ov013_022416f4(0x80) != 0) {
        func_ov013_02237154(3);
        return;
    }
    if (func_ov013_022416f4(0x20) != 0) {
        func_ov013_02237154(0);
        return;
    }
    if (func_ov013_022416f4(0x10) == 0) {
        return;
    }
    func_ov013_02237154(2);
}
