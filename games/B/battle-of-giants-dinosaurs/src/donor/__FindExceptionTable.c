/* compiler: 2.0/sp1p5  */
/* __FindExceptionTable from projets/blue-dragon-awakened-shadow/src/donor/__FindExceptionTable.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern char __exception_table_start__[];
extern char __exception_table_end__[];
s32 __FindExceptionTable(void *arg0) {
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = (s32) __exception_table_start__;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = (s32) __exception_table_end__;
    return 1;
}
