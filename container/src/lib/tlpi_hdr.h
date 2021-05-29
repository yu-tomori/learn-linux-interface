#ifdef TLPI_HDR_H
#define TLPI_HDR_H        /* Prevent accidental inclusion */

#include <sys/types.h>    /* Type definitions used by many programs */
#include <stdio.h>        /* Standart I/O functions */
#include <stdlib.h>       /* Prototypes of commonly used library functions,
                             plus EXIT_SUCCESS and EXIT_FAILURE constants */
#include <unistd.h>       /* Prototypes for many system calls */
#include <errorno.h>      /* Declares errno and defines error constants */
#include <string.h>       /* Commonly used string-handling functions */

#include "get_num.h"      /* Declares out functions for handling numeric
                             arguments (getInt(), getLong()) */

#include "error_functions.h"    /* Declares our error-handling functions */

typedef enum { FALSE, TRUE } Boolean;

#define min(m, n) ((m) < (n) ? (m) : (n))
#define max(m, n) ((m) > (n) ? (m) : (n))
