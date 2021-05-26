#include<iostream>
using namespace std;

int const filas=4;
int const columnas=5;
int puertos=0;
string nombrePuertos="";
int contenedores=0;
int coordenadasFilas=-1;
int coordenadasColumnas=-1;
string marcas="";
int pesos=0;
string tipoArticulo="";
int cantidadContenedores=0;
float ocupacion=0.0;
int zonaEconomica=0;
int zonaPremium=0;


int Cantidadpuertos(int puertos[filas][columnas] string nombrePuertos[filas][columnas] int contenedores);
int coordenadas(int contenedores[fila][columnas]int coordenadasFilas, int coordenadasColumnas, bool disponibilidad[filas][columnas] string marcas, int pesos, string tipoArticulo);
float calcularOcupacion(bool disponibilidad[filas][columnas], float ocupacion);
int valorReacuadadoPuerto(string puertoCarga[filas][columnas],string nombrePuertos)
void listadoMarcasEconomicas(string marcas[filas][columnas]);
void burbuja(string nombrePuertos[], int cantidadContenedores[]);
void imprimirCantidadContenedores(bool disponibilidad[filas][columnas]);
void mostrarDisponibles(bool disponibilidad[filas][columnas]);
void imprimirMatrizPuertos(int puertos[filas][columnas]);
void limpiarMatrizPuertos(int puertos[filas][columnas] string nombrePuertos[filas][columnas]);
void imprimirMatrizBooleana(bool matriz[filas][columnas]);
void limpiarMatriz(bool disponibilidad[filas][columnas],int pesos[filas][columnas]);
void imprimirMatrizTexto(string matriz[filas][columnas]);
void imprimirMatrizEnteros(int matriz[filas][columnas]);

int main(){
	bool disponibilidad[filas][columnas];
	string marcas[filas][columnas];
	string puertoCarga[filas][columnas];
	string tipoArticulo[filas][columnas];
	int pesos[filas][columnas];
	int puertos[filas][columnas];
	limpiarMatriz(disponibilidad,pesos);
	limpiarMatrizPuertos(puertos,nombrePuertos);
    string nombrePuertos[filas][columnas];
    int contenedores[filas][columnas];
    int burbuja[filas][columnas];
    int cantidadPuertos[filas][columnas];
    int coordenadas[filas][columnas];

    
	cout<<"Matriz disponibilidad"<<endl;
	imprimirMatrizBooleana(disponibilidad);
	
	cout<<"Matriz marcas"<<endl;
	imprimirMatrizTexto(marcas);
	cout<<"Matriz puerto carga"<<endl;
	imprimirMatrizTexto(puertoCarga);
	cout<<"Matriz tipo articulo"<<endl;
	imprimirMatrizTexto(tipoArticulo);
	
	cout<<"Matriz pesos"<<endl;
	imprimirMatrizEnteros(pesos);
	
	cout<<"Matriz Puertos"<<endl;
	imprimirMatrizPuertos(puertos);
	
	cout<<"Ingrese la cantidad de puertos"<<endl;
	cin>>puertos;
	
	
	
	return 0;
}
void limpiarMatriz(bool disponibilidad[filas][columnas],int pesos[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			disponibilidad[i][j]=1;	
			pesos[i][j]=0;
		}
	}
}
void imprimirMatrizBooleana(bool matriz[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void imprimirMatrizTexto(string matriz[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void imprimirMatrizEnteros(int matriz[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void mostrarDisponibles(bool disponibilidad[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(disponibilidad[i][j]==1){
				cout<<i<<","<<j<<endl;
			}
		}

	}
}
void limpiarMatrizPuertos(int puertos[filas][columnas] string nombrePuertos[filas][columnas] ){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			puertos[i][j]=1;	
			nombrePuertos[i][j]=0;
		}
	}
}

void imprimirMatrizPuertos(int puertos[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<puertos[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int Cantidadpuertos(int puertos[filas][columnas] string nombrePuertos[filas][columnas] int contenedores){
	for(int i=0<i<puertos;i++){
		for(int j=0;j<nombrePuertos;j++){
			cout<<"Ingrese la cantidad de contenedores a ingresar al puerto"<<endl;
			cin>>contenedores;
			contenedores=puertos+nombrePuertos;
		}
	}
}
void mostrarDisponibles(bool disponibilidad[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if (disponibilidad[i][j]==1){
				cout<<i<<j<<endl;
			}
		}
	}
}
int coordenadas(int contenedores[fila][columnas]int coordenadasFilas, int coordenadasColumnas, bool disponibilidad[filas][columnas] string marcas, int pesos, string tipoArticulo){

    for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			contenedores[i][j]=0;
		}
	
	}
		for(int i=0;i<filas;i++){
		  for(int j=0;j<columnas;j++){
			cout<<contenedores[i][j]<<"\t";
			}do{
				cout<<"Ingrese la coordenada de la fila"<<endl;
				cin>>coordenadasFilas;
				cout<<"Ingrese la coordenada de la columna"<<endl;
				cin>>coordenadasColumnas;
			}
		}
			if(disponibilidad[coordenadasFilas][coordenadasColumnas]==1){
				
				cout<<"Ingrese el tipo de marca "<<endl;
				cin>>marcas;
				cout<<"Ingrese la cantidad de pesos"<<endl;
				cin>>pesos;
				cout<<"Ingrese el tipo de Articulo"<<endl;
				cin>>tipoArticulo;
				disponibilidad=marca+peso+tipoArticulo;
				cin>>disponibilidad[coordenadasFilas][coordenadasColumnas];
				}
				else{
				cout"La posicion se encuentra ocupada"<<endl;
				}
				while(disponibilidad[coordenadasFilas][coordenadasColumnas]!=0)
				   for(int i=0;i<filas;i++){
		            for(int j=0;j<columnas;j++){
			           cout<<disponibilidad[i][j]<<"\t";
			 	cout<<"Ingrese el tipo de marca "<<endl;
				cin>>marcas;
				cout<<"Ingrese la cantidad de pesos"<<endl;
				cin>>pesos;
				cout<<"Ingrese el tipo de Articulo"<<endl;
				cin>>tipoArticulo;
			
	}
	cout<<endl;
}
float calcularOcupacion(bool disponibilidad[filas][columnas],float ocupacion){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(disponibilidad[i][j]==0){
				contador=contador+1;
			}
		}
		ocupacion=(contador*100)/(filas*columnas);
	}
	
	
	
}


int valorReacuadadoPuerto(string puertoCarga[filas][columnas],string nombrePuertos){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;++){
			if}(filas==0 && filas==3) (columnas==0 && columnas==4){
				zonaEconomica=zonaEconomica+100;
				}
			else (filas<2 && filas>1){
				zonaPremium=zonaPremium+300;
			}
	
		}
	}
	
	
	
}


void imprimirCantidadContenedores(bool disponibilidad[filas][columnas]){
	int contador=0;
	for(int i=0;i<filas;i++){
       for(int j=0;j<columnas;j++){
	        if(disponibilidad[i][j]==0){
	        	contador=contador+1;
			}
        }

    }
cout<<"La cantidad de contenedores en el barco es"<<endl;
} 

void burbuja(string nombrePuertos[], int cantidadContenedores[]){
	for(int i=0;i<nombrePuertos;i++){
		for(int j=0;j<cantidadContenedores;j++){
			if(nombrePuertos[i]<cantidadContenedores[j]){
				int aux=nombrePuertos[i];
				nombrePuertos[i]=cantidadContenedores[j];
				cantidadContenedores[j]=aux;
			}
		}
	}
}
void listadoMarcasEconomicas(string marcas[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			marcas=marcas+zonaEconomica
			cout<<marcas[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void listadoMarcasEconomicas(string marcas[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			marcas=marcas+zonaPremium;
			cout<<marcas[i][j]<<"\t";
		}
		cout<<endl;
	}
}



