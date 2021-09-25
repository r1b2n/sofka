#include<iostream>
#include<cstdlib>
using namespace std;
class Pregunta
{
public:
	Pregunta(int, int, int, int, int);
	~Pregunta();
	void preguntasnivel1();
	int getPreguntarespuesta();
	int getPreguntacontadorpuntos();
	void Preguntasronda();
	void preguntasnivel2();
	void preguntasnivel3();
	void preguntasnivel4();
	void preguntasnivel5();
private:
	int nivel = 1, numaleatorio, respuesta, contadorpuntos = 0, ronda;
};

Pregunta::Pregunta(int _nivel, int _numaleatorio, int _respuesta, int _contadorpuntos, int _ronda) {
	nivel = _nivel;
	numaleatorio = _numaleatorio;
	respuesta = _respuesta;
	contadorpuntos = _contadorpuntos;
	ronda = _ronda;
}

Pregunta::~Pregunta()
{
}
void Pregunta::Preguntasronda() {
	cout << "bienvenido a la ronda " << ronda << endl;
	cout << "\n";
}
void Pregunta::preguntasnivel1() {
	srand(time(NULL));
	numaleatorio = 1 + rand() % (5);
	cout << "por 100 puntos la pregunta es:\n" << endl;
	switch (numaleatorio) {
	case 1: cout << "Las areas, en kilometros cuadrados, de algunos paises se dan a continuacion.\n1.UK: 242,400\n2.Russia: 17,098,242\n3.China: 9,598,094\n4.Canada: 9,984,670\n Cual de estos paises tiene menor area?" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 100;
			cout << "Respuesta Correcta has ganado 100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 2: cout << "Jim condujo 800 millas de un viaje de 1200 millas.\n Cuantas millas mas necesita manejar para terminar su viaje?\n1.400\n2.300\n3.390\n4.402" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 100;
			cout << "Respuesta Correcta has ganado 100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 3: cout << "Hay 4 cajas de dulces en una tienda. Hay 25 dulces en cada caja.\nCuantos dulces hay en la tienda?\n1. 100\n2. 98\n3. 200\n4. 102" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 100;
			cout << "Respuesta Correcta has ganado 100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		} break;

	case 4: cout << "si hoy es martes, que dia fue ayer?\n1. lunes\n2. miercoles\n3. jueves\n4. vienes" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 100;
			cout << "Respuesta Correcta has ganado 100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 5: cout << "si Jose recoge 2 manzanas por dia, cuantas manzanas recoge en 3 dias?\n1. 6\n2. 3\n3. 5\n4. 8" << endl;  cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 100;
			cout << "Respuesta Correcta has ganado 100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;
	}
}
void Pregunta::preguntasnivel2() {
	srand(time(NULL));
	numaleatorio = 1 + rand() % (5);
	cout << "por 300 puntos la pregunta es:" << endl;
	switch (numaleatorio) {
	case 1: cout << "Encuentra el elemento que sigue en el patron. 1,2,3,4,5\n1. 3\n2. 6\n3. 2 \n4. 7" << endl; cin >> respuesta;
		if (respuesta == 2) {
			contadorpuntos += 200;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 200 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 2: cout << "Encuentra el elemento que sigue en el patron. 1,3,5,7\n1. 9\n2. 5\n3. 3\n4. 1" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 200;
			cout << "Respuesta Correcta has ganado 200 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 3: cout << "Encuentra el elemento que sigue en el patron. 0,2,4,6\n1. 5\n2. 7\n3. 8\n4. 9" << endl; cin >> respuesta;
		if (respuesta == 3) {
			contadorpuntos += 200;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 200 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		} break;

	case 4: cout << "Encuentra el elemento que sigue en el patron. 0,3,6,9\n1. 3\n2. 1\n3. 2\n4. 12" << endl; cin >> respuesta;
		if (respuesta == 4) {
			contadorpuntos += 200;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 200 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 5: cout << "Encuentra el elemento que sigue en el patron. 3,13,23,33\n1. 43\n2. 22\n3. 50\n4. 30" << endl;  cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 200;
			cout << "Respuesta Correcta has ganado 200 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;
	}
}
void Pregunta::preguntasnivel3() {
	srand(time(NULL));
	numaleatorio = 1 + rand() % (5);
	cout << "por 500 puntos la pregunta es:" << endl;
	switch (numaleatorio) {
	case 1: cout << "345 + 289 =\n1. 300\n2. 600\n3. 200 \n4. 634" << endl; cin >> respuesta;
		if (respuesta == 4) {
			contadorpuntos += 500;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 500 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 2: cout << "Si agrega 1000 a 29898, obtiene\n1. 900\n2. 5000\n3. 30898\n4. 320918" << endl; cin >> respuesta;
		if (respuesta == 3) {
			contadorpuntos += 500;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 500 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 3: cout << "123 + 345 + 723 =\n1. 500\n2. 1191\n3. 800\n4. 9721" << endl; cin >> respuesta;
		if (respuesta == 2) {
			contadorpuntos += 500;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 500 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		} break;

	case 4: cout << "Si 15 + 20 = 20 + n, n es igual a\n1. 15\n2. 10\n3. 21\n4. 12" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 500;
			cout << "Respuesta Correcta has ganado 500 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 5: cout << "Si z + y = 20 e y = 5, cuanto es z?\n1. 43\n2. 12\n3. 50\n4. 15" << endl;  cin >> respuesta;
		if (respuesta == 4) {
			contadorpuntos += 500;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 500 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;
	}
}
void Pregunta::preguntasnivel4() {
	srand(time(NULL));
	numaleatorio = 1 + rand() % (5);
	cout << "por 900 puntos la pregunta es:" << endl;
	switch (numaleatorio) {
	case 1: cout << "Cual es la capital de Belgica\n1. kabul\n2. berlin\n3. bruselas \n4. tirana" << endl; cin >> respuesta;
		if (respuesta == 3) {
			contadorpuntos += 900;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 900 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 2: cout << "Cual es la capital de Brasil\n1. brasilia\n2. brasil\n3. bruselas\n4. praia" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 900;
			cout << "Respuesta Correcta has ganado 900 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 3: cout << "Cual es la capital de chile\n1. moroni\n2. santiago\n3. roseau\n4. nicosia" << endl; cin >> respuesta;
		if (respuesta == 2) {
			contadorpuntos += 900;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 900 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		} break;

	case 4: cout << "Cual es la capital de Italia\n1. tallin\n2. italia\n3. banju\n4. roma" << endl; cin >> respuesta;
		if (respuesta == 4) {
			contadorpuntos += 900;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 900 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 5: cout << "Cual es la capital de Rumania\n1. bucarest\n2. madrid\n3. zagreb\n4. asmara" << endl;  cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 900;
			cout << "Respuesta Correcta has ganado 900 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;
	}
}
void Pregunta::preguntasnivel5() {
	srand(time(NULL));
	numaleatorio = 1 + rand() % (5);
	cout << "por 1100 puntos y un carro ultimo modelo for la pregunta es:" << endl;
	switch (numaleatorio) {
	case 1: cout << "Que potencia disipa una resistencia R = 6 ohmios conectada en serie a una batería de 12 voltios\n1. 22W\n2. 15W\n3. 20W \n4. 24W" << endl; cin >> respuesta;
		if (respuesta == 4) {
			contadorpuntos += 1100;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 1100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 2: cout << "Que corriente electrica fluye por un circuito en serie si r= 5ohmios y v=10\n1. 2A\n2. 3A\n3. 5A\n4. 4A" << endl; cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 1100;
			cout << "Respuesta Correcta has ganado 1100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 3: cout << "En el lenguaje ensamblador la instrucción mov sirve para\n1. corrimientos de los bits a la izquierda\n2. activar carry bajo\n3. copiar un valor y guardar esa copia en un registro que puede ser alto o bajo \n4. no existe esa instruccion" << endl; cin >> respuesta;
		if (respuesta == 3) {
			contadorpuntos += 1100;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 1100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		} break;

	case 4: cout << "La información en el modo simplex viaja de que forma de qué forma\n1. en dos direcciones\n2. en una sola dirección\n3. en ambas direcciones pero solo puede transmitirse una a la vez\n4. no existe ese modo" << endl; cin >> respuesta;
		if (respuesta == 2) {
			contadorpuntos += 1100;
			respuesta = 1;
			cout << "Respuesta Correcta has ganado 1100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;

	case 5: cout << "Si convertimos el código binario 001011111001 a codigo gray este sera\n1. 2f9\n2. 3a3\n3. 2g9\n4. ccf" << endl;  cin >> respuesta;
		if (respuesta == 1) {
			contadorpuntos += 1100;
			cout << "Respuesta Correcta has ganado 1100 puntos\n" << endl;
		}
		else {
			cout << "Respuesta incorrecta" << endl;
		}break;
	}
}
int Pregunta::getPreguntarespuesta() {
	return respuesta;
}
int Pregunta::getPreguntacontadorpuntos() {
	return contadorpuntos;
}
int main() {
	int a = 1, anteriorrespuesta, contadoractual = 0, res, res1, res2, res3;
	cout << "QUIEN QUIERE SER MILLONARIO";
	cout << "\n";
	cout << "\ncada punto vale 10 dolares" << endl;
	Pregunta ronda(a, 0, 0, 0, 1);
	Pregunta nivel(a, 0, 0, 0, 1);
	nivel.Preguntasronda();
	nivel.preguntasnivel1();

	contadoractual += nivel.getPreguntacontadorpuntos();
	anteriorrespuesta = nivel.getPreguntarespuesta();
	if (anteriorrespuesta == 1) {
		cout << "ahora posee: " << contadoractual << " puntos" << endl;
		cout << "desea continuar?\n1. si\n2. no" << endl; cin >> res;
		if (res == 1)
		{
			system("cls");
			a += 1;
			Pregunta ronda(a, 0, 0, 0, 2);
			Pregunta nivel(a, 0, 0, 0, 2);
			nivel.Preguntasronda();
			nivel.preguntasnivel2();
			contadoractual += nivel.getPreguntacontadorpuntos();
			anteriorrespuesta = nivel.getPreguntarespuesta();
			if (anteriorrespuesta == 1) {
				cout << "ahora posee: " << contadoractual << " puntos" << endl;
				cout << "desea continuar?\n1. si\n2. no" << endl; cin >> res1;
				if (res1 == 1)
				{
					system("cls");
					a += 1;
					Pregunta ronda(a, 0, 0, 0, 3);
					Pregunta nivel(a, 0, 0, 0, 3);
					nivel.Preguntasronda();
					nivel.preguntasnivel3();
					contadoractual += nivel.getPreguntacontadorpuntos();
					anteriorrespuesta = nivel.getPreguntarespuesta();
					if (anteriorrespuesta == 1) {
						cout << "ahora posee: " << contadoractual << " puntos" << endl;
						cout << "desea continuar?\n1. si\n2. no" << endl; cin >> res2;
						if (res2 == 1)
						{
							system("cls");
							a += 1;
							Pregunta ronda(a, 0, 0, 0, 4);
							Pregunta nivel(a, 0, 0, 0, 4);
							nivel.Preguntasronda();
							nivel.preguntasnivel4();
							contadoractual += nivel.getPreguntacontadorpuntos();
							anteriorrespuesta = nivel.getPreguntarespuesta();
							if (anteriorrespuesta == 1) {
								cout << "ahora posee: " << contadoractual << " puntos" << endl;
								cout << "desea continuar?\n1. si\n2. no" << endl; cin >> res3;
								if (res3 == 1)
								{
									system("cls");
									a += 1;
									Pregunta ronda(a, 0, 0, 0, 5);
									Pregunta nivel(a, 0, 0, 0, 5);
									nivel.Preguntasronda();
									nivel.preguntasnivel5();
									contadoractual += nivel.getPreguntacontadorpuntos();
									anteriorrespuesta = nivel.getPreguntarespuesta();
									if (anteriorrespuesta == 1) {
										cout << "felicidades ganaste: " << contadoractual << " puntos" << endl;
										cout << "y de premio un maravilloso auto ultimo modelo marca Ford " << endl;
									}
								}
								switch (res3) {
								case 2:cout << "el juego a finalizado" << endl;
									cout << "tienes " << contadoractual << " puntos" << endl; break;
								}
							}
						}
						if (res2 == 2)
						{
							cout << "el juego a finalizado" << endl;
							cout << "los puntos que adquirio fueron: " << contadoractual << endl;
						}
					}
				}
				if (res1 == 2)
				{
					cout << "el juego a finalizado" << endl;
					cout << "los puntos que adquirio fueron: " << contadoractual << endl;
				}
			}
		}
		if (res == 2)
		{
			cout << "el juego a finalizado" << endl;
			cout << "los puntos que adquirio fueron: " << contadoractual << endl;
		}
	}
	if (anteriorrespuesta != 1)
	{
		cout << "el juego a finalizado" << endl;
		contadoractual = 0;
		cout << "los puntos totales fueron: " << contadoractual << endl;
	}
	system("pause");
	return 0;
}