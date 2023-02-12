#include "prog1.h"

//////////////////////////////////////////////////////////////////////////////
//
//   Implementation
//

#include <stdio.h>
#include <string.h>

#define BUFSIZE 1024

/**
 * Ez egy dinamikusan lefoglalt sztringet ad vissza,
 * amit a hívó oldalon majd valamikor fel kell szabadítani.
 */
string get_string(const char* prompt)
{
    char buf[BUFSIZE];

    printf("%s", prompt);
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';

    return strdup(buf);
}
