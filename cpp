#INCLUDE<IOSTREAM>
#INCLUDE<CSTDLIB>
#INCLUDE<CTIME>

using namespace std;

int numaleatorio(int min, int max){
	int x=0;
	x=rand()%(min-max);
	return x;
}

main(){
	//p=1,m=2,pol=3,pris=4,fa1=5,fa2=6,fo1=7,fo2=8
	int margem1[8]={1,2,3,4,5,6,7,8}, margem2[8], barco[2], p=0, m=0, fa1=0,fa2=0,fo1=0,fo2=0,pris=0,pol=0, vaux[2], i=0;
	
	for(i=0;i<2;i++){
		barco[i]=numaleatorio(1,8);
	}
	
	if(barco[0]==3||barco[0==4]) {   //primeira rodada precisa sair o policial e a prisioneira
		if(barco[1]==3||barco[1]==4){
			for(i=2;i<3;i++){
				if(margem1[i]==3)
					margem1[i]=0;
			}
			for(i=3;i<4;i++){
				if(margem1[i]==4)
					margem1[i]=0;
			}
		}
	}
		
}
