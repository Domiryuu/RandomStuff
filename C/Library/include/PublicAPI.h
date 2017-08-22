/*
 * This file is the public API for the library.
 * You can have as many of these files as you want
 * and should be named something more appropiate
 */


/*
 * include guard
 *
 * This should always be added to every header file.
 */
#ifndef PUBLICAPI_H
#define PUBLICAPI_H
/*
 * Make this library work with C++
 */
#ifdef __cplusplus
extern "C" {
#endif

/* 
 * This is a structure definition that does not show it's
 * inner workings. The inner workings will be in the C file.
 */
typedef struct _MyStruct MyStruct;

/*
 * function prototype
 */
void printHello();
#ifdef __cplusplus
}
#endif
#endif
