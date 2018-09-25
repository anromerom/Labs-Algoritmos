#include <iostream>
#include <math.h>

using namespace std;

void char_fib(void);
void signed_char_fib(void);
void unsigned_char_fib(void);
void short_fib(void);
void unsigned_short_fib(void);
void int_fib(void);
void unsigned_int_fib(void);
void long_fib(void);
void unsigned_long_fib(void);
void long_long_fib(void);
void unsigned_long_long_fib(void);
unsigned long long fib(int);


int main()
{

    char_fib();
    signed_char_fib();
    unsigned_char_fib();
    short_fib();
    unsigned_short_fib();
    int_fib();
    unsigned_int_fib();
    long_fib();
    unsigned_long_fib();
    long_long_fib();
    unsigned_long_long_fib();
    return 0;



}


unsigned long long fib(int n)
{
    int i = 0;
    unsigned long long x = 0;
    unsigned long long y = 1;
    if (n<= 0) return 0;

    for(i = 0; i< n-1; i++)
    {
        y = x + y;
        x = y - x;


    }
    return y;

}



void char_fib()
{
    int i;
    char x = 0;
    char y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    cout << "CHAR" << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << CHAR_MAX  <<endl;

    cout << "Last valid value:    "<<(int)x << endl;
    cout << "Value out of bounds: "<< fib(i+1) << endl;
    cout << "Value of n:          "<< i << endl << endl;


    return;

}



void signed_char_fib(void)
{
    int i;
    signed char x = 0;
    signed char y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    cout << "SIGNED CHAR          " << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << 127  <<endl;
    cout << "Last valid value:    "<<(int)x << endl;
    cout << "Value out of bounds: "<< fib(i+1) << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}
void unsigned_char_fib(void){
    int i;
    unsigned char x = 0;
    unsigned char y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    cout << "UNSIGNED CHAR        " << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << 255  <<endl;
    cout << "Last valid value:    "<<(int)x << endl;
    cout << "Value out of bounds: "<< fib(i+1) << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}

void short_fib(void){
    int i;
    short x = 0;
    short y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    cout << "SHORT" << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << 32767  <<endl;
    cout << "Last valid value:    "<<(int)x << endl;
    cout << "Value out of bounds: "<< fib(i+1) << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}

void unsigned_short_fib(void){
    int i;
    unsigned short x = 0;
    unsigned short y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    cout << "UNSIGNED SHORT       " << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << 65535  <<endl;
    cout << "Last valid value:    "<<(int)x << endl;
    cout << "Value out of bounds: "<< fib(i+1) << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}
void int_fib(void){
    int i;
    int x = 0;
    int y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    y = INT_MAX;
    cout << "INT" << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << y  <<endl;
    cout << "Last valid value:    "<< x << endl;
    cout << "Value out of bounds: "<< fib(i+1) << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}
void unsigned_int_fib(void){
    int i;
    unsigned int x = 0;
    unsigned int y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    y = INT_MAX*2 + 1;
    cout << "UNSIGNED INT" << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << y  <<endl;
    cout << "Last valid value:    "<< x << endl;
    cout << "Value out of bounds: "<< fib(i+1) << endl;
    cout << "Value of n:          "<< i << endl << endl;
    return;

}
void long_fib(void){
    int i;
    long x = 0;
    long y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }

    y = LONG_MAX;
    cout << "LONG" << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << y  <<endl;
    cout << "Last valid value:    "<< x << endl;
    cout << "Value out of bounds: "<< fib(i +1) << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}

void unsigned_long_fib(void){
    int i;
    unsigned long x = 0;
    unsigned long y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    y = LONG_MAX*2 + 1;
    cout << "UNSIGNED LONG" << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << y <<endl;
    cout << "Last valid value:    "<< x << endl;
    cout << "Value out of bounds: "<< fib(i + 1) << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}

void long_long_fib(void){
    int i;
    long long x = 0;
    long long y = 1;
    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    y = LONG_LONG_MAX;
    cout << "LONG LONG" << endl;
    cout << "Data type size:       " << sizeof(x) <<endl;
    cout << "Maximum value:        "  << y <<endl;
    cout << "Last valid value:     "<< x << endl;
    cout << "Value out of bounds: "<< fib(i + 1) << endl;
    cout << "Value of n:           "<<i << endl << endl;
    return;

}
void unsigned_long_long_fib(void){
    int i;
    unsigned long long x = 0;
    unsigned long long y = 1;

    for(i = 0; x <= y; i++)
    {
        y = x + y;
        x = y - x;
    }
    y = LONG_LONG_MAX*2 + 1;
    cout << "UNSIGNED LONG LONG   " << endl;
    cout << "Data type size:      " << sizeof(x) <<endl;
    cout << "Maximum value:       "  << y <<endl;
    cout << "Last valid value:    "<< x << endl;
    cout << "Value of n:          "<<i << endl << endl;
    return;

}
