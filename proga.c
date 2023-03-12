#include <iostream>
#include <fstream>
using namespace std;

bool polydrome(int number){
    if(number < 0){
        return false;
    }
    int polydrom = 0;
    int num = number;
    while(num != 0){
        polydrom = polydrom*10 + num%10;
        num /= 10;
    }
    if (number != polydrom){
        return false;
    }
    return true;
}

int main(int argc, char** argv){
    FILE* f;
    FILE* r;
    r=fopen(argv[1],"r");
    f=fopen("polydrome.txt","a");
    int number;
    while(!feof(r)){
        fscanf(r,"%d ",&number);
    if (polydrome(number)){
        fprintf(f,"%d is polydrom \n",number);
    }
    else{
        fprintf(f,"%d is not polydrom \n",number);
    }
    }
    fflush(f);
    fclose(f);
    fclose(r);
    return 0;
}
