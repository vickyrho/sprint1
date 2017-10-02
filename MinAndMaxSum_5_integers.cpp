#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(5);
    long int MinSum = 0, MaxSum = 0;
    for(int i = 0; i < 5; i++){
       cin >> v[i];
    }
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size()-1;i++)
    {
        MinSum = MinSum + v[i];
        MaxSum = MaxSum + v[i+1];
    }
    
    cout<<MinSum<<" "<<MaxSum;
        
    
    return 0;
}

