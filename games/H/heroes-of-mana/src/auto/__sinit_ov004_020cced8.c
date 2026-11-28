void func_ov004_020b8df8(void *o);
extern char data_ov004_020cda60[];
extern void *data_ov004_020cf8d8[3];
extern void *data_ov004_020cf8e4;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cced8(void) {
    func_ov004_020b8df8(&data_ov004_020cf8d8[3]);
    data_ov004_020cf8e4 = data_ov004_020cda60;
}
