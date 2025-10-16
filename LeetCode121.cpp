#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese el número de días"<<endl;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese el valor del día "<<i+1<<endl;
        cin>>prices[i];
    }
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
    }
    
    cout<<"El máximo profit posible es "<<maxProfit<<endl;
}