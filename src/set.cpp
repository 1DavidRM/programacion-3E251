#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
    set<int> conjunto1= {1, 2, 3, 4};   
    set<int> conjunto2= {1,2};
    set<int> conjunto3;
    conjunto3.insert(conjunto1.begin(), conjunto1.end());
    conjunto3.insert(conjunto2.begin(), conjunto2.end());

    for (int elem : conjunto3) {
        cout << elem << " ";
    }
    cout<<"conjunto de elementos 1" << conjunto1.size()<<endl; 
    cout<<"conjunto de elementos 2" << conjunto2.size()<<endl; 
    cout<<"conjunto de elementos 3" << conjunto3.size()<<endl; 

    return 0;
}