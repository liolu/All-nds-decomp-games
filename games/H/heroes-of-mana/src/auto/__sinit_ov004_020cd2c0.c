void func_ov004_020b8df8(void *o);
extern char data_ov004_020ceebc[];
extern void *data_ov004_020cfa0c[3];
extern void *data_ov004_020cfa18;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd2c0(void) {
    func_ov004_020b8df8(&data_ov004_020cfa0c[3]);
    data_ov004_020cfa18 = data_ov004_020ceebc;
}
