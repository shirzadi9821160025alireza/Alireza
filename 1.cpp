#include <fstream>
#include <iostream>

using namespace std;

int main(){
    int i;
    ofstream f1("2.out.txt");
    for(i = 0;i<20;i++){
        if(i%2==0)
            f1 << i << endl;
    }
    f1 << "Alireza Shirzadi" << endl;
    f1.close();
    return 0;
}
