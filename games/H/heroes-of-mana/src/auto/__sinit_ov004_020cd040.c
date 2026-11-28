void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce304[];
extern void *data_ov004_020cf944[3];
extern void *data_ov004_020cf950;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd040(void) {
    func_ov004_020b8df8(&data_ov004_020cf944[3]);
    data_ov004_020cf950 = data_ov004_020ce304;
}
