// ----------------------------------------------------------------
// ESPECIFICAÇÃO: O programa deve determinar se um identificador
// é ou não válido. Um identificador válido deve começar com uma
// letra e conter apenas letras ou dígitos. Além disto, deve ter
// no mínimo 1 caractere e no máximo 6 caracteres de comprimento
// ----------------------------------------------------------------

// This code was modified to receive a string as parameter, instead
//of reading the string with fgetc.

// For this implementation, the string must end with '\n'

#include <stdio.h>
#include "identifier.h"
// Used to check the first char of the string. Can only be a letter
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

// Used to check all chars of the string but the first. They can be letters or numbers.
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
  }// shouldn't we have an 'else' that returns 1?

  achar = id[length];

  // '\0' is for null-terminated strings, such as the one you enter in command line arguments
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