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
int main(){
    pattern_19();
    return 1;
}