#include <stdio.h>
using namespace std;
 
int main()
{
    int n,b;
    scanf("%i",&n);
    int a[n];
    int c[202] = {0};
    for(int i = 0; i < n; ++i){
        scanf("%i",&a[i]);
    }
    for(int i = 0; i < n; ++i)
            ++c[a[i] + 100];
    for(int i = 0; i < 202; ++i)
        for(int j = 0; j < c[i]; ++j){
            printf("%i",i - 100);
            printf(" ");
        }
    return 0;
}