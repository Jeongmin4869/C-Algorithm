#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    while(n>0){
        if(n%2==0){
            n/=2;
        }
        else {
            int num = n%2;
            ans += num;
            n -= num;
        }
    }
    
    return ans;
}
