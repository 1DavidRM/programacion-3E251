#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    vector<string> nombres;
    nombres.emplace_back("David");
    nombres.emplace_back("Nathaly");
    nombres.emplace_back("Tommy");

    cout<<  nombres.at(2) << endl;

    for(auto &&nombre : nombres) {
        cout << nombre << endl;
    }

    
    return 0;
}