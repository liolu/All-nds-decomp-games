void func_ov004_020b8df8(void *o);
extern char data_ov004_020cef20[];
extern void *data_ov004_020cfa18[3];
extern void *data_ov004_020cfa24;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd2e8(void) {
    func_ov004_020b8df8(&data_ov004_020cfa18[3]);
    data_ov004_020cfa24 = data_ov004_020cef20;
}
