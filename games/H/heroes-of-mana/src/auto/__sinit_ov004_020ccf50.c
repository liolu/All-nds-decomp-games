void func_ov004_020b8df8(void *o);
extern char data_ov004_020cdd10[];
extern void *data_ov004_020cf8fc[3];
extern void *data_ov004_020cf908;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020ccf50(void) {
    func_ov004_020b8df8(&data_ov004_020cf8fc[3]);
    data_ov004_020cf908 = data_ov004_020cdd10;
}
