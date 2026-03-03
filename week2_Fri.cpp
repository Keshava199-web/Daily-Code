#include<bits/stdc++.h>
using namespace std;
/*
void printhello(){
    cout << "hello World!" << endl;
}
int main(){
    printhello();
    return 0;
}   

int sumN(int n) {
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    cout << "Enter a number : " << sumN(5) << endl << sumN(15);
}   

int main(){
    // we need to encrypt the char and print another char and key is taken from user;
    char ch; int key;
    cin >> ch >> key;
    cout << "Enter a character : " << ch <<" and key is:"<< key << endl;
    char encrypt = ch + key;
    cout << "Encrypted character is : " << encrypt << endl;
}   

// Array rotation or string rotation towards right.
// string SameReflection(){
//     string word1 = "sample";
//     string word2 = "esampl";
//     if(word1 == word2){
//         return "1";
//     }
//     else{
//         return "-1";
//     }
// }
// int main(){
//     cout << SameReflection() << endl;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n=5,d=3;
//     for(int i=0;i<d;i++){
//         int temp = arr[n-1];
//         for(int j=n-1;j>0;j--){
//             arr[j] = arr[j-1];
//         }
//         arr[0] = temp;
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// *******POINTERS IN C++********
int main(){
    int num=30;
    int *p;
    p=&num; //store the addr of num variable;
    cout<<"Address of num is : "<<&p<<endl;
    cout<<"value of p variable is : "<<p<<endl;
    cout << "value of *p is: "<<*p<<endl;
    return 0;
}

int main(){ //swapping in pointers;
    int a=10,b=20,*p1=&a,*p2=&b;
    cout<<"Before swapping : *p1= "<<*p1<<" *p2= "<<*p2<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    cout<<"After swapping: *p1= "<<*p1<<" *p2= "<<*p2<<endl;
    return 0;
}
int square1(int n){
    cout << "Addr of n1 in square1() : " <<&n<<\n;
    n *= n;
    return n;
}
void square2(int* n){
    cout<<"addr of n2 in square2() : "<<&n<<endl;
    *n *= *n;
}
void square3(int *n){
    cout<<"addr of n3 in square3() : "<<n<<endl;
    n *= n;
}
void func1(){
    int n1=8;
    cout<<"addr of n1 in func1() : "<<&n1<<endl;
    cout<<"square of n1 : "<<square1(n1)<<endl;
    cout<<"No change in n1 : "<<n1<<endl;

    int n2=8;
    cout<<"addr of n2 in main() : "<<&n2<<endl;
    square2(&n2);
    cout<<"square of n2 : "<<n2<<endl;
    cout<<"change reflected in n2 : "<<n2<<endl;

    int n3=8;
    cout<<"addr of n3 in main() : "<<&n3<<endl;
    square3(n3);
    cout<<"square of n3 : "<<n3<<endl;
    cout<<"change reflected in n3 : "<<n3<<endl;
}

int main(){
    func1();
}   

void func1(){
    int val[3] = {5,10,20};
    int *ptr;
    ptr = val;
    cout<<"Elements of array are : "<<endl;
    cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<endl;
    cout<<ptr<<" "<<val<<" "<<&val<<endl;
    cout << &ptr;
}

int main(){
    func1();
}   

// an algorithm for sales team to find the no.of products out of N for which the discount will be distributed.
// IP : consists 1.no.of products ; discounted amount;
int main(){
    int no_of_products, discount_amount;
    cin>>no_of_products>>discount_amount;
    for(int i=0;i<no_of_products;i++){
        if(discount_amount % arr[i] == 0){

        }
    }
// }   

// write an algo to help a man to find out the total no.of lucky customers who will get the gift hampers;
int main(){
    int no_of_products, gifts, k, count=0;
    cin>>no_of_products>>gifts;
    int arr[no_of_products];
    for(int i=0;i<no_of_products;i++){
        cin>>arr[i];
    }
    for(int i=0;i<no_of_products;i++){
        if(arr[i]>k){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}   

// write a logic to find out the discount_amount to the given bill_amount;

int main(){
    int bill_amount, discount_amount;
    // int sum = bill_amount / discount_amount;
    cout << "Discounted_amount : " << sum << endl;
    cin >> bill_amount >> discount_amount;
    if(bill_amount % discount_amount == 0){
        cout << "Sum is : "<< sum <<endl;
    }
}   */

// write a logic to find out stock of smallest stocks  by using sorting;
int main(){
    }
}