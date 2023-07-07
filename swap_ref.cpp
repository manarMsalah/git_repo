#include<iostream>

void swap( int & r1, int & r2)
{
    int swap;
    swap = r1;
    r1 = r2;
    r2 = swap;

}

int main()
{
    int x=4, y=6;

    int &ref =x;

    printf("address of ref = %x\naddress of x = %x\n", &ref ,&x);

    swap(x,y);
    std::cout<< "x= " << x << std::endl << "y= " << y ;

    return 0;
}