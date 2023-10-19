#include <iostream>
#include <ctime>

using namespace std;

void movimiento(int dado[], char tablero[][9], int filcol[], char vistaH[]);
void pagar (char alfombras[][9], int plataA[], int plataR[],  int filcol[]);
void poner(char alfombras[][9], int filcol[],  int cantiA[], int cantiR[], char tablero[][9], int guia[][9], int numG[]);
void ganador (char alfombras[][9], int plataA[], int plataR[]);

int main()
{
cout<<endl;

    int acciones;
    srand(time(0));

    int dado[6] = {1,2,3,4,2,3};

    char vistaH[1] = {'d'};

    char tablero[9][9] = {' ', '1', '2', '3', '4', '5', '6', '7', ' ',
                          '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1',
                          '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '2',
                          '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '3',
                          '4', ' ', ' ', ' ', 'H', ' ', ' ', ' ', '4',
                          '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '5',
                          '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '6',
                          '7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '7',
                          ' ', '1', '2', '3', '4', '5', '6', '7', ' '
                         };

    char alfombras[9][9] = {' ', '1', '2', '3', '4', '5', '6', '7', ' ',
                            '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1',
                            '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '2',
                            '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '3',
                            '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '4',
                            '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '5',
                            '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '6',
                            '7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '7',
                            ' ', '1', '2', '3', '4', '5', '6', '7', ' '
                           };

    int guia[9][9] = {0, 0, 0, 0, 0, 0, 0, 0, 0,
                      0, 101, 102, 103, 104, 105, 106, 107, 0,
                      0, 108, 109, 110, 111, 112, 113, 114, 0,
                      0, 115, 116, 117, 118, 119, 120, 121, 0,
                      0, 122, 123, 124, 125, 126, 127, 128, 0,
                      0, 129, 130, 131, 132, 133, 134, 135, 0,
                      0, 136, 137, 138, 139, 140, 141, 142, 0,
                      0, 143, 144, 145, 146, 147, 148, 149, 0,
                      0, 0, 0, 0, 0, 0, 0, 0, 0,
                     };

    int numG[1]= {1};

    int cantiA[1] = {5};
    int cantiR[1] = {5};

    int filcol[2] = {4, 4};

    int i, j, x;

    //la posicion 0 son los 5 dirhams y la 1 son los de 1 dirham
    int plataA[2] = {5, 5};
    int plataR[2] = {5, 5};

    cout<<"\t     Bienvenido al Marrakech de Juan Esteban y Alejandro\n\n";

    do
    {
        cout<<"Tablero del juego\t\t\t   Tablero alfombras\n\n";

        for (i=0; i<9; i++)
        {
            cout<<" ";

            for (j=0; j<9; j++)
            {
                cout<<tablero[i][j];

                if (j<8)
                    cout<<" | ";
            }

            cout<<"    ||    ";

            for (x=0; x<9; x++)
            {
                cout<<alfombras[i][x];

                if (x<8)
                    cout<<" | ";

            }

            cout<<endl;
        }

        cout<<endl<<"1. Mover a Hassam";
        cout<<endl<<"2. Pagar diezmo";
        cout<<endl<<"3. Poner alfombras";
        cout<<endl<<"0. Salir";

        cout<<endl<<endl<<"Que deseas hacer? ";
        cin>>acciones;

        switch(acciones)
        {
        case 0:

            ganador (alfombras, plataA, plataR);

            break;

        case 1:

            movimiento(dado, tablero, filcol, vistaH);

            break;

        case 2:

            pagar (alfombras, plataA, plataR, filcol);

            break;

        case 3:

            poner(alfombras, filcol, cantiA, cantiR, tablero, guia,  numG);

            break;

        }

    }
    while (acciones != 0 );

cout<<endl;
}

void movimiento(int dado[], char tablero[][9], int filcol[], char vistaH[])
{
    char direccion, lanza;
    int x, d;
    int f, c;

    f = filcol[0];

    c = filcol[1];

    cout<<endl<<"Recuerda que no puedes dar media vuelta a Hassam, debes moverte hacia los lados de el";
    cout<<endl<<"Arriba - u";
    cout<<endl<<"Abajo - d";
    cout<<endl<<"Izquierda - l";
    cout<<endl<<"derecha - r";
    cout<<endl<<endl<<"Hacia que dirrecion quieres moverte? ";
    cin>>direccion;

    if (vistaH[0] == 'd' && direccion == 'u')
    {
        cout<<endl<<"no puedes girar en esa direccion";
        cout<<endl<<endl<<"Hacia que dirrecion quieres moverte? ";
        cin>>direccion;
    }

    else if (vistaH[0] == 'u' && direccion == 'd')
    {
        cout<<endl<<"no puedes girar en esa direccion";
        cout<<endl<<endl<<"Hacia que dirrecion quieres moverte? ";
        cin>>direccion;
    }

    else if (vistaH[0] == 'l' && direccion == 'r')
    {
        cout<<endl<<"no puedes girar en esa direccion";
        cout<<endl<<endl<<"Hacia que dirrecion quieres moverte? ";
        cin>>direccion;
    }

    else if (vistaH[0] == 'r' && direccion == 'l')
    {
        cout<<endl<<"no puedes girar en esa direccion";
        cout<<endl<<endl<<"Hacia que dirrecion quieres moverte? ";
        cin>>direccion;
    }



    cout<<endl<<"Pulsa la tecla 't' para tirar el dado ";
    cin>>lanza;

    switch (lanza)
    {
    case 't':
        x = rand()%6;

        break;
    }

    d = dado[x];

    cout<<endl<<"Haz lanzado un "<<d;

    while (d > 0)
    {
        switch (direccion)
        {
        case 'u':
            while (direccion == 'u' && d > 0)
            {
                if (f == 1 && c == 1)
                {
                    f = 1;
                    c = 1;
                    direccion = 'r';
                }
                else if (f == 1 && c == 2)
                {
                    tablero[f][c] = ' ';
                    f = 1;
                    c = 3;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'd';
                }
                else if (f == 1 && c == 3)
                {
                    tablero[f][c] = ' ';
                    f = 1;
                    c = 2;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'd';
                }
                else if (f == 1 && c == 4)
                {
                    tablero[f][c] = ' ';
                    f = 1;
                    c = 5;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'd';
                }
                else if (f == 1 && c == 5)
                {
                    tablero[f][c] = ' ';
                    f = 1;
                    c = 4;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'd';
                }
                else if (f == 1 && c == 6)
                {
                    tablero[f][c] = ' ';
                    f = 1;
                    c = 7;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'd';
                }
                else if (f == 1 && c == 7)
                {
                    tablero[f][c] = ' ';
                    f = 1;
                    c = 6;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'd';
                }
                else
                {
                    tablero[f][c] = ' ';
                    f = f - 1;
                    tablero[f][c] = 'H';
                    d = d - 1;
                }
            }
            break;

        case 'd':
            while (direccion == 'd' && d > 0)
            {
                if (f == 7 && c == 7)
                {
                    f = 7;
                    c = 7;
                    direccion = 'l';
                }
                else if (f == 7 && c == 1)
                {
                    tablero[f][c] = ' ';
                    f = 7;
                    c = 2;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'u';

                }
                else if (f == 7 && c == 2)
                {
                    tablero[f][c] = ' ';
                    f = 7;
                    c = 1;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'u';
                }
                else if (f == 7 && c == 3)
                {
                    tablero[f][c] = ' ';
                    f = 7;
                    c = 4;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'u';
                }
                else if (f == 7 && c == 4)
                {
                    tablero[f][c] = ' ';
                    f = 7;
                    c = 3;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'u';
                }
                else if (f == 7 && c == 5)
                {
                    tablero[f][c] = ' ';
                    f = 7;
                    c = 6;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'u';

                }
                else if (f == 7 && c == 6)
                {
                    tablero[f][c] = ' ';
                    f = 7;
                    c = 5;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'u';
                }
                else
                {
                    tablero[f][c] = ' ';
                    f = f + 1;
                    tablero[f][c] = 'H';
                    d = d - 1;
                }
            }
            break;

        case 'l':
            while (direccion == 'l' && d > 0)
            {
                if (f == 1 && c == 1)
                {
                    f = 1;
                    c = 1;
                    direccion = 'd';
                }
                else if (f == 2 && c == 1)
                {
                    tablero[f][c] = ' ';
                    f = 3;
                    c = 1;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'r';
                }
                else if (f == 3 && c == 1)
                {
                    tablero[f][c] = ' ';
                    f = 2;
                    c = 1;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'r';
                }
                else if (f == 4 && c == 1)
                {
                    tablero[f][c] = ' ';
                    f = 5;
                    c = 1;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'r';
                }
                else if (f == 5 && c == 1)
                {
                    tablero[f][c] = ' ';
                    f = 4;
                    c = 1;
                    d = d - 1;
                    tablero[f][c] = 'h';
                    direccion = 'r';
                }
                else if (f == 6 && c == 1)
                {
                    tablero[f][c] = ' ';
                    f = 7;
                    c = 1;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'r';
                }
                else if (f == 7 && c == 1)
                {
                    tablero[f][c] = ' ';
                    f = 6;
                    c = 1;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'r';
                }
                else
                {
                    tablero[f][c] = ' ';
                    c = c - 1;
                    tablero[f][c] = 'H';
                    d = d - 1;
                }
            }
            break;

        case 'r':
            while (direccion == 'r' && d > 0)
            {
                if (f == 7 && c == 7)
                {
                    f = 7;
                    c = 7;
                    direccion = 'u';
                }
                else if (f == 1 && c == 7)
                {
                    tablero[f][c] = ' ';
                    f = 2;
                    c = 7;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'l';
                }
                else if (f == 2 && c == 7)
                {
                    tablero[f][c] = ' ';
                    f = 1;
                    c = 7;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'l';
                }
                else if (f == 3 && c == 7)
                {
                    tablero[f][c] = ' ';
                    f = 4;
                    c = 7;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'l';
                }
                else if (f == 4 && c == 7)
                {
                    tablero[f][c] = ' ';
                    f = 3;
                    c = 7;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'l';
                }
                else if (f == 5 && c == 7)
                {
                    tablero[f][c] = ' ';
                    f = 6;
                    c = 7;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'l';
                }
                else if (f == 6 && c == 7)
                {
                    tablero[f][c] = ' ';
                    f = 5;
                    c = 7;
                    d = d - 1;
                    tablero[f][c] = 'H';
                    direccion = 'l';
                }
                else
                {
                    tablero[f][c] = ' ';
                    c = c + 1;
                    tablero[f][c] = 'H';
                    d = d - 1;
                }
            }
            break;


        }

    }

    filcol[0] = f;

    filcol[1] = c;

    vistaH[0] = direccion;

    cout<<endl<<endl;

}

void pagar (char alfombras[][9], int plataA[], int plataR[],  int filcol[])
{
    int i, conta = 0, f, c;
    char jugador;
    bool puedeUno = false, puedeDos = false, puedeTres = false, puedeCuatro = false;
    int totalA = (plataA[0]*5) + plataA[1];
    int totalR = (plataR[0]*5) + plataR[1];

    f= filcol[0];

    c= filcol[1];

    cout<<endl<<"Que jugador eres? ";
    cout<<endl<<"Pulsa la tecla 'a' si eres el azul";
    cout<<endl<<"o la tecla 'r' si eres el rojo";

    cout<<endl<<endl<<"Digite su opcion: ";
    cin>>jugador;

    switch (jugador)
    {
    case 'a':

        if (alfombras[f][c] == 'R')
        {
            conta++;

            for (i=(c+1); i<9; i++)
            {
                if (alfombras[f][i] == 'R')
                    conta++;

                else
                    break;
            }

            for (i=(c-1); i>0; i--)
            {
                if (alfombras[f][i] == 'R')
                    conta++;

                else
                    break;
            }

            for (i=(f-1); i>0; i--)
            {
                if (alfombras[i][c] == 'R')
                    conta++;

                else
                    break;
            }

            for (i=(f+1); i<9; i++)
            {
                if (alfombras[i][c] == 'R')
                    conta++;

                else
                    break;
            }

            if (alfombras[f-1][c-1] == 'R' && alfombras[f-1][c] == 'R')
                conta++;

            if (alfombras[f-2][c-1] == 'R' && alfombras[f-2][c] == 'R')
            {
                conta++;
                puedeUno = true;
            }
            if (alfombras[f-1][c-2] == 'R' && alfombras[f][c-2] == 'R')
            {
                conta++;
                puedeUno = true;
            }

            if (alfombras[f-2][c-2] == 'R' && puedeUno == true)
                conta++;

            // segundo

            if (alfombras[f-1][c+1] == 'R' && alfombras[f-1][c] == 'R')
                conta++;

            if (alfombras[f-2][c+1] == 'R' && alfombras[f-2][c] == 'R')
            {
                conta++;
                puedeDos = true;
            }
            if (alfombras[f-1][c+2] == 'R' && alfombras[f][c+2] == 'R')
            {
                conta++;
                puedeDos = true;
            }

            if (alfombras[f-2][c+2] == 'R' && puedeDos == true)
                conta++;

            //tercero

            if (alfombras[f+1][c-1] == 'R' && alfombras[f+1][c] == 'R')
                conta++;

            if (alfombras[f+2][c-1] == 'R' && alfombras[f+2][c] == 'R')
            {
                conta++;
                puedeTres = true;
            }
            if (alfombras[f+1][c-2] == 'R' && alfombras[f][c-2] == 'R')
            {
                conta++;
                puedeTres = true;
            }

            if (alfombras[f+2][c-2] == 'R' && puedeTres == true)
                conta++;

            //cuatro

            if (alfombras[f+1][c+1] == 'R' && alfombras[f+1][c] == 'R')
                conta++;

            if (alfombras[f+2][c+1] == 'R' && alfombras[f+2][c] == 'R')
            {
                conta++;
                puedeCuatro = true;
            }
            if (alfombras[f+1][c+2] == 'R' && alfombras[f][c+2] == 'R')
            {
                conta++;
                puedeCuatro = true;
            }

            if (alfombras[f+2][c+2] == 'R' && puedeCuatro == true)
                conta++;

            cout<<endl<<"Has caido en una alfombra Roja, pagaste "<<conta<<" dirhams\n";

            do
            {
                if (conta > totalA)
                {
                    cout<<"No tienes suficiente dinero";
                    break;
                }

                else if (conta >= 5 && plataA[0] > 0)
                {
                    conta = conta - 5;
                    plataA[0] = plataA[0] - 1;
                    plataR[0] = plataR[0] + 1;
                }

                else if (conta >= 1 && plataA[1] > 0)
                {
                    conta = conta - 1;
                    plataA[1] = plataA[1] - 1;
                    plataR[1] = plataR[1] + 1;
                }

            } while (conta > 0);

            cout<<endl<<"El jugador Azul tiene: "<<plataA[0]<<" monedas de 5 dirhams y "<<plataA[1]<<" monedas de un dirham";
            cout<<endl<<"El jugador Rojo tiene: "<<plataR[0]<<" monedas de 5 dirhams y "<<plataR[1]<<" monedas de un dirham\n\n";
        }

        else
             cout<<endl<<"No debes pagar nada\n\n";

        break;

    case 'r':

        if (alfombras[f][c] == 'A')
        {
            conta++;

            for (i=(c+1); i<9; i++)
            {
                if (alfombras[f][i] == 'A')
                    conta++;

                else
                    break;
            }

            for (i=(c-1); i>0; i--)
            {
                if (alfombras[f][i] == 'A')
                    conta++;

                else
                    break;
            }

            for (i=(f-1); i>0; i--)
            {
                if (alfombras[i][c] == 'A')
                    conta++;

                else
                    break;
            }

            for (i=(f+1); i<9; i++)
            {
                if (alfombras[i][c] == 'A')
                    conta++;

                else
                    break;
            }

            if (alfombras[f-1][c-1] == 'A' && alfombras[f-1][c] == 'A')
                conta++;

            if (alfombras[f-2][c-1] == 'A' && alfombras[f-2][c] == 'A')
            {
                conta++;
                puedeUno = true;
            }
            if (alfombras[f-1][c-2] == 'A' && alfombras[f][c-2] == 'A')
            {
                conta++;
                puedeUno = true;
            }

            if (alfombras[f-2][c-2] == 'A' && puedeUno == true)
                conta++;

            // segundo

            if (alfombras[f-1][c+1] == 'A' && alfombras[f-1][c] == 'A')
                conta++;

            if (alfombras[f-2][c+1] == 'A' && alfombras[f-2][c] == 'A')
            {
                conta++;
                puedeDos = true;
            }
            if (alfombras[f-1][c+2] == 'A' && alfombras[f][c+2] == 'A')
            {
                conta++;
                puedeDos = true;
            }

            if (alfombras[f-2][c+2] == 'A' && puedeDos == true)
                conta++;

            //tercero

            if (alfombras[f+1][c-1] == 'A' && alfombras[f+1][c] == 'A')
                conta++;

            if (alfombras[f+2][c-1] == 'A' && alfombras[f+2][c] == 'A')
            {
                conta++;
                puedeTres = true;
            }
            if (alfombras[f+1][c-2] == 'A' && alfombras[f][c-2] == 'A')
            {
                conta++;
                puedeTres = true;
            }

            if (alfombras[f+2][c-2] == 'A' && puedeTres == true)
                conta++;

            //cuatro

            if (alfombras[f+1][c+1] == 'A' && alfombras[f+1][c] == 'A')
                conta++;

            if (alfombras[f+2][c+1] == 'A' && alfombras[f+2][c] == 'A')
            {
                conta++;
                puedeCuatro = true;
            }
            if (alfombras[f+1][c+2] == 'A' && alfombras[f][c+2] == 'A')
            {
                conta++;
                puedeCuatro = true;
            }

            if (alfombras[f+2][c+2] == 'A' && puedeCuatro == true)
                conta++;

            cout<<endl<<"Has caido en una alfombra Azul, pagaste "<<conta<<" dirhams\n";

            do
            {
                if (conta > totalR)
                {
                    cout<<"No tienes suficiente dinero";
                    break;
                }

                else if (conta >= 5 && plataR[0] > 0)
                {
                    conta = conta - 5;
                    plataA[0] = plataA[0] + 1;
                    plataR[0] = plataR[0] - 1;
                }

                else if (conta >= 1 && plataR[1] > 0)
                {
                    conta = conta - 1;
                    plataA[1] = plataA[1] + 1;
                    plataR[1] = plataR[1] - 1;
                }

            } while (conta > 0);

            cout<<endl<<"El jugador Azul tiene: "<<plataA[0]<<" monedas de 5 dirhams y "<<plataA[1]<<" monedas de un dirham";
            cout<<endl<<"El jugador Rojo tiene: "<<plataR[0]<<" monedas de 5 dirhams y "<<plataR[1]<<" monedas de un dirham\n\n";
        }

        else
             cout<<endl<<"No debes pagar nada\n\n";


        break;
    }
}

void poner(char alfombras[][9], int filcol[],  int cantiA[], int cantiR[], char tablero[][9], int guia[][9], int numG[])
{
    int f, c, i, j, x, sigue, ponePrimera, auxF, auxC, poneSegunda, auxG;
    char jugador;

    cout<<endl<<"Es el momento de poner alfombras!";
    cout<<endl<<"(recuerda que una mitad debe estar adyacente con la posicion de Hassam)";

    cout<<endl<<endl<<"Tablero del juego\t\t\t   Tablero alfombras\n\n";

    for (i=0; i<9; i++)
    {
        cout<<" ";

        for (j=0; j<9; j++)
        {
            cout<<tablero[i][j];

            if (j<8)
                cout<<" | ";
        }

        cout<<"    ||    ";

        for (x=0; x<9; x++)
        {
            cout<<alfombras[i][x];

            if (x<8)
                cout<<" | ";

        }

        cout<<endl;
    }

    cout<<endl<<"Hassam esta en la fila "<<filcol[0]<<" y en la columna "<<filcol[1];
    cout<<endl<<endl<<"Que jugador eres? ";
    cout<<endl<<"Pulsa la tecla 'a' si eres el azul";
    cout<<endl<<"o la tecla 'r' si eres el rojo";

    cout<<endl<<endl<<"Digite su opcion: ";
    cin>>jugador;

    switch (jugador)
    {
    case 'a':

        cout<<endl<<"Tienes "<<cantiA[0]<<" alfombras";

        do
        {

            cout<<endl<<endl<<"Donde quieres poner la primera mitad de la alfombra? ";
            cout<<endl<<"(recuerda que debe ser adyacente con la posicion de Hassam) ";
            cout<<endl<<"Fila: ";
            cin>>f;
            cout<<"Columna: ";
            cin>>c;

            if (tablero[f][c] == 'H')
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (ahi esta Hassam)";
                ponePrimera=0;
            }
            else if (f == 0 || f == 8 || c == 0 || c == 8)
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (es el borde del tablero)";
                ponePrimera=0;
            }
            else if (f == (filcol[0]-1) && c == filcol[1])
            {
                alfombras[f][c] = 'A';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;

            }
            else if (f == (filcol[0]+1) && c == filcol[1])
            {
                alfombras[f][c] = 'A';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;
            }
            else if (f == filcol[0] && c == (filcol[1]+1))
            {
                alfombras[f][c] = 'A';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;
            }
            else if (f == filcol[0] && c == (filcol[1]-1))
            {
                alfombras[f][c] = 'A';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;
            }
            else
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion";
                ponePrimera=0;
            }
        }
        while (ponePrimera != 1);

        auxF = f;
        auxC = c;

        do
        {

            cout<<endl<<"Donde quieres poner la segunda mitad de la alfombra? ";
            cout<<endl<<"(recuerda que debe ser adyacente con la primera mitad) ";
            cout<<endl<<"Fila: ";
            cin>>f;
            cout<<"Columna: ";
            cin>>c;

            if (tablero[f][c] == 'H')
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (ahi esta Hassam)";
                poneSegunda=0;
            }
            else if (f == 0 || f == 8 || c == 0 || c == 8)
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (es el borde del tablero)";
                poneSegunda=0;
            }
            else if (auxG == guia[f][c])
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (tapas una alfombra completa)";
                poneSegunda=0;
            }
            else if (f == (auxF-1) && c == auxC)
            {
                alfombras[f][c] = 'A';
                guia[f][c] = numG[0];
                cantiA[0] = cantiA[0] - 1;
                poneSegunda=1;

            }
            else if (f == (auxF+1) && c == auxC)
            {
                alfombras[f][c] = 'A';
                guia[f][c] = numG[0];
                cantiA[0] = cantiA[0] - 1;
                poneSegunda=1;
            }
            else if (f == auxF && c == (auxC+1))
            {
                alfombras[f][c] = 'A';
                guia[f][c] = numG[0];
                cantiA[0] = cantiA[0] - 1;
                poneSegunda=1;
            }
            else if (f == auxF && c == (auxC-1))
            {
                alfombras[f][c] = 'A';
                guia[f][c] = numG[0];
                cantiA[0] = cantiA[0] - 1;
                poneSegunda=1;
            }
            else
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion";
                poneSegunda=0;
            }

        }
        while (poneSegunda != 1);

        numG[0]++;

        break;

    case 'r':

        cout<<endl<<"Tienes "<<cantiR[0]<<" alfombras";

        do
        {

            cout<<endl<<endl<<"Donde quieres poner la primera mitad de la alfombra? ";
            cout<<endl<<"(recuerda que debe ser adyacente con la posicion de Hassam) ";
            cout<<endl<<"Fila: ";
            cin>>f;
            cout<<"Columna: ";
            cin>>c;

            if (tablero[f][c] == 'H')
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (ahi esta Hassam)";
                ponePrimera=0;
            }
            else if (f == 0 || f == 8 || c == 0 || c == 8)
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (es el borde del tablero)";
                ponePrimera=0;
            }
            else if (f == (filcol[0]-1) && c == filcol[1])
            {
                alfombras[f][c] = 'R';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;

            }
            else if (f == (filcol[0]+1) && c == filcol[1])
            {
                alfombras[f][c] = 'R';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;
            }
            else if (f == filcol[0] && c == (filcol[1]+1))
            {
                alfombras[f][c] = 'R';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;
            }
            else if (f == filcol[0] && c == (filcol[1]-1))
            {
                alfombras[f][c] = 'R';
                auxG = guia[f][c];
                guia[f][c] = numG[0];
                ponePrimera=1;
            }
            else
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion";
                ponePrimera=0;
            }
        }
        while (ponePrimera != 1);

        auxF = f;
        auxC = c;

        do
        {

            cout<<endl<<"Donde quieres poner la segunda mitad de la alfombra? ";
            cout<<endl<<"(recuerda que debe ser adyacente con la primera mitad) ";
            cout<<endl<<"Fila: ";
            cin>>f;
            cout<<"Columna: ";
            cin>>c;

            if (tablero[f][c] == 'H')
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (ahi esta Hassam)";
                poneSegunda=0;
            }
            else if (f == 0 || f == 8 || c == 0 || c == 8)
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (es el borde del tablero)";
                poneSegunda=0;
            }
            else if (auxG == guia[f][c])
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion (tapas una alfombra completa)";
                poneSegunda=0;
            }
            else if (f == (auxF-1) && c == auxC)
            {
                alfombras[f][c] = 'R';
                guia[f][c] = numG[0];
                cantiR[0] = cantiR[0] - 1;
                poneSegunda=1;

            }
            else if (f == (auxF+1) && c == auxC)
            {
                alfombras[f][c] = 'R';
                guia[f][c] = numG[0];
                cantiR[0] = cantiR[0] - 1;
                poneSegunda=1;
            }
            else if (f == auxF && c == (auxC+1))
            {
                alfombras[f][c] = 'R';
                guia[f][c] = numG[0];
                cantiR[0] = cantiR[0] - 1;
                poneSegunda=1;
            }
            else if (f == auxF && c == (auxC-1))
            {
                alfombras[f][c] = 'R';
                guia[f][c] = numG[0];
                cantiR[0] = cantiR[0] - 1;
                poneSegunda=1;
            }
            else
            {
                cout<<endl<<"No puedes poner una alfombra en esa posicion";
                poneSegunda=0;
            }

        }
        while (poneSegunda != 1);

        numG[0]++;

        break;

    }

    cout<<endl<<"Tablero del juego\t\t\t   Tablero alfombras\n\n";

    for (i=0; i<9; i++)
    {
        for (j=0; j<9; j++)
        {
            cout<<tablero[i][j];

            if (j<8)
                cout<<" | ";
        }

        cout<<"    ||    ";

        for (x=0; x<9; x++)
        {
            cout<<alfombras[i][x];

            if (x<8)
                cout<<" | ";

        }

        cout<<endl;
    }


    cout<<endl<<"Asi queda el tablero de alfombras pulsa la tecla '1' para continuar ";
    cin>>sigue;

    switch (sigue)
    {
    case '1':

        break;
    }

    cout<<endl;

}

void ganador (char alfombras[][9], int plataA[], int plataR[])
{
    int i, j;
    int contaAzul = 0, contaRojo = 0;
    int puntosA, puntosR;

    for (i=0; i<7; i++)
    {
        for (j=0; j<7; j++)
        {
            if (alfombras[i][j] == 'A')
                contaAzul++;
            else if (alfombras[i][j] == 'R')
                contaRojo++;
        }
    }

    puntosA = contaAzul + (plataA[0]*5) + plataA[1];

    puntosR = contaRojo + (plataR[0]*5) + plataR[1];

    if (puntosA == puntosR)
        cout<<endl<<"Hubo un empate!\n";

    else if (puntosA < puntosR)
        cout<<endl<<"El ganador fue el jugador Rojo!\n";

    else if (puntosA > puntosR)
        cout<<endl<<"El ganador fue el jugador Azul!\n";

    cout<<"Jugador azul: "<<puntosA<< " puntos";
    cout<<endl<<"Jugador rojo: "<<puntosR<< " puntos";


    cout<<endl<<endl<<"Gracias por jugar a nuestro juego!";

    cout<<endl;

}
