// ---------------------------------------------------------------- 
// SPECIFICATION:  The function determines if a given identifier is
// valid. A valid identifier must begin with a letter and must have
// only letters or numbers. Also,  the length must be >= than 1 and
// <= than 6. The function "identifier" returns 0 if the identifier
// is valid and 1 if not.
// ---------------------------------------------------------------- 

// This code was modified to receive a string as parameter, instead
//of reading user input with fgetc.

#include <stdio.h>
#include "identifier.h"

// Used to check the first char of the string. Must be a letter
int valid_s(char ch)
{
  if ( ((ch >= 'A') &&   // a
        (ch <= 'Z')) ||  // b
       ((ch >= 'a') &&   // c
        (ch <= 'z')))    // d
    return 1;
  else
    return 0;
}

// Used to check all chars of the string but the first.
int valid_f(char ch)
{
  if (((ch >= 'A') &&  // a
       (ch <= 'Z')) || // b
      ((ch >= 'a') &&  // c
       (ch <= 'z')) || // d
      ((ch >= '0') &&  // e
       (ch <= '9')))   // f
    return 1;
  else
    return 0;
}


int identifier(const char *id)
{
  char achar;
  int valid_id;
  int length = 0;

  achar = id[0];

  valid_id = valid_s(achar);
  if(valid_id)
  {
    length = 1;
  }

  achar = id[length];

  // '\0' is for null-terminated strings
  while( (achar != '\n') && (achar != '\0'))
  {
    if(!(valid_f(achar)))
    {
      valid_id = 0;
    }
    length++;
    achar = id[length];
  }

  if(valid_id && (length >= 1) && (length <= 6))
  {
    return 0;
  }
  else
  {
    return 1;
  }

}