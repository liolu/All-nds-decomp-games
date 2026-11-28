void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf160[];
extern void *data_ov004_020cfa54[3];
extern void *data_ov004_020cfa60;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd3b0(void) {
    func_ov004_020b8df8(&data_ov004_020cfa54[3]);
    data_ov004_020cfa60 = data_ov004_020cf160;
}
