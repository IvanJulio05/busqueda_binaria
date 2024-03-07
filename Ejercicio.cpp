#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros que desea: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los numero:\n";
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Burbuja
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
            
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
	system("cls");
    cout << "Numeros ordenados:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
	
	//busqueda binaria
	cout<<"\n\tBUSQUEDA"<<endl;
	int nBuscar;
	string opcion;
	
	do{
		int medio=n/2;
		int max=n-1;
		int min=0;
		bool encontro=true;
		cout<<"Numero a buscar: ";cin>>nBuscar;
		
		for(int i=0;i<n && encontro;i++){
			if(nBuscar==arr[medio]){
				encontro=false;
			}
			if(arr[medio]>nBuscar){
				max=medio;
				medio=((max-min)/2);
				
			}
			else if(arr[medio]<nBuscar){
				min=medio;
				if(medio==n-2){
					medio=n-1;
				}
				else{
					medio=((max-min)/2)+min;
				}
				
				
			}
		}
		
		cout<<endl;
		if(!encontro || nBuscar==arr[medio]){
			for(int j=0;j<n;j++){
				if(j!=medio){
					cout<<arr[j]<<"-";	
				}
				else{
					cout<<"-["<<arr[medio]<<"]-";
				}
				
			}
			cout<<endl<<endl;
		}
		else{
			cout<<"no existe"<<endl;
		}
				
		
		cout<<"Volver a buscar [0=SI] [1=NO]: ";cin>>opcion;
	}while(opcion!="1");
	
	
	return 0;
}
