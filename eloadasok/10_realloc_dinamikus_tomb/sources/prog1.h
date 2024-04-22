#ifndef PROG1_H
#define PROG1_H

/**
 * Our own type for (pointers to) strings.
 */
typedef char * string;

//////////////////////////////////////////////////////////////////////////////
//
//   Public Interface
//

string get_string(const char* prompt);

#endif    // PROG1_H
