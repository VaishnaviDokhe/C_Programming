#include<stdio.h>

int main()
{


    int Arr[5] = {10,20,30,40,50};

    printf("Size of Arr is : %d\n",sizeof(Arr));    //20

    printf("Arr : %d\n",Arr);
    printf("&Arr : %d\n",&Arr);

    printf("Arr + 1 : %d\n",Arr + 1);
    printf("(&Arr) + 1 : %d\n",(&Arr) + 1);




    return 0;

}