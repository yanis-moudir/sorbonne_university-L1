#include<stdio.h>
#include<stdlib.h>
/*le but de ce programme est de trié des element d'u tableu quelquonque */
void placeElt(float tab[], int len)
{
    float temp;
    int i, j;
    for (i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
        {
            if (tab[j+1]<tab[j])
            {
                temp=tab[j+1];
                tab[j+1]=tab[j];
                tab[j]=temp;
            }
        }
}
int main()
{
    float tab[]={5,4,3,6,2};
    int len=sizeof(tab)/sizeof(tab[0]);
    placeElt(tab,len);

    int i ;
    for(i=0;i<len;i++)
    {
        printf("tab[%d]=%.2f",i,tab[i]);
    }

    return 0;

}
