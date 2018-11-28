#ifndef __A51_H_
#define __A51_H_

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char byte;
typedef unsigned long word;
typedef word bit;

void A51_GSM( byte *key, int klen, int count, byte *block1, byte *block2 );

#endif