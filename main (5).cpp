#include <bits/stdc++.h>

using namespace std;

vector<int> GenerarVector(vector<int> A, int n);
void MostrarVector(vector<int> A);
float Promedio(vector<int> A, int n);
vector<int> GenerarVectorB(vector<int> A, int n, float promedio);
void MostrarVectorB(vector<int> B);
int Multiplosdedos(vector<int> B);
int Multiplosdetres(vector<int> B);
int SumarElementosVector (vector<int> B);
int SumarElementosVectorA (vector<int> A);
vector <int>MultiplicacionVector(vector<int>A , vector<int> C);
void MostrarVectorC(vector <int>C);
int main()
{
    int n;
    cout << "Ingrese cantidad de elementos del vector: ";
    cin >> n;
    vector<int> A, B , C;
    A = GenerarVector(A, n);
    MostrarVector(A);
    cout << "El promedio del vector A es: " << Promedio(A, n) << endl;
    float promedioA = Promedio(A, n);
    B = GenerarVectorB(A, n, promedioA);
    cout << "Vector B: ";
    MostrarVectorB(B);
    cout<<"multiplos de 2:  "<<Multiplosdedos(B)<<endl;
    cout<<"multiplos de 3:  "<<Multiplosdetres(B)<<endl;
    cout<<"la suma de todos los elementos del vector B es :  "<<SumarElementosVector(B)<<endl;
    cout<<"la suma de todos los elementos del vector A es :  "<<SumarElementosVectorA(A)<<endl;
    cout<<"la multiplicacion de A*2 es : ";
   C= MultiplicacionVector(A,C);
    MostrarVectorC(C);
    cout<<endl;
    return 0;
}

vector<int> GenerarVector(vector<int> A, int n)
{
    srand(time(NULL));
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 32000;
        A.push_back(e);
    }
    return A;
}
void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}
float Promedio(vector<int> A, int n)
{
    float suma = 0;
    for (int i = 0; i < A.size(); i++)
    {
        suma += A[i];
    }
    float promedio = suma / n;
    return promedio;
}
vector<int> GenerarVectorB(vector<int> A, int n, float promedio)
{
    vector<int> B;

    for (int i = 0; i < n; ++i)
    {
        if (A[i] > promedio)
        {
            B.push_back(A[i]);
        }
    }
    return B;
}
void MostrarVectorB(vector<int> B)
{
    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << "/";
    }
    cout << endl;
}
int Multiplosdedos(vector <int> B)
{
	int i;
	int Contador=0;
	for(i=0; i<B.size(); i++)
	{
		if(B[i]%2==0)
		{
			
			Contador++;
		}
		
	}
	return Contador;
} 
int Multiplosdetres(vector <int> B)
{
	int i;
	int Cont=0;
	for(i=0; i<B.size(); i++)
	{
		if(B[i]%3==0)
		{
			
			Cont++;
		}
		
	}
	return Cont;
} 
int SumarElementosVector (vector<int> B)
{
    int suma=0;
    for(int i=0;i<B.size();i++){
        suma+=B[i];
    }
    return suma;
}
int SumarElementosVectorA (vector<int> A)
{  
    int suma=0;
    for(int i=0;i<A.size();i++){
        suma+=A[i];
    }
    return suma;
}       
vector <int> MultiplicacionVector(vector<int>A ,vector<int>C)
{
    for(int i=0;i<A.size();i++){
         C.push_back(A[i]*2);
    }
    return C;
}    
void MostrarVectorC(vector<int> C)
{
    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << "/";
    }
    cout << endl;
}
    
    
    

