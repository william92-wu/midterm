#include<stdio.h>
int main()
{
    int count=0,word=0;
    char ch;
    printf("Please input an English sentence and less than 50 word:");
    while((ch=getchar())!='\n')
    if(ch==' ')
    word=0;
    else if(word==0)
    {
        word=1;
        count++; 
    }
    printf("The number of words is:%d\n",count);
    return 0;
}