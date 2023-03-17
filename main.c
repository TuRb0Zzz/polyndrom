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
	всегда надо проверять критические условия....
		а что будет если кто-то забыл передать файл??
	поэтому
	if (argc == 1) {
		std::cout << "please give me file!!!" << std::endl;
		return 1;
	}

	а что будет если такого файла нет?
	if (!FileExists(argv[1])) {
		return 1;
	}


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
