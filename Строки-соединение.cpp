#include <cstring>
#include <iostream>
#include <locale.h>
using namespace std;
void main ()
{
setlocale(LC_ALL, "RUS");
char *a = new char[6];
char *b = new char[6];
char *c = new char[6];
char *d = new char[15];
char *e = new char[15];
cout << "Ââåäèòå ïåðâóþ ñòðîêó ";
scanf("%s",a); 
cout << "Ââåäèòå âòîðóþ ñòðîêó ";
scanf("%s",b); 
cout << "Ââåäèòå òðåòüþ ñòðîêó ";
scanf("%s",c); 
strncpy(d, b, 1);
strcpy(d+1, c);
strcat(d, b+1);
strncpy(e,a,1);
strcpy(e+1,d);
strncat(e,a+1,3);
strncat(e,c+2,4);
strcat(e,a+3);
printf("%s",e);
system("pause");
}
