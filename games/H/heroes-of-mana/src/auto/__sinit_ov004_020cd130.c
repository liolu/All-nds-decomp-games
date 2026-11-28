void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce9e0[];
extern void *data_ov004_020cf994[3];
extern void *data_ov004_020cf9a0;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd130(void) {
    func_ov004_020b8df8(&data_ov004_020cf994[3]);
    data_ov004_020cf9a0 = data_ov004_020ce9e0;
}
