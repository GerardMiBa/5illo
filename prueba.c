#define <stdio.h>

typedef struct {
    int numero;     // Valor de la carta (1-12 en el caso español)
    char palo[10];  // Palo de la carta (oros, copas, espadas, bastos)
} Carta;

// Definimos una baraja
typedef struct {
    Carta cartas[48];  // Máximo de 48 cartas en la baraja española
    int cantidad;      // Número de cartas en la baraja
} Baraja;

// Definimos un jugador
typedef struct {
    char nombre[50];
    Carta mano[12];    // Cartas en la mano del jugador
    int cantidadCartas; // Número de cartas en la mano
} Jugador;

// Definimos la mesa
typedef struct {
    Carta tablero[48]; // Representa las cartas jugadas en el tablero
    int cantidadCartas; // Número de cartas en el tablero
} Mesa;

// Definimos una partida
typedef struct {
    Baraja baraja;
    Mesa mesa;
    Jugador jugadores[4]; // Hasta 4 jugadores
    int turnoActual;       // Índice del jugador actual
} Partida;

int main(){
    
}
