void func_ov004_020b8df8(void *o);
extern char data_ov004_020cee88[];
extern void *data_ov004_020cfa00[3];
extern void *data_ov004_020cfa0c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020cd298(void) {
    func_ov004_020b8df8(&data_ov004_020cfa00[3]);
    data_ov004_020cfa0c = data_ov004_020cee88;
}
