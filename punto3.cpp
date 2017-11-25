#include<iostream>
int main (){
int m = 0 ;
int npar = 0 ;
int nimpar = 0;
int npos = 0;
int nneg = 0 ;
String cpar = "";
String cimpar = "";
String cpos = "";
String cneg = "";
Cout ("ingrese las dimenciones de la Matriz");
cin >> m ;
int matriz [m][m];
	for (int = 0 ;i<m ;i++){
		for (int = 0 ;i<m ;i++){
			matriz[i][j] = rand ()% 100 - 100;
		}
	}
	for(int i = 0;i<m;i++){
		for(int j = 0; j<m;i++){
			if(matriz[i][j]%2 == 0){
				npar++;
				cpar = cpar + matriz [i][j] + ",";
			}
			else if (matriz[i][j]%2 != 0){
				nimpar ++ ;
				cimpar = cimpar+ matriz[i][j] + ",";	
			}
			if(matriz[i][j]< 0 ){
				nneg ++;
				cneg = cneg + matriz [i][j] + ",";
			}
			else if(matriz[i][j]>= 0){
				npos++;
				cpos = cpos + matriz[i][j]+ ",";			
			}
		}
	}
	cout <<"la cantidad de números pares encontrados son: " + npar;
	cout <<"la cantidad de números impares encontrados son: " + nimpar;
	cout <<"la cantidad de números negativos encontrados son: " + nneg;
	cout <<"la cantidad de números positivos encontrados son: " + npos;
	cout <<"los numeros pares encontrados son: "+ cpares;
	cout <<"los numeros impares encontrados son:" + cimpar;
	cout <<"los numeros negativos encontrados son:" + cneg;
	cout <<"los numeros positivos encontrados son:" + cpos;
	
}


