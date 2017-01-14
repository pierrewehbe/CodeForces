#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    long double n , m ,a ;
    cin >> n >> m >> a;
    
    if ( a*a > m*n){
        cout << 1 << endl;
        return 0 ;
    }
    
    if ( n/a == (long long int)(n/a)){
        
    }else{
        
           n =  ((long long int)(n/a) + 1 ) * a ;
    }
    
    if ( m/a == (long long int)(m/a)){
        
    }else{
        m= ((long long int)(m/a) + 1 ) * a ;
    }
    
    cout << setprecision(20) <<   (long long )(m*n)/(a*a) << endl;
    
    
    
    return 0;
}

