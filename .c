#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;
int cantidad_ciudades;
int viajes;
int origen;
int destino;
int consultas;
int consultado;


typedef struct lista_adyacencia {
  int vertice;
  int marca;
  struct lista_adyacencia *vecinos;
} grafo;


void *inicializar(grafo *ciudades, int cantidad_ciudades)
{
  for (i = 0; i < cantidad_ciudades; i++) {
    ciudades[i]=(grafo*)malloc(sizeof(grafo));
    ciudades[i].vertice=i;
    ciudades[i].marca=0;
    ciudades[i].vecinos=NULL;
  }
}

int main() {
  FILE *fichero=fopen("input-edd-t3.txt","r");
  fscanf(fichero,"%d",&cantidad_ciudades);
  printf("%d\n",cantidad_ciudades);
  grafo *ciudades[cantidad_ciudades];
  inicializar(*ciudades, cantidad_ciudades);
  for (i = 0; i < cantidad_ciudades; i++) {
    printf("%d %d %s\n",ciudades[i]->vertice, ciudades[i]->marca, ciudades[i]->vecinos);
  }
  fscanf(fichero,"%d",&viajes);
  printf("%d\n",viajes);
  for (i = 0; i <viajes; i++) {
    fscanf(fichero,"%d %d",&origen,&destino);
    printf("%d %d\n", origen, destino);
  }
  fscanf(fichero,"%d",&consultas);
  printf("%d\n",consultas );
  for (i = 0; i < consultas; i++) {
    fscanf(fichero,"%d",&consultado);
    printf("%d\n",consultado);
  }
}
