void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf0f0[];
extern void *data_ov004_020cfa48[3];
extern void *data_ov004_020cfa54;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd388(void) {
    func_ov004_020b8df8(&data_ov004_020cfa48[3]);
    data_ov004_020cfa54 = data_ov004_020cf0f0;
}
