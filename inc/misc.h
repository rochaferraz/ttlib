#ifndef MISC_H
#define MISC_H

/*
 *  _____     _         _ _ _
 * |_   _|_ _| |_ _   _| (_) |__
 *   | |/ _` | __| | | | | | '_ \
 *   | | (_| | |_| |_| | | | |_) |
 *   |_|\__,_|\__|\__,_|_|_|_.__/
 *
 *
 *                  ,::////;::-.
 *                 /:'///// ``::>/|/
 *               .',  ||||    `/( e\
 *           -==~-'`-Xm````-mm-' `-_\     -Seal do Mar
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdarg.h>

/** Generic Swap function swaps the contents of [element1] and [element2]
 *  \param element1 pointer to first data structure to be swapped
 *  \param element2 pointer to second data structure to be swapped
 *  \param elementSize size of element. Use sizeof(<your type>)

    EXAMPLE
 
    int x = 0;
    int y = 1;
    printf("x is %d and y is %d\n", x, y);
    _swap(&x, &y, sizeof(int));
    printf("x is %d and y is %d\n", x, y);
    swap_int(&x, &y); // safer version!
    printf("x is %d and y is %d\n", x, y);

    RESULT

    x is 0 and y is 1
    x is 1 and y is 0
    x is 0 and y is 1
    
 */
void _swap(void* element1, void* element2, int elementSize);

/** Swap for <int> swaps the contents of [element1] and [element2]
 *  \param element1 pointer to first <int> to be swapped
 *  \param element2 pointer to second <int> to be swapped
 */
void swap_int(int* element1, int* element2);

/** Swap for <uint> swaps the contents of [element1] and [element2]
 *  \param element1 pointer to first <uint> to be swapped
 *  \param element2 pointer to second <uint> to be swapped
 */
void swap_uint(unsigned int* element1, unsigned int* element2);

/** Swap for <long> swaps the contents of [element1] and [element2]
 *  \param element1 pointer to first <long> to be swapped
 *  \param element2 pointer to second <long> to be swapped
 */
void swap_long(long* element1, long* element2);

/** Swap for <ulong> swaps the contents of [element1] and [element2]
 *  \param element1 pointer to first <ulong> to be swapped
 *  \param element2 pointer to second <ulong> to be swapped
 */
void swap_ulong(unsigned long* element1, unsigned long* element2);

/** Swap for <char*> strings swaps the contents of [element1] and [element2]
 *  \param element1 pointer to first <char*> null-terminated string to be swapped
 *  \param element2 pointer to second <char*> null-terminated string to be swapped
 */
void swap_strptr(char* element1, char* element2);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* MISC_H */