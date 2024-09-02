//
//  main.cpp
//  Now Where Did I Put That?
//
//  Created by Zachary Nesvacil on 8/27/24.
//

#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int find(string str, char c)
{
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == c) {
            return i;
        }
    }
    return -1;
}

int find(string str, string c)
{
    for (int i = 0; i < str.size(); i++) {
        if (str.substr(i,c.size()) == c) {
            return i;
            }
        }
    
    return -1;
}

int main() {
    cout << "Testing...\n\n";
    
    assert(find("This program is awesome", 's') == 3);
    assert(find("This program is awesome", "s") == 3);
    assert(find("This program is awesome", "s") != 14);
    assert(find("!!!!!", "?????") == -1);
    assert(find("WHAT", "HAT") == 1);
    
    cout << "Success!!\n\n";
    
    return 0;
}
