void func_ov004_020b8df8(void *o);
extern char data_ov004_020ceb8c[];
extern void *data_ov004_020cf9a0[3];
extern void *data_ov004_020cf9ac;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd158(void) {
    func_ov004_020b8df8(&data_ov004_020cf9a0[3]);
    data_ov004_020cf9ac = data_ov004_020ceb8c;
}
