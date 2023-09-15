#include <bits/stdc++.h> 

int getLength(string str){
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }

    return count;
}

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
    int n1 = getLength(s);

    string refined_string;
    for(int i=0; i<n1; i++){
        if(!isSpecial(s[i])){
            refined_string += s[i];
        }
    }
    int n2 = getLength(refined_string);
    int start = 0;
    int end = n2-1;

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
