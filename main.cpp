#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <string.h>
#include <vector>

#include <map>

using namespace std;

template <class T>
void mySort(vector<T> &v){
	map<T, unsigned short> elementMap;
    for (int i = 0; i < v.size(); ++i)
        ++elementMap[v[i]];
    unsigned short index = 0;
    for (auto it = elementMap.begin(); it != elementMap.end(); ++it) {
        for (unsigned short i = 0; i < it->second; ++i)
            v[index++] = it->first;
    }
    elementMap.clear();
}

int main()
{
    vector<string> v = {"Mama", "Abc", "Abc", "V", "V", "V", "ABC", "ABC"};
    mySort(v);
    for (auto element : v)
        cout << element << " ";
    cout << endl;
    vector<int> s = {1,8,7,5,5,11,4,400};
    mySort(s);
    for (auto element : s)
        cout << element << " ";
    return 0;
}