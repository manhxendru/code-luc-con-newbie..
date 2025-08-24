#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[]="hello,world";
    int s1=sizeof(s)/sizeof(s[0])-1;
    int s2=0;
    while(s[s2]!='\0'){
        s2++;
    }
    cout<<s1<<" "<<s2<<endl;
    return 0;
}