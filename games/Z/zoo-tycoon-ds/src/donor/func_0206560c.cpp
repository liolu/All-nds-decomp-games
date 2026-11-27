/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_0205e11c from projets/spider-man-2-usa/src/donor/func_0205e11c.cpp (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
namespace Sound {
    struct Player {

        static void SetPlayableSeqCount(int index, int count);
    };
} // namespace Sound
extern "C" {
extern int func_02064164(int owner, void *b, u32 c);
extern int func_02064a74(unsigned int id);
extern int func_02064c68(void);
extern int func_0206560c(int arg);
}
extern "C" int func_0206560c(int arg) {
    int i;
    func_02064c68();
    for (i = 0; i < 0x20; i++) {
        unsigned char *p = ((unsigned char *(*) (unsigned int id)) func_02064a74)(i);
        if (p == 0) {
            continue;
        }
        Sound::Player::SetPlayableSeqCount(i, p[0]);
        if (*(int *) (p + 4) == 0) {
            continue;
        }
        if (arg == 0) {
            continue;
        }
        {
            int j;
            for (j = 0; j < p[0]; j++) {
                if (((int (*)(int a, int b, int c)) func_02064164)(i, arg, *(int *) (p + 4)) == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
extern "C" int func_02064c68(void);
extern "C" int func_02064a74(unsigned int id);
extern "C" int func_02064164(int owner, void *b, u32 c);
