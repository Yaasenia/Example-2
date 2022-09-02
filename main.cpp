//
//  main.cpp
//  Rectangle shape with symbol using Nested for Loop
//
//  Created by Yesenia Armenta on 9/1/22.
//
#include<iomanip>
#include <iostream>
using namespace std;

int main() {
    
    int height, width;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for(int h=0;h<height;h++){
        for(int w=0; w<width; w++){
            cout<< setw(3) << symbol;
        }
        cout<<endl;
        
    }
    
    
}
