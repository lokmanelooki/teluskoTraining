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

void Solve()
{

    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0;
    int t=n;
    while (i<n){
        if (arr[i]==t){
            t--;
        }
        else{
            break;
        }

        i++;
    }

    if (arr[0]==n){
        if (arr[1]==n-1){
            for (int i=1; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<arr[0];
            
        }
        else{
            int l;
            for (int i=0; i<n; i++){
                if (arr[i]==n-1){
                    l=i;
                }
            }
            for (int j=l; j<n; j++){
                cout<<arr[j]<<" ";
            }
            int k=l-1;
            while (arr[k]>arr[k-1]){
                k--;
            }

            for (int j=l-1; j>k; j--){
                cout<<arr[j]<<" ";
            }
            for (int j=0; j<l-1; j++){
                cout<<arr[j]<<" ";
            }
        }
        
    }
    else if(arr[n-1]==n){
        int i=n-2;
        while (arr[i]>arr[0] && arr[i-1]<arr[i]){
            i--;
        }
        cout<<arr[n-1]<<" ";

        for (int j=n-2; j>i; j--){// sus
            cout<<arr[i];
        }
        for (int j=0; j<=i; j++){
            cout<<arr[j]<<" ";
        }

    }

    else{
        
        int ind=0; 
        while (arr[ind]!=n){
            ind++;
        }
        int i;
        for (i=ind; i<n; i++){
            cout<<arr[i]<<" ";
        }
        i=ind-1;
        while (arr[i-1]>arr[i]){
            i--;
        }
        for (int j=ind-1; j>=i; j--){
            cout<<arr[j]<<" ";
        }
        for (int j=0; j<i; j++){
            cout<<arr[j]<<" ";
        }

    }
    cout<<endl;

}

signed main(){

    int t;
    cin>>t;
    while (t--){

        Solve();

    }

return 0;
}