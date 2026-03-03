#include<bits/stdc++.h>
using namespace std;

// pattern printing
/*

int main(){
int n=5;int arr[n];
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-1;j++){
        cout<<j;
        if(i==4){
            cout << "break";
            break;
        }
        cout << endl;
    }
}
}   

int main(){
    int n=5;
    int arr[n];
    for(int i=1;i<n;i++){
        for(int j=1;j==n;j++){
            cout << j;
            if(j==3 || j >= 3)
                cout << "break";
        }
        cout <<endl;
    }
}   

int main(){
    int n=5;
    int arr[n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=5;j++){
            cout << j;
            if(j==3)
                cout << "break";
        }
    }
}  

int main(){
    int n=5;
    int arr[n];
    for(int i=1;i<=n;i++){
        for(int j=1;j=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}    
// #include <iostream>
// using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for(char ch = 'A'; ch<('A'+i); ch++) {
            cout << " "<<ch;
        }
        cout <<"."<< endl;
    }
    return 0;
}   

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        cout<<endl;
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
    }
}

// 1.pattern; 1.string; 1.integer;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        cout<<endl;
        for(int k=1;k<=(2*i-1);k++){
            cout<<i;
        }
    }
}   

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k=1;k<= (2*i-1); k++) {
            cout << i;
        }
        cout << endl; 
    }
    return 0;
}


int main(){
    int n=5;
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
            // cout << j;
        }
        for(int k=1;k<=(2*i-1);k++){
            // cout<<j;
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}   

int main(){
    char ch;
    int n = 4;
    for (int i=1; i<=n; i++) {
        for(char ch='A'; ch<('A'+i); ch++) {
            cout << "  "<<ch;
        }
        cout << endl;
        for(int k=1;k<=(2*i+2);k++){
           if(k%2==0){
                cout<<ch;
                continue;
           }
        }
    }
}   
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        cout<<endl;
        for(int k=1;k<=i;k++){
            cout<<" * ";
        }
    }
}       A
       B B
      C C C
     D D D D

        A
       B C
      D E F
     G H I J
    
int main(){
    char ch;
    int n = 4;
    for (int i=1; i<=n; i++) {
        for(char ch='A'; ch<('A'+i); ch++) {
            cout << "  "<<ch;
        }
        cout << endl;
        for(int k=1;k<=(2*i+2);k++){
        //    if(k%2==0){
                cout<<ch;
                // continue;
        //    }
        }
    }
}       

// #include<iostream>
// using namespace std;
// rectangle with inside space pattern 
int main(){
    int r,c;
    cin>>r>>c;
    cout<<"rows: "<<r <<"cols :"<<c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 || j==1 || i==r || j==c)    
                cout<<"*";
            else
                cout<<" ";
        }
    }
    return 0;
}   

    555555555
     4444444
      33333
       222
        1

    11 12 13 14 15
      7  8  9  10
       4  5  6  
        2   3
          1


int main(){
    int n=5;
    // cin>>n;
    for(int i=n;i>n;i--){
        for(int j=11;j>n;j--){
            cout<<" ";
        }
        for(int k = 1;k>n;k--){
            cout<<n;
        }
    }
}


        A
      A B A
    A B C B A

        1
      1 2 1
    1 2 3 2 1    

*/
// ===============================================================================================

int main(){
    char ch;
    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(char ch='A';ch<'A'+i;ch++)
            cout<<ch<<" ";
        for(char ch='A'+i-2;ch>='A';ch--)
            cout<<ch<<" ";
        cout<<endl;
    }
}


