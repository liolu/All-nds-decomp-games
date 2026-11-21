unsigned char func_ov000_021faeec(void);
void func_ov000_021fad10(void);
void func_ov000_021fbc10(unsigned char *);
void func_ov000_021fae8c(int);
int func_ov000_021faae8(void) {
    unsigned char x = func_ov000_021faeec();
    if (x == 0 || x == 0x12) {
        func_ov000_021fad10();
        return 1;
    }
    func_ov000_021fbc10(&x);
    func_ov000_021fae8c(x);
    return 0;
}
