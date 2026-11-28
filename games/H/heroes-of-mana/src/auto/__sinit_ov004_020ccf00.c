void func_ov004_020b8df8(void *o);
extern char data_ov004_020cdb6c[];
extern void *data_ov004_020cf8e4[3];
extern void *data_ov004_020cf8f0;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020ccf00(void) {
    func_ov004_020b8df8(&data_ov004_020cf8e4[3]);
    data_ov004_020cf8f0 = data_ov004_020cdb6c;
}
