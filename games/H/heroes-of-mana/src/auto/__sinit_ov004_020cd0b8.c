void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce5bc[];
extern void *data_ov004_020cf970[3];
extern void *data_ov004_020cf97c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd0b8(void) {
    func_ov004_020b8df8(&data_ov004_020cf970[3]);
    data_ov004_020cf97c = data_ov004_020ce5bc;
}
