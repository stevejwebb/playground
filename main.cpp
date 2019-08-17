#include <iostream>
#include <array>

using namespace std;

int main(int argc, char* argv[]){
    array<string, 4> arr {"steve","eve","chloe","reg"};
    cout << arr.size() << endl;
    for (string output : arr)
    {
        cout << output << endl;
    }
    return 0;
}