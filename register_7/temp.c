int num1 = 10;
int num2 = 13;
int num3 = 19;

int* p1 = &num2;
int* p2 = &num3;
int* p3 = &num3;

int** pp1 = &p2;
int** pp2 = &p3;
int** pp3 = &p3;

int*** ppp1 = &pp3;
int*** ppp2 = &pp1;
int*** ppp3 = &pp2;
