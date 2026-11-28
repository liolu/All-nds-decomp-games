void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf32c[];
extern void *data_ov004_020cfa84[3];
extern void *data_ov004_020cfa90;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd450(void) {
    func_ov004_020b8df8(&data_ov004_020cfa84[3]);
    data_ov004_020cfa90 = data_ov004_020cf32c;
}
