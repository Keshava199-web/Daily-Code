#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    int n;
    cout << "the val of n is : " << n << endl;
    cin >> n;
}
    
int main(){
    int n = 3;
    for(int i = 0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}   

int main(){
    int n = 3;
    for(int i =0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout << ch ;
            ch++;
        }
    }
}   

int main(){
    int n=3;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
}   

int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<i+1;j++){
            cout << "*";
            // i++;
        }
        cout << endl;
    }
}   

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=1;j<i+1;j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}       
// class from 10-11AM 
// 1.check the given char is vowel or not?
#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout << "vowel" << endl;
    }
    else{
        cout << "consonant" << endl;
    }
}   

// take a string as ip and display all vowels from a string;

int main(){
    string str;
    cin >> str;
    cout << "Enter a string : " << str << endl;
}   

// reverses a string; palindrome check;
int main(){
    string str = "keshava";
    reverse(str.begin(),str.end());
    cout <<"Reverse String : " << str << endl;
}  

// frequency of all characters in a string;
int main(){
    string str; 
    int freq[256];
    cin >> str;
    cout << "Enter a string : " << str << endl;
    for(int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
}    

// write a program to calculate SI,CI or both,if user enters a display a after taking p,t,r values;
int main(){
    int p,t,r;
    float SI,CI;
    char ch;
    cout << "Enter the values of principal : \n"<< p << "time: \n" << t << "and rate : \n" << r << endl;
    cin >>p>>t>>r>>ch;
    
    SI = (p*t*r)/100;
    CI = 1+(p+t+r)/100;
    if(ch=='a'){
        cin >> p >> t >> r;
        cout<<"Simple interest is: "<<SI<<endl;
    }
    else if(ch=='b'){
        cin >> p >> t >> r;
        cout<<"Compound Interest is: "<<CI<<endl;
    }
    else if(ch=='c'){
        cin>>p>>t>>r;
        cout<<"Simple interest is: "<<SI<<endl;
        cout<<"Compound interest is: "<<CI<<endl;
    }
    else{
        cout << "No Interest"<<endl;
    }
}   

// IP :1.no.of elements in array;2.ip consists of n-space-separated integers representing elements of array
// OP: print n integers of array such that all the odd numbers are printed first followed by all the even numbers.
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout << arr[i] << " ";
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout << arr[i] << " ";
        }
    }
    return 0;
} 

// 
// OTP generation
// IP: 2 space separated integers - firstnum, & secondnum two numbers entered by user.both numbers are of 2 digits.eg.:-97 50
// OP: print integer represent the sum of largest_num & smallest_num prime_num in range of given numbers. eg.: 50.
*/
#include <iostream>
using namespace std;

bool isPrime(int n) {
    n = abs(n);
    if (n <= 1)
        return false;

    for (int i = 2; i * i <=n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    int start = min(a, b);
    int end = max(a, b);

    int smallest = 0;
    int largest= 0;
    bool isFound = false;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            if (!isFound) {
                smallest = i;
                isFound = true;
            }
            largest = i;
        }
    }

    if (!isFound) {
    } 
    else {
        cout << smallest +largest;
    }

    return 0;
}