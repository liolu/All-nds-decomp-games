void func_ov004_020b8df8(void *o);
extern char data_ov004_020cec1c[];
extern void *data_ov004_020cf9ac[3];
extern void *data_ov004_020cf9b8;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd180(void) {
    func_ov004_020b8df8(&data_ov004_020cf9ac[3]);
    data_ov004_020cf9b8 = data_ov004_020cec1c;
}
