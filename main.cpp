#include <iostream>
#include <array>

using namespace std;

void cls() noexcept 
{
    for(int x=0;x<120;x++) cout << endl;
}
void cls(int lines) noexcept
{
    for(int x=0;x<lines;x++) cout << endl;
}


int main(int argc, char* argv[]){
    cls(4);
    array<string, 4> arr {"steve","eve","chloe","reg"};
    cout << arr.size() << endl;
    for (string output : arr)
    {
        cout << output << endl;
    }
    return 0;
}