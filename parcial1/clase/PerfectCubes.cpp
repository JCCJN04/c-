#include <iostream>
#include <string>
using namespace std;

int main()
{
    clock_t start, end;
	start = clock();
	for (i=0;i<=100000;i++)
		for(j=0;j<=100000;j++);
	end = clock();
	printf("Tiempo CPU: %.3f segundos\n", (double)(end-start)/1000);

    // perfect cube equation
    //  a^3 = b^3 + c^3 + d^3

    return 0;
}
