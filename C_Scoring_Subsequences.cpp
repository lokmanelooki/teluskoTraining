//I am 1 oF MY KiND .PK

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<long long>
#define Map map<long long,long long>
#define Unmap unordered_map<long long,long long>
#define Set set<long long>
#define Unset unordered_set<long long>
#define push push_back

int fac (int n){
    if (n==0){
        return 1;
    }

    return fac(n-1)*n;
}

void Solve()
{

    int n;
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int start =0;
    int end =0;
    
    while (end!=n-1)
    {
        int s =start;
        int e =end;
        int m = (s+e)/2;

        while (s<e){
            if (m>e-m+1){
                e=m-1;
            }
            else if (m<e-m+1){
                s=m+1;
            }
            else {
                s=m;
                break;
            }
        }      
        int val=1;

        for (int i=e;i>=s; i++ ){
            val*=arr[i];
        }

        val/= fac (e-s+1);
        cout<<val<<" ";
    }

cout<<endl;
}

signed main(){
	cout<<"YES";

    int t;
    cin>>t;
    while (t--){

        Solve();
//git commit try;
    }

    //this is new line
return 0;
}
