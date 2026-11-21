int func_020d164c(int, unsigned char *, int, int, int, int);
extern unsigned char data_ov013_022467e8;
extern unsigned char *data_ov013_0224f5c4;
void func_ov013_0223a350(int arg0) {
    unsigned char *p = data_ov013_0224f5c4;
    unsigned char *q = p + 0x4C4;
    func_020d164c(arg0, &data_ov013_022467e8, *q, q[1], q[2], q[3]);
}
