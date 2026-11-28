void func_ov004_020b8df8(void *o);
extern char data_ov004_020cdc50[];
extern void *data_ov004_020cf8f0[3];
extern void *data_ov004_020cf8fc;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_ov004_020ccf28(void) {
    func_ov004_020b8df8(&data_ov004_020cf8f0[3]);
    data_ov004_020cf8fc = data_ov004_020cdc50;
}
