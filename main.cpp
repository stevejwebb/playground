#include <iostream>


using namespace std;

int main(int argc, char* argv[]){
    cout << "Hello World!" << endl;
    int x = 56;
    int *p = &x;
    cout << "p points to memory that contains " << *p << endl;
    *p = 99;
    cout << "p points to memory that contains " << *p << endl;
    int v[] {0,1,2,3,4,5,6,7,8,9};
    int *ap = v;
    for (int i = 0; i < 9; i+=2)
    {
        cout << ap[i] << endl;
    }
    
    return 0;
}