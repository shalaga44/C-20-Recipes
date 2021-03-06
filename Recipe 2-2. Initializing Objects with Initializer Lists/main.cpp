//
// Created by shalaga44 on 8/4/20.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    using MyVector = vector<int>;
    MyVector vectorA(1);
    cout << vectorA.size() << " " << vectorA[0] << endl;
    MyVector vectorB(1, 10);
    cout << vectorB.size() << " " << vectorB[0] << endl;
    initializer_list<int> initList{1, 10};
    MyVector vectorC(initList);
    cout << vectorC.size() << " " << vectorC[0] << endl;
    return 0;
}
