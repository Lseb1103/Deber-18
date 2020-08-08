/*En el Almacén De Prati, se desea realizar un programa que llene un arreglo de 10 números enteros comprendidos entre un rango de 50 y 100. A continuación copiar en otro arreglo esos números multiplicados por 0,5 y finalmente mostrar ambos arreglos
*/
#include<iostream>
using namespace std;
void llenararreglo();
void multiplcararreglo(double a[]);
void imprimirarreglo(double a[], double b[]);
int main()
{
	llenararreglo();
	return 0;
}
void llenararreglo()
	{
	    double arreglo[10];
	    int val, contador = 0, x = 1;
	    bool ingresa = false;
	    do 
	    {
          cout << "Bienvenidos al almacén de Prati"<<endl;
	        cout << "Ingrese valor "<< x <<" de 10 valores,  entre 50 y 100:";
	        cin >> val;
	        if (val>=50 & val <=100)
	        {
	            arreglo[contador] = val;
	            contador++;
	            x++;
	        }
	        else
	        {
	            cout << "el valor no es valido" << endl;
	        }
	        if (contador==10)
	        {
	            ingresa = true;
	        }
	    } while (ingresa == false);
	    multiplcararreglo(arreglo);
	}
	void multiplcararreglo(double a[])
	{
	    double b[10];
	    for (int i = 0; i < 10; i++)
	    {
	        b[i] = a[i] * 0.5;
	    }
	    imprimirarreglo(a,b);
	} 
	void imprimirarreglo(double a[], double b[])
	{
	    cout << endl;
	    cout << "los valores multiplicados por 0.5 son " << endl;
	    cout << endl;
	    for (int i = 0; i < 10; i++)
	    {
	        cout << a[i] << " x " << "0.5" << " = " << b[i] << endl;
	    }
	}