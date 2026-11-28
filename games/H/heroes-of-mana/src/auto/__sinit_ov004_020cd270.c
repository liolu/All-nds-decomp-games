void func_ov004_020b8df8(void *o);
extern char data_ov004_020cee24[];
extern void *data_ov004_020cf9f4[3];
extern void *data_ov004_020cfa00;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd270(void) {
    func_ov004_020b8df8(&data_ov004_020cf9f4[3]);
    data_ov004_020cfa00 = data_ov004_020cee24;
}
