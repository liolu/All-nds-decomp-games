void func_ov004_020b8df8(void *o);
extern char data_ov004_020cefb0[];
extern void *data_ov004_020cfa24[3];
extern void *data_ov004_020cfa30;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd310(void) {
    func_ov004_020b8df8(&data_ov004_020cfa24[3]);
    data_ov004_020cfa30 = data_ov004_020cefb0;
}
