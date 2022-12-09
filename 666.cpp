#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
 
int main()
{
    int a_[] = {1, 3, 2};
    std::vector<int> a(a_, a_ + sizeof(a_) / sizeof(a_[0]));
    std::vector<double> b, c;
    double res = 0.0;
    double gorg_money = 0.0, _g = gorg_money;
 
    std::sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); ++i)
    {
        double tmp =  (a[i] + gorg_money) / 2;
        b.push_back((a[i] + gorg_money) / 2);
        gorg_money = tmp;
    }
 
    for(int i = 0; i < a.size(); ++i)
        c.push_back((a[i] + _g) / 2);
 
    std::cout << std::fixed << std::setprecision(6) << std::max(*std::max_element(b.begin(), b.end()), *std::max_element(c.begin(), c.end()));
    return 0;
}