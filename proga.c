#include <iostream>
#include <fstream>
using namespace std;

bool polydrome(int number){
    int polydrom=0;
    int num=number;
    while(num!=0){
        polydrom=polydrom*10+num%10;
        num/=10;
    }
    if (number!=polydrom){
        return false;
    }
    return true;
}

int main(){
    FILE* f;
    f=fopen("polydrom.txt","a");
    int a;
    cin>>a;
    if (polydrome(a)){
        fprintf(f,"%d is polydrom \n",a,a);
    }
    else{
        fprintf(f,"%d is not polydrom \n",a,a);
    }
    fflush(f);
    fclose(f);
    return 0;
}
