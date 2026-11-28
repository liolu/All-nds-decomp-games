void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce950[];
extern void *data_ov004_020cf988[3];
extern void *data_ov004_020cf994;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd108(void) {
    func_ov004_020b8df8(&data_ov004_020cf988[3]);
    data_ov004_020cf994 = data_ov004_020ce950;
}
