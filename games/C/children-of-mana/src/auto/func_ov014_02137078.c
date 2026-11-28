/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_ov014_021323fc(void);
void func_ov014_02135880(void);
void func_ov014_0213588c(void);
void func_ov014_02138690(void);
void func_ov014_0213871c(void);

extern s32 data_ov014_02149838;

void func_ov014_02137078(void) {
    func_ov014_0213588c();
    if (data_ov014_02149838 != 0) {
        func_ov014_02135880();
        return;
    }
    data_ov014_02149838 = 1;
    func_ov014_02135880();
    data_ov014_02149838 = 3;
    func_ov014_02138690();
    data_ov014_02149838 = 4;
    func_ov014_0213871c();
    data_ov014_02149838 = 5;
    func_ov014_021323fc();
    data_ov014_02149838 = 6;
    func_ov014_0213871c();
    data_ov014_02149838 = 7;
    func_ov014_02138690();
    data_ov014_02149838 = 0;
}
