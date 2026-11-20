/* compiler: 1.2/sp2p3  */
/* func_02064c78 from projets/madagascar/src/auto/func_02064c78.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205c574();
extern M2C_UNK func_0205c740();
extern s32 data_0217b08c;
void func_0205bb60(void) {
    if (data_0217b08c != 0) {
        return;
    }
    data_0217b08c = 1;
    func_0205c574();
    func_0205c740();
}
