/* 
 * File:   main.cpp
 * Author: liangjie
 *
 * Created on 2013年11月23日, 下午12:16
 */

#include <cstdlib>
#include <iostream>
#include <memory>

using namespace std;

/*
 * 
 */

void move_print(int n){
    unique_ptr<string> aa(new string("Hello World!"));
    for (int i=aa.length() - n; i<aa.length();i++){
        cout<<aa[i];
    }
    for (int i=0;i<aa.length()-n;i++){
        cout<<aa[i];
    }
}


int main(int argc, char** argv) {
    int n = 1;
    move_print(n);
    return 0;
}

