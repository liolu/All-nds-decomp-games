void func_ov004_020b8df8(void *o);
extern char data_ov004_020ced58[];
extern void *data_ov004_020cf9d0[3];
extern void *data_ov004_020cf9dc;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd1f8(void) {
    func_ov004_020b8df8(&data_ov004_020cf9d0[3]);
    data_ov004_020cf9dc = data_ov004_020ced58;
}
