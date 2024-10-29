#include <iostream>
#include <cmath>
using namespace std;
int main(){
int N;
cin >> N;
int i = 1;
while (i%N != 0 ){
    i=i*2;
    
}

if (i == N){
    cout<<"YES";
}
else 
{
    cout<<"NO";
}
}
