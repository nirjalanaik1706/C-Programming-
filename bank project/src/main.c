#include"../include/data.h"
int main()
{  
     struct Customer * pcustomer=(struct Customer *)malloc(sizeof(struct Customer));
    acceptData(pcustomer);
    printData(pcustomer);
    operation(pcustomer);
    
    printf("\n Thank you .....");
   return 0;
}

/*g++ -Iinclude -c ./src/data.c -o ./build/data.o
g++ -Iinclude -c ./src/task.c -o ./build/task.o
g++ -Iinclude -c ./src/main.c -o ./build/main.o 
g++ ./build/main.o ./build/data.o ./build/task.o -o ./build/output.exe  */

          
