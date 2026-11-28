void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce1d8[];
extern void *data_ov004_020cf92c[3];
extern void *data_ov004_020cf938;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020ccff0(void) {
    func_ov004_020b8df8(&data_ov004_020cf92c[3]);
    data_ov004_020cf938 = data_ov004_020ce1d8;
}
