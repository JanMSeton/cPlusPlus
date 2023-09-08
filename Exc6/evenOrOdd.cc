#include <iostream>
using namespace std;

int main()
{
    size_t value;
    cin >> value;

    cout << (value%2==0 ? "even" : "odd") << '\n'; // Determine if rest > 0

    cout << ((value ^ 0b00000001) < value ? "odd" : "even") << '\n'; // If odd, the last bit will change to 0, making a smaller value

    cout << ((value>>1)<<1 == value ? "even" : "odd") << '\n'; // If odd, the last bit, 1, will be leftshifted, and when shifted back it will be changed to 0

    cout << ((value & 0b00000001) ? "odd" : "even") << '\n'; // If odd, The last bit won't be changed 
 
    cout << ((value | 0b00000001) +(-value) ? "even" : "odd") << '\n'; // If even, the value will be incremented by 1, even values won't

    cout << ((value/2)*2 == value ? "even" : "odd") << '\n'; // Determine if there is truncation when dividing

}