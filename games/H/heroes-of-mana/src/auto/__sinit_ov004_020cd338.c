void func_ov004_020b8df8(void *o);
extern char data_ov004_020cf038[];
extern void *data_ov004_020cfa30[3];
extern void *data_ov004_020cfa3c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd338(void) {
    func_ov004_020b8df8(&data_ov004_020cfa30[3]);
    data_ov004_020cfa3c = data_ov004_020cf038;
}
