#include<iostream>
using namespace std;
long long int binarysearch(int n){
        long long int start=0;
        long long int end=n;
        long long int mid=start+(end-start)/2;
        long long int ans=-1;
        while(start<=end){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            else if(square>n){
                end=mid-1;
            }
            else if(square<n){
                ans=mid;
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}



int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = binarysearch(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}


