#include "main.h"

/** 
 * _isupper - a function that checks for uppercase character.
 * @car :
 * return: 1 or 0 
*/

int _isupper (int car) 
{

    if (car >= 'A' && car <= 'Z')
        {
            return (1);
        }
    else 
        {
            return (0);
        }
}
