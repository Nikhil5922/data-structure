#include<iostream>
#include<vector>
using namespace std;

    int countPrimes(int n) {
        int cnt=0;
        vector<bool>Primes(n+1,true);
            Primes[0]=Primes[1]=false;
            for(int i=2; i<n; i++){
                if(Primes[i])
                    cnt++;
                for(int j=2*i; j<n; j=j*i){
                    Primes[j]=0;
                   // cout<<j<<endl;
                }
        }
        return cnt-1;
        
    }

    int main(){
        int n=10;
        cout<<"the count is ->"<<countPrimes(10)<<endl;
    }