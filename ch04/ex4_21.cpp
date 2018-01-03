#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    vector<int> v{1,2,3,4,5,6,7,8,9};

    for(auto& i:v)
        i=(i&0x1)?i*2:i;
    
    return 0;
}
