void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce20c[];
extern void *data_ov004_020cf938[3];
extern void *data_ov004_020cf944;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd018(void) {
    func_ov004_020b8df8(&data_ov004_020cf938[3]);
    data_ov004_020cf944 = data_ov004_020ce20c;
}
