#include <iostream>
#include <climits>



int get_fibonacci_last_digit_fast(int n)
 {
     if (n <= 1 )
     {
        return n;
     }
     int a = 0, b = 1, temp;
     
        for ( int index = 1; index < n; index++) 
        {
        temp = b;
        b = (b + a)%10;
        a = temp%10;        
    
        }
        return b;
         
 }
int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    
    std::cout << c << '\n';
    }
 

