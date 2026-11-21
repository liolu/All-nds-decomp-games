extern int func_ov013_022417fc(void *);
extern int func_ov013_022416f4(int);
extern int func_ov013_022416b4(int);
extern void func_ov013_0222728c(int);
extern void func_ov013_02227c48(unsigned short, unsigned short, unsigned short, unsigned short);
extern void func_ov013_0222dad0(int);
extern unsigned char data_ov013_022453ba[];
extern unsigned char data_ov013_0224f528;

void func_ov013_0222d7a4(void) {
    unsigned int i;
    unsigned char *p;
    p = data_ov013_022453ba;
    for (i = 0; i < 3; i++, p += 8) {
        if (func_ov013_022417fc(p) != 0) {
            int o;
            func_ov013_0222728c(1);
            data_ov013_0224f528 = i;
            o                   = data_ov013_0224f528 * 8;
            func_ov013_02227c48(
                *(unsigned short *) (data_ov013_022453ba + 0x18 + o), *(unsigned short *) (data_ov013_022453ba + 0x1c + o),
                *(unsigned short *) (data_ov013_022453ba + 0x1a + o), *(unsigned short *) (data_ov013_022453ba + 0x1e + o));
            return;
        }
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
        func_ov013_0222dad0(1);
        return;
    }
    if (func_ov013_022416f4(0x80) == 0) {
        return;
    }
    func_ov013_0222dad0(3);
}
