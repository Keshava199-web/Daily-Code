#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;

// vector : Dynamic memory allocation ; memory allocation during "Runtime";"heap memory segent is used.";slower compare to array; 
// array : static memory allocation; memory allocation during compile time; stack memory segment is used;faster compare to vector;

// findout squares that are in square from are 81,25,64.so,the output is 3;
// int main(){
//     int arr[] = {81,25,64};
//     cout << "square of 8 is : " << arr[2] <<endl;
// }
/*
int main(){
    // compare 2 str's using compare fxn,by using this fxn and print missing value out of both strings;
    string a = "abcdefghijklmnop";
    string b = "abcdefghijklm";
    if(a!=b){
        cout << "The missing digit : " <<a.compare(b) <<endl;
    }
    else {
        cout << "No missing string!";
    }
}   

// reverse of a number;
int main(){
    int a = 4556789;
    string s = to_string(a);
    reverse(s.begin(), s.end());
    cout << "the reverse number is : " << s << endl;
}   

// fibonacci series
int main(){
    int arr[] = {1,1,2,3,5,8,11,21};
    int n = 8;
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
}   

int main(){
    vector<string> cars = {"Audi", "MB", "BMW", "Tesla"};
    cout << cars.front() << " "; //print first element;
    cout << cars.back() << " ";     //print last element;
    cars[1] = "Nvidia";  //replace with MN with NVIDIA;
    cout << cars.at(1) << " ";
}   */