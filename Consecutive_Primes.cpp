#include <bits/stdc++.h>
using namespace std;
bool check_prime(int a)
{
    for (int i=2;i<=sqrt(a);i++)
    {
        if (a%i==0)
            return 0;
    }

    return 1;
}
bool check(int a)
{
    bool flag=0;
    if (check_prime(a)) return 1;
    for (int i=2;true;i++)
    {
        if (check_prime(i))
        {
            if (a%i==0)
            {
                a/= i;
                flag=1;
                if(a==1)
                    return 1;
            }
            else if (flag) 
                return 0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        if (check(a[i])&&a[i]>1)
            cout<<"NICE"<<endl;
        else
            cout<<"UGLY"<<endl;
    }
    return 0;
}