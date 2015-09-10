#ifndef _LATINO_H_
#define _LATINO_H_

#if defined(__GNUC__) && ((__GNUC__*100 + __GNUC_MINOR__) >= 302) && \
defined(__ELF__)
#define LAT_FUNC    __attribute__((visibility("hidden"))) extern
#else
#define LAT_FUNC    extern
#endif

#define OK  1
#define FAIL 0
/*isalpha, isnumber, etc...*/
#include<ctype.h>
#include<stdbool.h>

#include "llist.h"

/*data types*/
typedef unsigned char char_u;
typedef long lint;
typedef long double ldecimal;
typedef char lchar;
typedef char *lstring;

#define lisalpha(c) (isalpha(c) || c == '_')
#define lisalnum(c) (isalnum(c) || c == '_')
#define lisdigit(c) (isdigit(c))
#define lisxdigit(c) (isxdigit(c))
#define lisodigit(c) ((c >= '0' && c <= '7') ? true : false)

#define lassert(cond) ((void) (false && (cond)))

#define LAT_MAXIDENTIFIER 31 /* maximum length to string word */

typedef struct global_state {
    list vars;
    list funs;
} global_state;

/* data types */
typedef enum {
    VALUE_NULL,
    VALUE_BOOL,
    VALUE_INT,
    VALUE_CHAR,
    VALUE_DOUBLE,
    VALUE_STRING
} lat_value_type;

/* values for data */
typedef struct {
    lat_value_type t;
    union {
        int b;
        int i;
        double d;
        char c;
        lstring *s;
    } v;
} lat_value;

LAT_FUNC int lat_init(lstring path);

#endif /*_LATINO_H_*/