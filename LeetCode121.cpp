#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese el número de días"<<endl;
    cin>>n;
    if(1<n && n<10^5){
        int prices[n];
        for(int i=0;i<n;i++){
            cout<<"Ingrese el valor del día "<<i+1<<endl;
            int a;
            cin>>a;
            while(a<0 || 100000<a){
                cout<<"El valor debe estar entre 0 y 10^4"<<endl;
                cout<<"Ingrese el valor del día "<<i+1<<endl;
                cin>>a;
            }
            prices[i]=a;
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
    else{cout<<"El número debe ser entre 1 y 10^5"<<endl;}
}