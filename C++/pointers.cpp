#include <iostream> 

int main() {
	int *p; //puntero a enteros
	int x, y, z; 
	x = 1;
	p = &x; // p apunta a x
	std::cout << p << " " << *p << std::endl;  
	std::cout << p << std::endl; 
	// p => direccion memoria de x, *p = valor que hay en la direcion de memoria de x 
	x = 2; 
	y = *p; //y = x;
	std::cout << y << " " << x << std::endl; 	
	*p = 3; //x = 3; 
	y = (*p)++; //x = 4 e y = 3
	std::cout << y << std::endl;
	z = *p++; // z = 4 e x = 4
	std::cout << z << " " << x << std::endl;
	std::cout << p << std::endl; //p deja de apuntar a x IMPORTANTE
	p = &x; // p vuelve a apuntar a x
	std::cout << p << std::endl; 
}
