#include <bits/stdc++.h> 
using namespace std;

bool isSpecial(char a){
    if((a>=48 && a<=57) || (a>=65 && a<=90) || (a>=97 && a<=122)){
        return 0;
    }

    else{
        return 1;
    }
}

bool checkPalindrome(string s)
{
    string refined_string;
    for(int i=0; i<s.size(); i++){
        if(!isSpecial(s[i])){
            refined_string += s[i];
        }
    }
    
    int start = 0;
    int end = refined_string.size() - 1;

    while(start<=end){
        if(toupper(refined_string[start])==toupper(refined_string[end])){
            start++;
            end--;
        }

        else{
            return 0;
        }
    }

    return 1;
}

int main(){
    string s;
    cin>>s;
    if(checkPalindrome(s)){
        cout<<"Yes"<<endl;
    }
    else{
    cout<<"No"<<endl;
    }
    return 0;
}
