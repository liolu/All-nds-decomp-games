void func_ov004_020b8df8(void *o);
extern char data_ov004_020cecc0[];
extern void *data_ov004_020cf9b8[3];
extern void *data_ov004_020cf9c4;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd1a8(void) {
    func_ov004_020b8df8(&data_ov004_020cf9b8[3]);
    data_ov004_020cf9c4 = data_ov004_020cecc0;
}
