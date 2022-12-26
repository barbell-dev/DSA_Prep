#include<bits/stdc++.h>
using namespace std;
void pattern_1(){
    for(int i = 0;i<4;i++){
        for(int j =0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern_2(){
    for(int i = 1;i<=3;i++){
        for(int j=0;j<3;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern_3(){
    for(int i = 1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
        //cout<<endl;
    }
}

void pattern_4(){
    for(int i = 1;i<=3;i++){
        for(int j=3;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
        //cout<<endl;
    }
}
void pattern_5(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    int i = 1;
    for(int j = 0;j<n;j++){
        int k = 0;
        while(k<n){
            cout<<i<<" ";
            i++;
            k++;
        }
        cout<<endl;
    }
}
void pattern_6(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern_7(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    int k = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<i<<" ";
            k++;
        }
        cout<<endl;
    }
}

void pattern_8(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    int k = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
void pattern_9(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i = 1;i<=n;i++){
        int value = i;
        int column;
        for(column=1;column<=i;column++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
}
//Pattern 10 is an alternate way of printing the pattern 9.
void pattern_10(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int row=1;row<=n;row++){
        for(int j=row;j<=2*row-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern_11(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";               //ALITER : Use (i-j+1) formula.
        }
        cout<<endl;
    }
}
void pattern_12(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        char ch='A' + i-1;
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern_13(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }
}
void pattern_14(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void pattern_15(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<char('A'+i)<<" ";
        }
        cout<<endl;
    }
}
void pattern_16(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void pattern_17(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void pattern_18(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=2*i-1;j++){
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }
}
void pattern_19(){
    //D has an ASCII value of 68.
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    char ch = 'D';
    for(int i=0;i<n;i++){
        for(int j=68-i;j<=68;j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    
}
}
void pattern_20(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=i+2;j++){
            cout<<char(j-1+'A')<<" ";
        }
        cout<<endl;
    }
}
void pattern_21(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    //cout<<endl;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
}
void pattern_22(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    //cout<<endl;
    for(int i=0;i<n;i++){
        int j=0;
        while(j<n-i){
            cout<<"*";
            j++;
        }
        while(j<n){
            cout<<" ";
            j++;
        }
        cout<<endl;
    }
}
void pattern_23(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    //cout<<endl;
    for(int i=0;i<n;i++){
        int j=0;
        while(j!=i){
            cout<<" ";
            j++;
        }
        while(j<n){
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
}
void pattern_24(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    //cout<<endl;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
    }
}
void pattern_25(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        int j = 1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
    }
    
}
void pattern_26(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern_27(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    int num = 1;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        while(j<=n){
            cout<<num<<" ";
            num++;
            j++;
        }
        cout<<endl;
    }
}
void pattern_28(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    int num = 1;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        while(j<=n){
            cout<<num;
            num++;
            j++;
        }
        cout<<endl;
    }
}
void pattern_29(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        int num = i;
        while(num<n){
            cout<<" ";
            num++;
        }
        int start = 1;
        while(start<=i){
            cout<<start;
            start++;
        }
        int end = start-2;
        
        while(end>=1){
            
            cout<<end;
            end--;
        }
        //This below comented code is not mandatory because the spaces after decrementing the number from i are not necessary.
        /*while(end<i){
            cout<<" ";
            end++;
        }*/  
        cout<<endl;
    }
}
void pattern_30(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        int j=1;
        while(j<=n-i){
            cout<<j;
            j++;
        }
        int k=1;
        while(k<=2*i){
            cout<<"*";
            k++;
        }
        j--;
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
    }
}
int main(){
    pattern_30();
    return 1;
}
