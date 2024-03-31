#include<stdio.h>

void print_table(int [][3]);
void user_play(int [][3]);
void pc_play(int [][3]);

int main(){
    int tictactoe [3][3];
    print_table(tictactoe);

    
}

void user_play(int array_2d[][3]){

}

void pc_play(int array_2d[][3]){

}

void print_table(int array_2d[][3]){
    for(int i = 0; i < 3;i++){
	printf("|");
	for(int j = 0; j < 3; j++){
	    printf("%3d", array_2d[i][j]);
	    printf("|");
	}
	printf("\n");
	int k = 0;
	while(k < 13){
	    if(k == 0 || k == 4 || k == 8 || k == 12)
		printf("+");
	    else
		printf("-");
	    ++k;
	}
	printf("\n");
    }
}

