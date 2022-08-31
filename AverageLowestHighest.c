#include <stdio.h>
float get_average(int a[], int n);
int get_lowest(int a[], int n);
int get_highest(int a[], int n);

int main(){
    int a[10] ={89,56,100,98,76,86,93,90,16,94};
    
    float mean;
    mean=get_average(a,10);
    printf("\nThe mean of the array is: %f\n",mean);

    int lowest;
    lowest=get_lowest(a,10);
    printf("\nThe lowest of the array is: %d\n",lowest);

    int highest;
    highest=get_highest(a,10);
    printf("\nThe highest of the array is: %d\n", highest);
}

float get_average(int a[], int n)
{
    int i;
    float avg;
    int total = 0;
    for(i = 0; i <= n-1; i++)
    {
        total = total + a[i];
    };
    avg = total/(float)n;
    return avg;
}

int get_lowest(int a[], int n)
{
     int i;
     int min;
     min = a[0];
     for(i=0;i<=n-1;i++)
     {
        if(a[i]<min)
        {
            min=a[i];
        }
     }
    return min;
}

int get_highest(int a[], int n)
{
    int i;
    int max;
    max=a[9];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

