#include<iostream>
int main (){
int m = 0 ;
Cout ("ingrese las dimenciones de la Matriz");
cin >> m ;
int matriz [m][m];
int matrizB [m][m];
	for (i=0;i<m;i++){
		for(j=0;j<m;j++){
		cout>>"ingrese el dato: ";
		cin<< matriz[i][j];
		}
	}
	for (i=0;i<m;i++){
		for(j=0;j<m;j++){
		matrizB [i][j]=matriz[j][i];
		cout (matrizB[i][j]);
		LLendL;
		}
	}
}
