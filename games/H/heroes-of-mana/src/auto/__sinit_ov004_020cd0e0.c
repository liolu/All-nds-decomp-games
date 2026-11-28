void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce7b8[];
extern void *data_ov004_020cf97c[3];
extern void *data_ov004_020cf988;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd0e0(void) {
    func_ov004_020b8df8(&data_ov004_020cf97c[3]);
    data_ov004_020cf988 = data_ov004_020ce7b8;
}
