#include <stdio.h>
#include <vector>
using namespace std;
 
int main()
{
    int n, bb;
    scanf("%d", &n);
    vector<int> a;
    vector<int> b(201);
    for(int i = 0; i < n; ++i){
        scanf("%d", &bb);
        a.push_back(bb);
    }
    for(int i = 0; i < a.size(); ++i){
        b[a[i] + 100]++;
    }
    int m = 0, pos, k = 0;
    for(int i = 0; i < b.size(); ++i)
        if(b[i] > m){
            m = b[i];
            pos = i;
        }
    pos-=100;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] == pos){
            a.erase(a.begin() + i);
            --i;
            ++k;
        }
    a.insert(a.end(), k, pos);
    for(int i = 0; i < a.size(); ++i){
        printf("%d" , a[i]);
        printf(" ");
    }
    return 0;
}