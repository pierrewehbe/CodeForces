#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n ;
    cin >> n ;
    
    int one = 0 ;
    int two = 0 ;
    int three = 0 ;
    int four = 0 ;
    
    int garbage;
    
    for ( int i = 0 ; i < n ; i++){
        cin >> garbage ;
        switch (garbage) {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            default:
                break;
        }
    }
    
    int _31 = 0 ;
    int remainder_1 = 0 ;
    int remainder_3 = 0;
    
    
    if (three == one ){
        _31 = one;
    }else if (three > one){
        _31 = one ;
        remainder_3 = three - one;
    }else{
        _31 = three ;
        remainder_1 = one - three;
    }
    
    
    
    int _22 = 0 ;
    int remainder_2 = 0;
    if ( two%2 == 0){
        _22 = two / 2 ;
    }else{
        _22 = two / 2 ;
        remainder_2 = 1 ;
    }
    
    int _21 = 0 ;
    if (remainder_2 != 0){
        if (remainder_1 >= 2 ){
            _21 = 1;
            remainder_2--;
            remainder_1 -= 2 ;
        }
        if ( remainder_1 == 1 ){
            _21 = 1;
            remainder_2--;
            remainder_1--;
            
        }
    }
    
    int _1111 = 0 ;
    while (remainder_1 >= 4){
        _1111++;
        remainder_1 -= 4;
    }
    
    if (remainder_1 != 0 )
        _1111++;
    
    
    int result = four + _31 + remainder_3 + _22 + _21 + _1111 + remainder_2 ;
    cout << result <<endl;
    
    return 0 ;
}
