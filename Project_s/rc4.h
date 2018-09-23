#ifndef RC4_H
#define RC4_H
#include <string.h>
#include <string>
#include <stdlib.h>
using namespace std;

//void rc4_ksa(int*, char*, int);
//void rc4_prga(int*, char*, int );
void rc4_ksa(int*, char*, int);
void rc4_prga(int*, char*, int );
char* RC4(string, string, char *);
//char* decryRC4(string, string, char *);

#endif // RC4_H
