#include <iostream>
#include <array>

using namespace std;

int main(int argc, char* argv[]){
    array<int, 4> arr {1,2,3,4};
    for (int output : arr)
    {
        cout << output << endl;
    }
    return 0;
}