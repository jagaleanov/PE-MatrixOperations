//Laboratorio matrices
/*
Plantear un programa que permita definir 2 matrices A y B de tamaño n*n (cuadradas) con datos enteros y permita determinar:
C = A+B
D = A-B
E = A*B
El programa debe mostrar A,B,C,D,E y el tama�o n*n.
*/

#include <iostream>

using namespace std;

int main()
{
	int n,i,j,k,w,z;
	
	cout<<"Ingrese el valor n del tama�o de las matrices A y B"<<endl;//solicitamos el tama�o de la matriz cuadrada al usuario
	cin>>n;
	
	if(n<0)//si n es negativo
	{cout<<"n debe ser mayor o igual que 0"<<endl;}//mostramos error
	else//si no,...
	{
		//Declaramos todos los arreglos a usar del tama�o que el usuario ingreso
		int
		A[n][n],
		B[n][n],
		C[n][n],
		D[n][n],
		E[n][n];
			
		//MATRIZ A
		//recorremos la matriz A y ...
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<"Ingrese el valor de A["<<i<<"]["<<j<<"]"<<endl;//...pedimos al usuario que llene cada valor
				cin>>A[i][j];
			}
		}
		
		//MATRIZ B
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<"Ingrese el valor de B["<<i<<"]["<<j<<"]"<<endl;
				cin>>B[i][j];
			}
		}
		
		//SUMA Y RESTA
		//recorremos las 2 matrices ...
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				C[i][j] = A[i][j] + B[i][j];//...asignamos la suma
				D[i][j] = A[i][j] - B[i][j];//...y la resta
				
			}
		}
		
		//MULTIPLICACION
		//recorremos lamatriz E
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				z=0;
				for(k=0;k<n;k++)//y vamos llenando cada campo con la sumatoria de la multiplicacion requerida
				{
					z+=A[i][k] * B[k][j];
				}
				E[i][j] = z;
				//cout<<"E["<<i<<"]["<<j<<"] "<<E[i][j]<<endl;
			}
		}
		//SALIDA
		cout<<endl<<"La matriz A es:"<<endl;
		
		//recorremos lamatriz A...
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<A[i][j]<<" ";//...y vamos imprimiendo cada campo en pantalla
			}
			cout<<endl;
		}
		cout<<endl;
		
		cout<<"La matriz B es:"<<endl;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<B[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		cout<<"La matriz C (A+B) es:"<<endl;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<C[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		cout<<"La matriz D (A-B) es:"<<endl;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<D[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		cout<<"La matriz E (A*B) es:"<<endl;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<E[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		
		cout<<"El tama�o de las matrices es de "<<n<<" por "<<n<<endl<<endl;//imprimimos el tama�o de las matrices
	}
	
	system("pause");
	return 0;
}
