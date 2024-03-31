#include<stdio.h>
#include<string.h>

int main(){

    struct student {
	int age;
	char first_name[20];
	char last_name[10];
	int data_structure;
	int os;
	int networking;
    };
    struct student abebe;
    // to use the ff line comment the above declaration.
    /* struct student abebe={24, "Abebe", "kebede", 89, 90, 78}; */
    strcpy(abebe.first_name, "Abebe");
    strcpy(abebe.last_name, "Kebede");
    abebe.age = 24;
    abebe.os = 89;
    abebe.networking = 78;
    abebe.data_structure = 83;

    printf("%d\n", abebe.os);
    printf("%s ", abebe.first_name);
    printf("%s\n", abebe.last_name);
 
    
    
}
