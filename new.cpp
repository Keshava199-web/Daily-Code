// #include <iostream>
#include <bits/stdc++.h>
using namespace std; //date:28-01-2026[Day-Wednesday]
/*
int main(){
    // factors of a number;
    int n;
    cout << "enter a number";
    cin >> n;
    // cout << "Hello World";
}   

int main(){
    // find min & max in an given array;
    int n,i;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    int min, max;
    max = arr[0];
    min = arr[0];
    for(i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > max){
            max =arr[i];
            cout << "max value is eq : " << max << endl;
        }
        if(arr[i] < min){
            min=arr[i];
            cout << "min val is eq : " << min << endl;
        }
    }
}   

int main(){
    // binary to decimal ;
    int n;
    for(int i=0;i<=n;i++){
        int binary_num;
        cin >> binary_num;
        int decimal_num = 0, base = 1, last_digit;
        while (binary_num > 0){
            last_digit = binary_num % 10;
            decimal_num += last_digit * base;
            base = base * 2;
            binary_num = binary_num / 10;
        }
        cout << "Decimal equivalent: " << decimal_num << endl;
    }
}   

int main(){
    //  max & second max in an array; if
    int n,max,second_max;
    cout << "Enter size of an array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        if(arr[i] > second_max && arr[i] < max){
            second_max = arr[i];
        }
    }
    cout << "max val eq: " << max << endl;
    cout << "second max val eq: " << second_max << endl;
} 

// average of an array; (sum of an array)/nnumber of elements in an array

// arr[n] = {1 0 1 1 0 1 1 0 0 0 1}
int main(){
    int n;
    cin >> n;
    cout << "size of an array : " << endl;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum = sum+arr[i];
    }
    cout << "Avg. of array : " << sum/n << endl;
} 

// ****************************MNC questions****************************
// 1.I/P consists of integer data, representing the data to be transmitted.
// 2.op : print an integer the security key for given data .if no data is repeated it should display -1
// ex : I/P : 578378923 O/P : 3;

int main(){
    int n,ctr=0;
    cin >> n;
    int arr[n];
    // int rem = n % 10;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                ctr++;
                cout << "Security key is : " << ctr << endl;
            }
        }

    }
}   

// a program to calculate sum of distances b/w the adjacent elements of an array of positive integers.
// find total distance b/w adjacent elements of an array of 5 numbers;
// pattern : 1 1 1 2 2 2 2
//           3 3 3 2 2 2 2
//           3 3 3 4 4 4 4
//           4 4 4 5 5 5 5
int main(){
    int n;
    cin >> n;
    cout << "Enter the size of an array : " << endl;
    int arr[n];
    int sum;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum = sum+abs(arr[i]-arr[i-1]);
        cout << "Total distance b/w adj elements is : " << sum << endl;
    }
}   

int main(){ 
    int i,j,n;int arr[n][n];
    cin >> n >> i >> j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        // cout << endl;
    }
}   

int main(){
    int n,C;
    int A[n][n], B[n][n];
    cin >> n;
    cout << "Enter the n value : " << endl; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> A[i][j];
            cin >> B[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << A[i][j];
            cout << B[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "C = "<<A[i][j] + B[i][j] << " ";
        }
    }
}   

// diagonal matrix[condition:];
// 2.upper triangular matrix; 3. lower triangular matrix; 4 sum of upper ; lower triangular matrix;5.zero's on upper triangular matrix; 6.zero's on lower triangular matrix;
// row major order;column major order;
int main(){
    int n,arr[n][n];
    cin >> n;
    cout << "val of n is : " << n << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                cout << "Upper triangular matrix is : " << arr[i][j] << " ";
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout << "Lower triangular matrix is : " << arr[i][j] << " ";
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                cout << "Sum of upper triangular matrix is : " << arr[i][j] << " ";
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                cout << "Sum of lower triangular matrix is : " << arr[i][j] << endl;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++){
            if(i<j){
                arr[i][j] = 0;
                cout << "Zero's on upper triangular matrix is : " << arr[i][j] << endl;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++){
            if(i>j){
                arr[i][j] = 0;
                cout << "Zero's on lower triangular matrix is : " << arr[i][j] << endl;
            }
        }
    }
    return 0;
}   

int main(){
    // multiplication of two 2-D matrices;
    int n,k;
    int A[n][n], B[n][n], C[n][n];
    cin >> n;
    cout << "Enter the n value : " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> A[i][j];
            cin >> B[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C[i][j] = 0;
            for(k=0;k<n;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << "Multiplication of two matrices is : " << C[i][j] << " ";
        }
    }
} */