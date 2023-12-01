#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
   else if (b==0)
    {
        return a;
    }
    
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
main(){
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"GCD: "<<gcd(a,b);
  if (b == 0) {
        cout << "LCM: Undefined (one of the numbers is 0)" << endl;
    } else {
        cout << "\nLCM: " << lcm(a, b) << endl;
    }
}