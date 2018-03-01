#include <stdio.h>
#include <stdlib.h>

void go()
{
    system("start calc");
   system("pause");
   system("taskkill /f /im calc.exe");
   system("pause");
    return 0;
}

int main()
{
 go();
}
