#include <iostream>
using namespace std;

int main()
{
    int x,y;
    printf("please input x: \n");
    scanf("%d",&x);
    
    printf("please input y: \n");
    scanf("%d",&y);
    /*
    + - * / %
    
    ++X
    X++
    --X
    X--
    
    x=16
    x >> 1
    x >> 2
    x << 1
    
    */
    
    
    printf(" %d + %d =%d \n",x,y,x+y);
    printf(" %d + %d =%d \n",--x,y,x+y);
    cout<<"Good night!";
    return 0;
}
