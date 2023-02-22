#include <iostream>
using namespace std;

int main(){
	
	//Jogo da velha.
	
	cout<<"BEM-VINDO AO JOGO DA VELHA!";
	
	//Criação da base de gráfico.
	int ganho=0,t1,t2,t3,l,c,ganhador,testeempate;
	string p1,p2;
	char tela[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'}};
	
	while(ganho!=1){
	
		cout<<"\n\n  a b c\n";
		for(t1=0;t1<3;t1++){
			if(t1==0){
				t3=1;
			}else if(t1==1){
				t3=2;
			}else if(t1==2){
				t3=3;
			}
			cout<<t3<<" ";
			for(t2=0;t2<3;t2++){
				cout<<tela[t1][t2]<<" ";
			}
			cout<<"\n";
		}
		
		cout<<"\nPlayer 1 -> Faca seu moviemnto (ex: a1...): ";
		cin>>p1;
		
		//Base de conversão da jogada do p1 para substituição matricial.
		
		if(p1[0]=='a'){
			c=0;
		} else if (p1[0]=='b'){
			c=1;
		} else if (p1[0]=='c'){
			c=2;	
		}
		
		if(p1[1]=='1'){
			l=0;
		} else if (p1[1]=='2'){
			l=1;
		} else if (p1[1]=='3'){
			l=2;	
		}
		
		tela[l][c]='X';
		
		//Base de conversão da jogada do p2 para substituição matricial.
		
		cout<<"\n\n  a b c\n";
		for(t1=0;t1<3;t1++){
			if(t1==0){
				t3=1;
			}else if(t1==1){
				t3=2;
			}else if(t1==2){
				t3=3;
			}
			cout<<t3<<" ";
			for(t2=0;t2<3;t2++){
				cout<<tela[t1][t2]<<" ";
			}
			cout<<"\n";
		}
		
		//Teste de ganho de p1
		
		if (tela[0][0]==tela[0][1]&&tela[0][0]==tela[0][2]&&tela[0][0]!='_'||tela[1][0]==tela[1][1]&&tela[1][0]==tela[1][2]&&tela[1][0]!='_'||tela[2][0]==tela[2][1]&&tela[2][0]==tela[2][2]&&tela[2][0]!='_'||tela[0][0]==tela[1][1]&&tela[0][0]==tela[2][2]&&tela[0][0]!='_'||tela[0][2]==tela[1][1]&&tela[0][2]==tela[2][0]&&tela[0][2]!='_'){
			ganho=1;
			ganhador=1;
			break;
		}
		//Teste de empate por p1
		testeempate=1;
		for(t1=0;t1<3;t1++){
			for(t2=0;t2<3;t2++){
				if(tela[t1][t2]=='_')
					testeempate=0;
			}
		}
		if(testeempate==1){
			cout<<"\nEMPATE!\n";
			break;
		}
		
		cout<<"\nPlayer 2 -> Faca seu moviemnto (ex: a1...): ";
		cin>>p2;
		
		//Base de conversão da jogada do p1 para substituição matricial.
		
		if(p2[0]=='a'){
			c=0;
		} else if (p2[0]=='b'){
			c=1;
		} else if (p2[0]=='c'){
			c=2;	
		}
		
		if(p2[1]=='1'){
			l=0;
		} else if (p2[1]=='2'){
			l=1;
		} else if (p2[1]=='3'){
			l=2;	
		}
		
		tela[l][c]='O';
		
		//Teste de ganho de p2
		
		if(tela[0][0]==tela[0][1]&&tela[0][0]==tela[0][2]&&tela[0][0]!='_'||tela[1][0]==tela[1][1]&&tela[1][0]==tela[1][2]&&tela[1][0]!='_'||tela[2][0]==tela[2][1]&&tela[2][0]==tela[2][2]&&tela[2][0]!='_'||tela[0][0]==tela[1][1]&&tela[0][0]==tela[2][2]&&tela[0][0]!='_'||tela[0][2]==tela[1][1]&&tela[0][2]==tela[2][0]&&tela[0][2]!='_'){
			ganho=1;
			ganhador=2;
			break;
		}
		
		//Teste de empate por p2
		testeempate=1;
		for(t1=0;t1<3;t1++){
			for(t2=0;t2<3;t2++){
				if(tela[t1][t2]=='_')
					testeempate=0;
			}
		}
		if(testeempate==1){
			cout<<"\nEMPATE!\n";
			break;
		}
		
		
	}
	if (ganhador==1){
		cout<<"\nPLAYER 1 GANHOU O GAME!!!\n";
	}
	if (ganhador==2){
		cout<<"\nPLAYER 2 GANHOU O GAME!!!\n";
	}
	system("pause");
	return 0;
}
