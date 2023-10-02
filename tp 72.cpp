#include <bits\stdc++.h>
using namespace std;

vector<int>GenerarVector(vector<int> A , int n=100);
int Sumar(vector <int> vec);
void MostrarVector(vector<int> A);

int main()
{
	vector<int> A;
    int suma;
    int N=100;
	A=GenerarVector(A ,N);
	suma=Sumar(A);
	
	MostrarVector(A);
	
	cout<<"la suma total de los elementos del vector: "<<suma<<endl;
	return 0;
}

vector<int>GenerarVector(vector<int> A , int N)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<N; i++)
	{
		e=rand()%50;
		
	A.push_back (e);
	}
	return A;
}

int Sumar(vector <int> vec)
{
	int i;
	int suma=0;
	for(i=0; i<vec.size(); i++)
	{
		suma+=i;
	}
	return suma;
}

void MostrarVector(vector <int> A)
{
	int i;
	
	for( i=0; i<A.size(); i++ )
	{
	
	cout<<A[i]<<"/";
	}
		cout<<endl;
}

