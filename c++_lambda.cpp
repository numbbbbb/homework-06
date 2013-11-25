/* 
 * File:   main.cpp
 * Author: liangjie
 *
 * Created on 2013年11月23日, 下午12:02
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string aa = "Hello World!";
    int b = 0, c = 0;
    for_each(aa.begin(), aa.end(), [&b, &c](char a){if (a == 'l') {b++;} else if (a == 'e'){c++;};});
    cout<< "Number of e: " << c<<endl;
    cout<<"Number of l: "<<b<<endl;
    return 0;
}

