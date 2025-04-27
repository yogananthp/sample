#include<stdio.h>
int main()
{
    int num,pos,bits;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp=num;   //storing in another temp
    printf("Enter the position : ");
    scanf("%d",&pos);  
    printf("Enter no of bits : ");
    scanf("%d",&bits);
    num=num&((1<<pos-bits+1)-1);    //clearing all bits except the remaining lsb bits
    temp=temp>>pos+1;       //moving temp from pos till the msb moved towards right till it reaches lsb
    temp=temp<<pos-bits+1;  //moving temp position - bits + 1 times
    printf("%d\n",num|temp);//finally printing the result by doing OR with original number with temp
}