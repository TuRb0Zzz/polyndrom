#include <iostream>
#include <fstream>
using namespace std;

bool polydrome(int number){
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
    f=fopen("polydrom.txt","a");
    int number;
    cin >> number; -- так работать не должно... на вход в аргументы программы передаётся имя файла и вы записываете результат обработки файла в другой
    if (polydrome(number)){
        fprintf(f,"%d is polydrom \n",number);
    }
    else{
        fprintf(f,"%d is not polydrom \n",number);
    }
    fflush(f);
    fclose(f);
    return 0;
}
