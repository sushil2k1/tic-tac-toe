#include<stdio.h>
#include<conio.h>
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void printboard(){
	printf("=== Tic Tak Toe ==\n\n");
	printf("    |    |    \n");
	printf("  %c | %c  |%c  \n",board[1],board[2],board[3]);
	printf("____|____|____\n");
	printf("    |    |    \n");
	printf("  %c | %c  |%c  \n",board[4],board[5],board[6]);
	printf("____|____|____\n");
	printf("    |    |    \n");
	printf("  %c | %c  |%c  \n",board[7],board[8],board[9]);
	printf("    |    |    \n");
	printf("\n\n\n");

}
int check(){
	if(board[1]==board[2] && board[2]==board[3]){
		return 1;
	}
	if(board[4]==board[5] && board[5]==board[6]){
		return 1;
	}
	if(board[7]==board[8] && board[8]==board[9]){
		return 1;
	}
	if(board[1]==board[4] && board[4]==board[7]){
		return 1;
	}
	if(board[2]==board[5] && board[5]==board[8]){
		return 1;
	}
	if(board[3]==board[6] && board[6]==board[9]){
		return 1;
	}
	if(board[1]==board[5] && board[5]==board[9]){
		return 1;
	}
	if(board[3]==board[5] && board[5]==board[7]){
		return 1;
	}
	
	int c=0;
	int i;
	for(i=1;i<=9;i++){
		if(board[i]=='X' || board[i]=='O'){
			c++;
		}
	}
	
	if(c==9){
		return 0;
	}
	return -1;
	
	
}



int main(){
	int p=1,input,status=-1;
	printboard();
	
	
	while(status==-1){
	p=(p%2==0)?2:1;
	char mark=(p==1)?'X':'O';
	
	printf("Enter the number for player  %d\n",p);
	scanf("%d",&input);
	printf("%c ",board[10]);
	if(input<1 || input>9){
		printf("invalid input \n");
	}
	if(board[input]=='O' || board[input]=='X'){
		printf("This slote is alreay Filled you cannot replace it \n\n  ====  TRY AGAIN  ====	\n\n\n");
	}
	else{
	board[input]=mark;
	printboard();
	
	int res=check();
	if(res==1){
		printf("====  Player %d is winner  ====\n\n",p);
		status=1;
	}
	else if(res==0){
		printf("=== Game is Draw ===");
		status=1;
	}
	
	
	
	
	p++;
	}
	
}
	
}

