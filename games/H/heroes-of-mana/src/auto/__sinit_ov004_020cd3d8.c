void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf1c4[];
extern void *data_ov004_020cfa60[3];
extern void *data_ov004_020cfa6c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd3d8(void) {
    func_ov004_020b8df8(&data_ov004_020cfa60[3]);
    data_ov004_020cfa6c = data_ov004_020cf1c4;
}
