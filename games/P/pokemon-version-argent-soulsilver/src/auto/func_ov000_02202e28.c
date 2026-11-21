extern signed char data_ov000_0221870c[];
extern int func_020e80c0(void);
void func_ov000_02202e28(char *buf, int n) {
    int i;
    for (i = 0; i < n; i++) {
        buf[i] = data_ov000_0221870c[(unsigned int) func_020e80c0() % 62];
    }
    buf[i] = 0;
}
