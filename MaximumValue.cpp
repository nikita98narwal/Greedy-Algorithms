#include <bits/stdc++.h> 
      using namespace std;
     bool comp(pair<int, int> a, pair<int, int> b) 
    { 
    return (double)a.first/ a.second > 
                   (double)b.first/ b.second; 
    }  
    double fractionalKnapsack(int W,pair<int, int>arr[], int n) 
    { 
    sort(arr, arr + n, comp); 
    int curWeight = 0;
    double finalvalue = 0.0;  
    for (int i = 0; i < n; i++) 
    { 
        if (curWeight + arr[i].second <= W) 
        { 
            curWeight += arr[i].second; 
            finalvalue += arr[i].first; 
        } 
        else
        { 
            int remain = W - curWeight; 
            finalvalue += arr[i].first * ((double) remain / arr[i].second); 
            break; 
        } 
    } 
    return finalvalue; 
    }  
     int main() 
    { 
    int n,w;
    cin>>n>>w;
    pair<int ,int> p[n];

    for(int i=0;i<n;i++)
      cin>>p[i].first>>p[i].second;

    cout<<lround(fractionalKnapsack(w, p, n)); 
    return 0; 
    } 
