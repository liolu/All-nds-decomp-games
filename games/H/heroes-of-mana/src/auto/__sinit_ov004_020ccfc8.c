void func_ov004_020b8df8(void *o);
extern char data_ov004_020ce00c[];
extern void *data_ov004_020cf920[3];
extern void *data_ov004_020cf92c;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020ccfc8(void) {
    func_ov004_020b8df8(&data_ov004_020cf920[3]);
    data_ov004_020cf92c = data_ov004_020ce00c;
}
