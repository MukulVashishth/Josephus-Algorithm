#include<bits/stdc++.h>
using namespace std;
int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

            //ITERATIVE
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     int n,k;
    //     cin >> n >> k;
    //     int res=0;
    //     for(int i=1;i<=n;i++)
    //     {
    //         res = (res+k)%i;
    //     }
    //     cout << res+1 << endl;
    // }
            //RECURSION
        int josephus(int n, int k)
{
   //Your code here
   if(n==1)
        return 1;
   else
        return (josephus(n-1,k)+k-1)%n+1;
}
	return 0;
}