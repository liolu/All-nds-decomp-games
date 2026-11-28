void func_ov004_020b8df8(void *o);
extern char data_ov004_020cecf4[];
extern void *data_ov004_020cf9c4[3];
extern void *data_ov004_020cf9d0;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd1d0(void) {
    func_ov004_020b8df8(&data_ov004_020cf9c4[3]);
    data_ov004_020cf9d0 = data_ov004_020cecf4;
}
