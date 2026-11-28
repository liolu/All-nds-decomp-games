void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf08c[];
extern void *data_ov004_020cfa3c[3];
extern void *data_ov004_020cfa48;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd360(void) {
    func_ov004_020b8df8(&data_ov004_020cfa3c[3]);
    data_ov004_020cfa48 = data_ov004_020cf08c;
}
