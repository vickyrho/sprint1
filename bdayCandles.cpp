#include <bits/stdc++.h>

using namespace std;

int findMax(vector<int> v)
{
    int max=-9999;
    
    for(int i=0;i<v.size();i++)
    {
        if(max<v[i])
            max=v[i];
    }
    
    return max;
}

int numberOf(vector<int> v,int t)
{
    int count = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==t)
            count++;
    }
    return count;
}

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int t=findMax(ar);
    int count = numberOf(ar,t);
    
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

